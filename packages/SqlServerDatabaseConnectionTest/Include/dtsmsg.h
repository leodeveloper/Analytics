////////////////////////////////////////////////////////////////////////////
//	Copyright (c) 2014 Microsoft Corporation
//
//	This file contains all the US english event messages and
//	HRESULTs for the SQL Data Transformation Services
//	Runtime, Pipeline, stock tasks, and stock transforms.
//
//
//
// Message and HRESULT naming convention
//
// Error HRESULTs -
//		Begin with DTS_E_
//		End with the description of the failed operation
// 
// Warning HRESULTs -
//		Begin with DTS_W_
//		End with the description of the warning operation
//
// Information HRESULTs -
//		Begin with DTS_I_
//		End with the description of the operation
// 
// Success HRESULTs -
//		Begin with DTS_S_
//		End with the description of the successful operation
//
// Messages for the event log -
//		Begin with DTS_MSG_
//		End with the description of the message
//		
//
//
//  Values are 32 bit values laid out as follows:
//
//   3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1
//   1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0
//  +---+-+-+-----------------------+-------------------------------+
//  |Sev|C|R|     Facility          |               Code            |
//  +---+-+-+-----------------------+-------------------------------+
//
//  where
//
//      Sev - is the severity code
//
//          00 - Success
//          01 - Informational
//          10 - Warning
//          11 - Error
//
//      C - is the Customer code flag
//
//      R - is a reserved bit
//
//      Facility - is the facility code
//
//      Code - is the facility's status code
//
//
// Define the facility codes
//
#define DTS_FACILITY_TOOLS               0x10
#define DTS_FACILITY_TASK                0x2
#define DTS_FACILITY_SQL                 0xA
#define DTS_FACILITY_SCRIPTING           0x8
#define DTS_FACILITY_RUNTIME             0x1
#define DTS_FACILITY_GENERIC             0x0
#define DTS_FACILITY_PIPELINE            0x4
#define DTS_FACILITY_CONNECTION          0xF
#define DTS_FACILITY_COMPONENT           0x20
#define DTS_FACILITY_BASECLASS           0x800


//
// Define the severity codes
//
#define DTS_SEVERITY_WARNING             0x2
#define DTS_SEVERITY_SUCCESS             0x0
#define DTS_SEVERITY_INFORMATIONAL       0x1
#define DTS_SEVERITY_ERROR               0x3


//
// MessageId: DTSBC_E_INCORRECTEXACTNUMBEROFTOTALOUTPUTS
//
// MessageText:
//
// The total number of outputs and error outputs, %1!lu!, is incorrect. There must be exactly %2!lu!.
//
#define DTSBC_E_INCORRECTEXACTNUMBEROFTOTALOUTPUTS ((HRESULT)0xC8000002L)

//
// MessageId: DTSBC_E_FAILEDTOGETOUTPUTBYINDEX
//
// MessageText:
//
// Cannot retrieve output with index %1!lu!.
//
#define DTSBC_E_FAILEDTOGETOUTPUTBYINDEX ((HRESULT)0xC8000003L)

//
// MessageId: DTSBC_E_INCORRECTEXACTNUMBEROFERROROUTPUTS
//
// MessageText:
//
// The number of error outputs, %1!lu!,  is incorrect. There must be exactly %2!lu!.
//
#define DTSBC_E_INCORRECTEXACTNUMBEROFERROROUTPUTS ((HRESULT)0xC8000005L)

//
// MessageId: DTSBC_E_INVALIDVALIDATIONSTATUSVALUE
//
// MessageText:
//
// Incorrect validation status value, "%1!lu! ".  It must be one of the values found in the DTSValidationStatus enumeration.
//
#define DTSBC_E_INVALIDVALIDATIONSTATUSVALUE ((HRESULT)0xC8000006L)

//
// MessageId: DTSBC_E_INPUTHASNOOUTPUT
//
// MessageText:
//
// The input "%1!lu!" has no synchronous output.
//
#define DTSBC_E_INPUTHASNOOUTPUT         ((HRESULT)0xC8000007L)

//
// MessageId: DTSBC_E_INPUTHASNOERROROUTPUT
//
// MessageText:
//
// The input "%1!lu!" has no synchronous error output.
//
#define DTSBC_E_INPUTHASNOERROROUTPUT    ((HRESULT)0xC8000008L)

//
// MessageId: DTSBC_E_INVALIDHTPIVALUE
//
// MessageText:
//
// The HowToProcessInput value, %1!lu!, is not valid. It must be one of the values from the HowToProcessInput enumeration.
//
#define DTSBC_E_INVALIDHTPIVALUE         ((HRESULT)0xC8000009L)

//
// MessageId: DTSBC_E_FAILEDTOGETCOLINFO
//
// MessageText:
//
// Failed to get information for row "%1!ld!", column "%2!ld!" from the buffer.  The error code returned was 0x%3!8.8X!.
//
#define DTSBC_E_FAILEDTOGETCOLINFO       ((HRESULT)0xC800000AL)

//
// MessageId: DTSBC_E_FAILEDTOSETCOLINFO
//
// MessageText:
//
// Failed to set information for row "%1!ld!", column "%2!ld!" into the buffer.  The error code returned was 0x%3!8.8X!.
//
#define DTSBC_E_FAILEDTOSETCOLINFO       ((HRESULT)0xC800000BL)

//
// MessageId: DTSBC_E_INVALIDPROPERTY
//
// MessageText:
//
// The property "%1!s!" is not valid.
//
#define DTSBC_E_INVALIDPROPERTY          ((HRESULT)0xC800000CL)

//
// MessageId: DTSBC_E_PROPERTYNOTFOUND
//
// MessageText:
//
// The property "%1!s!" was not found.
//
#define DTSBC_E_PROPERTYNOTFOUND         ((HRESULT)0xC800000DL)

//
// MessageId: DTSBC_E_READONLYPROPERTY
//
// MessageText:
//
// Error assigning a value to the read-only property "%1!s!".
//
#define DTSBC_E_READONLYPROPERTY         ((HRESULT)0xC8000010L)

//
// MessageId: DTSBC_E_CANTINSERTOUTPUTCOLUMN
//
// MessageText:
//
// The %1!s! does not allow the insertion of output columns.
//
#define DTSBC_E_CANTINSERTOUTPUTCOLUMN   ((HRESULT)0xC8000011L)

//
// MessageId: DTSBC_E_OUTPUTCOLUMNSMETADATAMISMATCH
//
// MessageText:
//
// The output columns' metadata does not match the associated input columns' metadata.  The output columns' metadata will be updated.
//
#define DTSBC_E_OUTPUTCOLUMNSMETADATAMISMATCH ((HRESULT)0xC8000012L)

//
// MessageId: DTSBC_E_OUTPUTCOLUMNSMISSING
//
// MessageText:
//
// There are input columns that do not have associated output columns. The output columns will be added.
//
#define DTSBC_E_OUTPUTCOLUMNSMISSING     ((HRESULT)0xC8000013L)

//
// MessageId: DTSBC_E_TOOMANYOUTPUTCOLUMNS
//
// MessageText:
//
// There are output columns that do not have associated input columns. The output columns will be removed.
//
#define DTSBC_E_TOOMANYOUTPUTCOLUMNS     ((HRESULT)0xC8000014L)

//
// MessageId: DTSBC_E_OUTPUTCOLUMNSMETADATAMISMATCHUNMAP
//
// MessageText:
//
// The output columns' metadata does not match the associated input columns' metadata.  The input columns will be unmapped.
//
#define DTSBC_E_OUTPUTCOLUMNSMETADATAMISMATCHUNMAP ((HRESULT)0xC8000015L)

//
// MessageId: DTSBC_E_UNMAPINPUTCOLUMNS
//
// MessageText:
//
// There are input columns that do not have associated output columns. The input columns will be unmapped.
//
#define DTSBC_E_UNMAPINPUTCOLUMNS        ((HRESULT)0xC8000016L)

//
// MessageId: DTSBC_E_MULTIPLEINCOLSTOOUTCOL
//
// MessageText:
//
// There is an input column associated with an output column, and that output column is already associated with another input column on the same input.
//
#define DTSBC_E_MULTIPLEINCOLSTOOUTCOL   ((HRESULT)0xC8000017L)

//
// MessageId: DTSBC_E_CANTINSERTEXTERNALMETADATACOLUMN
//
// MessageText:
//
// The %1!s! does not allow the insertion of external metadata columns.
//
#define DTSBC_E_CANTINSERTEXTERNALMETADATACOLUMN ((HRESULT)0xC8000018L)

////////////////////////////////////////////////////////////////////////////
// Check SQLCommand property object.

//
// MessageId: DTS_E_MISSINGSQLCOMMAND
//
// MessageText:
//
// The SQL command has not been set correctly. Check SQLCommand property.
//
#define DTS_E_MISSINGSQLCOMMAND          ((HRESULT)0xC0202001L)

//
// MessageId: DTS_E_COMERROR
//
// MessageText:
//
// COM error object information is available.  Source: "%1!s!"  error code: 0x%2!8.8X!  Description: "%3!s!".
//
#define DTS_E_COMERROR                   ((HRESULT)0xC0202002L)

//
// MessageId: DTS_E_ACQUIREDCONNECTIONUNAVAILABLE
//
// MessageText:
//
// Unable to access the acquired connections.
//
#define DTS_E_ACQUIREDCONNECTIONUNAVAILABLE ((HRESULT)0xC0202003L)

//
// MessageId: DTS_E_INCORRECTCOLUMNCOUNT
//
// MessageText:
//
// The number of columns is incorrect.
//
#define DTS_E_INCORRECTCOLUMNCOUNT       ((HRESULT)0xC0202004L)

//
// MessageId: DTS_E_COLUMNNOTFOUND
//
// MessageText:
//
// Column "%1!s!" cannot be found at the datasource.
//
#define DTS_E_COLUMNNOTFOUND             ((HRESULT)0xC0202005L)

//
// MessageId: DTS_E_OLEDBRECORD
//
// MessageText:
//
// An OLE DB record is available.  Source: "%1!s!"  Hresult: 0x%2!8.8X!  Description: "%3!s!".
//
#define DTS_E_OLEDBRECORD                ((HRESULT)0xC0202007L)

//
// MessageId: DTS_E_OLEDBERROR
//
// MessageText:
//
// SSIS Error Code DTS_E_OLEDBERROR.  An OLE DB error has occurred. Error code: 0x%1!8.8X!.
//
#define DTS_E_OLEDBERROR                 ((HRESULT)0xC0202009L)

////////////////////////////////////////////////////////////////////////////
// Need to call disconnect before calling connect.

//
// MessageId: DTS_E_ALREADYCONNECTED
//
// MessageText:
//
// Component is already connected. The component needs to be disconnected before attempting to connect it.
//
#define DTS_E_ALREADYCONNECTED           ((HRESULT)0xC020200AL)

//
// MessageId: DTS_E_INCORRECTSTOCKPROPERTYVALUE
//
// MessageText:
//
// The value of the property "%1!s!" is incorrect.
//
#define DTS_E_INCORRECTSTOCKPROPERTYVALUE ((HRESULT)0xC020200BL)

//
// MessageId: DTS_E_CANNOTOPENDATAFILE
//
// MessageText:
//
// Cannot open the datafile "%1!s!".
//
#define DTS_E_CANNOTOPENDATAFILE         ((HRESULT)0xC020200EL)

////////////////////////////////////////////////////////////////////////////
// Make sure the flat file connection manager is configured with a connection string.  If the flat file connection manager is used by multiple components, the connection string may not contain enough file names.

//
// MessageId: DTS_E_DESTINATIONFLATFILEREQUIRED
//
// MessageText:
//
// No destination flat file name was provided. Make sure the flat file connection manager is configured with a connection string. If the flat file connection manager is used by multiple components, ensure that the connection string contains enough file names.
//
#define DTS_E_DESTINATIONFLATFILEREQUIRED ((HRESULT)0xC0202010L)

//
// MessageId: DTS_E_TEXTQUALIFIERNOTFOUND
//
// MessageText:
//
// The text qualifier for column "%1!s!" cannot be found.
//
#define DTS_E_TEXTQUALIFIERNOTFOUND      ((HRESULT)0xC0202011L)

//
// MessageId: DTS_E_CANNOTCONVERTTYPES
//
// MessageText:
//
// Conversion from "%1!s!" to "%2!s!" is not supported.
//
#define DTS_E_CANNOTCONVERTTYPES         ((HRESULT)0xC0202014L)

//
// MessageId: DTS_E_PROBLEMDETECTINGTYPECOMPATIBILITY
//
// MessageText:
//
// The error code 0x%1!8.8X! was returned when validating type conversion from %2!s! to %3!s!.
//
#define DTS_E_PROBLEMDETECTINGTYPECOMPATIBILITY ((HRESULT)0xC0202015L)

////////////////////////////////////////////////////////////////////////////
// Check SourceInputColumnLineageID custom property of the output column.

//
// MessageId: DTS_E_CANNOTMAPINPUTCOLUMNTOOUTPUTCOLUMN
//
// MessageText:
//
// Cannot find input column with lineage ID "%1!d!" which is needed by "%2!s!". Check SourceInputColumnLineageID custom property of the output column.
//
#define DTS_E_CANNOTMAPINPUTCOLUMNTOOUTPUTCOLUMN ((HRESULT)0xC0202016L)

//
// MessageId: DTS_E_INCORRECTMINIMUMNUMBEROFOUTPUTS
//
// MessageText:
//
// The number of outputs is incorrect. There must be at least %1!d! outputs.
//
#define DTS_E_INCORRECTMINIMUMNUMBEROFOUTPUTS ((HRESULT)0xC0202017L)

//
// MessageId: DTS_E_INCORRECTEXACTNUMBEROFOUTPUTS
//
// MessageText:
//
// The number of outputs is incorrect. There must be exactly %1!d! output(s).
//
#define DTS_E_INCORRECTEXACTNUMBEROFOUTPUTS ((HRESULT)0xC0202018L)

////////////////////////////////////////////////////////////////////////////
// A string was found to be longer than Windows can safely convert.

//
// MessageId: DTS_E_STRINGCONVERSIONTOOLONG
//
// MessageText:
//
// A string was too long to be converted.
//
#define DTS_E_STRINGCONVERSIONTOOLONG    ((HRESULT)0xC0202019L)

//
// MessageId: DTS_E_INCORRECTEXACTNUMBEROFINPUTS
//
// MessageText:
//
// The number of inputs is incorrect. There must be exactly %1!d! inputs.
//
#define DTS_E_INCORRECTEXACTNUMBEROFINPUTS ((HRESULT)0xC020201AL)

//
// MessageId: DTS_E_CANNOTHAVEZEROINPUTCOLUMNS
//
// MessageText:
//
// The number of input columns for %1!s! cannot be zero.
//
#define DTS_E_CANNOTHAVEZEROINPUTCOLUMNS ((HRESULT)0xC020201BL)

//
// MessageId: DTS_E_CANNOTHAVEINPUTS
//
// MessageText:
//
// This component has %1!d! inputs.  No input is allowed on this component.
//
#define DTS_E_CANNOTHAVEINPUTS           ((HRESULT)0xC020201CL)

//
// MessageId: DTS_E_PROCESSINPUTCALLEDWITHINVALIDINPUTID
//
// MessageText:
//
// ProcessInput was called with an invalid input ID of %1!d!.
//
#define DTS_E_PROCESSINPUTCALLEDWITHINVALIDINPUTID ((HRESULT)0xC020201DL)

//
// MessageId: DTS_E_INCORRECTCUSTOMPROPERTYTYPE
//
// MessageText:
//
// The custom property "%1!s!" needs to be of type %2!s!.
//
#define DTS_E_INCORRECTCUSTOMPROPERTYTYPE ((HRESULT)0xC020201FL)

////////////////////////////////////////////////////////////////////////////
// Make sure the Pipeline layout and all components pass validation.

//
// MessageId: DTS_E_INVALIDBUFFERTYPE
//
// MessageText:
//
// The buffer type is not valid. Make sure the Pipeline layout and all components pass validation.
//
#define DTS_E_INVALIDBUFFERTYPE          ((HRESULT)0xC0202020L)

//
// MessageId: DTS_E_INCORRECTCUSTOMPROPERTYVALUE
//
// MessageText:
//
// The value for custom property "%1!s!" is incorrect.
//
#define DTS_E_INCORRECTCUSTOMPROPERTYVALUE ((HRESULT)0xC0202021L)

//
// MessageId: DTS_E_CONNECTIONREQUIREDFORMETADATA
//
// MessageText:
//
// An error occurred due to no connection. A connection is required when requesting metadata. If you are working offline, uncheck Work Offline on the SSIS menu to enable the connection.
//
#define DTS_E_CONNECTIONREQUIREDFORMETADATA ((HRESULT)0xC0202022L)

//
// MessageId: DTS_E_CANTCREATECUSTOMPROPERTY
//
// MessageText:
//
// The custom property "%1!s!" cannot be created.
//
#define DTS_E_CANTCREATECUSTOMPROPERTY   ((HRESULT)0xC0202023L)

//
// MessageId: DTS_E_CANTGETCUSTOMPROPERTYCOLLECTION
//
// MessageText:
//
// The custom property collection cannot be retrieved for initialization.
//
#define DTS_E_CANTGETCUSTOMPROPERTYCOLLECTION ((HRESULT)0xC0202024L)

////////////////////////////////////////////////////////////////////////////
// Make sure column metadata is valid.

//
// MessageId: DTS_E_CANNOTCREATEACCESSOR
//
// MessageText:
//
// Cannot create an OLE DB accessor. Verify that the column metadata is valid.
//
#define DTS_E_CANNOTCREATEACCESSOR       ((HRESULT)0xC0202025L)

//
// MessageId: DTS_E_PRIMEOUTPUTCALLEDWITHINVALIDOUTPUTID
//
// MessageText:
//
// PrimeOutput was called with an invalid output ID of %1!d!.
//
#define DTS_E_PRIMEOUTPUTCALLEDWITHINVALIDOUTPUTID ((HRESULT)0xC0202026L)

//
// MessageId: DTS_E_INCORRECTSTOCKPROPERTY
//
// MessageText:
//
// The value for property "%1!s!" on "%2!s!" is not valid.
//
#define DTS_E_INCORRECTSTOCKPROPERTY     ((HRESULT)0xC0202027L)

//
// MessageId: DTS_E_CONNECTIONREQUIREDFORREAD
//
// MessageText:
//
// A connection is required to read data.
//
#define DTS_E_CONNECTIONREQUIREDFORREAD  ((HRESULT)0xC0202028L)

//
// MessageId: DTS_E_ERRORWHILEREADINGHEADERROWS
//
// MessageText:
//
// An error occurred while reading header rows.
//
#define DTS_E_ERRORWHILEREADINGHEADERROWS ((HRESULT)0xC020202CL)

//
// MessageId: DTS_E_DUPLICATECOLUMNNAME
//
// MessageText:
//
// Duplicate column name "%1!s!".
//
#define DTS_E_DUPLICATECOLUMNNAME        ((HRESULT)0xC020202DL)

//
// MessageId: DTS_E_CANNOTGETCOLUMNNAME
//
// MessageText:
//
// Cannot get the name of the column with ID %1!d!.
//
#define DTS_E_CANNOTGETCOLUMNNAME        ((HRESULT)0xC0202030L)

//
// MessageId: DTS_E_CANTDIRECTROW
//
// MessageText:
//
// Direct row to output "%1!s!" (%2!d!) failed.
//
#define DTS_E_CANTDIRECTROW              ((HRESULT)0xC0202031L)

//
// MessageId: DTS_E_CANNOTCREATEBULKINSERTHREAD
//
// MessageText:
//
// Cannot create the bulk insert thread due to error "%1!s!".
//
#define DTS_E_CANNOTCREATEBULKINSERTHREAD ((HRESULT)0xC020203AL)

//
// MessageId: DTS_E_BULKINSERTHREADINITIALIZATIONFAILED
//
// MessageText:
//
// The thread for the SSIS Bulk Insert task failed initialization.
//
#define DTS_E_BULKINSERTHREADINITIALIZATIONFAILED ((HRESULT)0xC020203BL)

//
// MessageId: DTS_E_BULKINSERTTHREADALREADYRUNNING
//
// MessageText:
//
// The thread for the SSIS Bulk Insert task is already running.
//
#define DTS_E_BULKINSERTTHREADALREADYRUNNING ((HRESULT)0xC020203EL)

//
// MessageId: DTS_E_BULKINSERTTHREADABNORMALCOMPLETION
//
// MessageText:
//
// The thread for the SSIS Bulk Insert task terminated with errors or warnings.
//
#define DTS_E_BULKINSERTTHREADABNORMALCOMPLETION ((HRESULT)0xC020203FL)

////////////////////////////////////////////////////////////////////////////
// Check that the object exists in the database.

//
// MessageId: DTS_E_CANNOTGETIROWSETFASTLOAD
//
// MessageText:
//
// Failed to open a fastload rowset for "%1!s!". Check that the object exists in the database.
//
#define DTS_E_CANNOTGETIROWSETFASTLOAD   ((HRESULT)0xC0202040L)

//
// MessageId: DTS_E_CONNECTREQUIREDFORMETADATAVALIDATION
//
// MessageText:
//
// Error due to no connection. A connection is required before metadata validation can proceed.
//
#define DTS_E_CONNECTREQUIREDFORMETADATAVALIDATION ((HRESULT)0xC0202041L)

//
// MessageId: DTS_E_DESTINATIONTABLENAMENOTPROVIDED
//
// MessageText:
//
// A destination table name has not been provided.
//
#define DTS_E_DESTINATIONTABLENAMENOTPROVIDED ((HRESULT)0xC0202042L)

////////////////////////////////////////////////////////////////////////////
// Set the adapter's ValidateColumnMetaData property to false.

//
// MessageId: DTS_E_ICONVERTTYPEUNAVAILABLE
//
// MessageText:
//
// The OLE DB provider used by the OLE DB adapter does not support IConvertType. Set the adapter's ValidateColumnMetaData property to FALSE.
//
#define DTS_E_ICONVERTTYPEUNAVAILABLE    ((HRESULT)0xC0202043L)

//
// MessageId: DTS_E_OLEDBPROVIDERDATATYPECONVERSIONUNSUPPORTED
//
// MessageText:
//
// The OLE DB provider used by the OLE DB adapter cannot convert between types "%1!s!" and "%2!s!" for "%3!s!".
//
#define DTS_E_OLEDBPROVIDERDATATYPECONVERSIONUNSUPPORTED ((HRESULT)0xC0202044L)

//
// MessageId: DTS_E_VALIDATECOLUMNMETADATAFAILED
//
// MessageText:
//
// Column metadata validation failed.
//
#define DTS_E_VALIDATECOLUMNMETADATAFAILED ((HRESULT)0xC0202045L)

//
// MessageId: DTS_E_ATTEMPTINGTOINSERTINTOAROWIDCOLUMN
//
// MessageText:
//
// "%1!s!" is a row ID column and cannot be included in a data insertion operation.
//
#define DTS_E_ATTEMPTINGTOINSERTINTOAROWIDCOLUMN ((HRESULT)0xC0202047L)

//
// MessageId: DTS_E_ATTEMPTINGTOINSERTINTOAROWVERCOLUMN
//
// MessageText:
//
// Attempting insertion into the row version column "%1!s!". Cannot insert into a row version column.
//
#define DTS_E_ATTEMPTINGTOINSERTINTOAROWVERCOLUMN ((HRESULT)0xC0202048L)

//
// MessageId: DTS_E_ATTEMPTINGTOINSERTINTOAREADONLYCOLUMN
//
// MessageText:
//
// Failure inserting into the read-only column "%1!s!".
//
#define DTS_E_ATTEMPTINGTOINSERTINTOAREADONLYCOLUMN ((HRESULT)0xC0202049L)

////////////////////////////////////////////////////////////////////////////
// Make sure your target table in the database is available.

//
// MessageId: DTS_E_UNABLETORETRIEVECOLUMNINFO
//
// MessageText:
//
// Unable to retrieve column information from the data source. Make sure your target table in the database is available.
//
#define DTS_E_UNABLETORETRIEVECOLUMNINFO ((HRESULT)0xC020204AL)

////////////////////////////////////////////////////////////////////////////
// The system is out of memory, or the buffer manager has reached its quota.

//
// MessageId: DTS_E_CANTLOCKBUFFER
//
// MessageText:
//
// A buffer could not be locked. The system is out of memory or the buffer manager has reached its quota.
//
#define DTS_E_CANTLOCKBUFFER             ((HRESULT)0xC020204BL)

//
// MessageId: DTS_E_INVALIDCOMPARISONFLAGS
//
// MessageText:
//
// The %1!s! has a ComparisonFlags property that includes extra flags with the value %2!d!.
//
#define DTS_E_INVALIDCOMPARISONFLAGS     ((HRESULT)0xC020204CL)

//
// MessageId: DTS_E_COLUMNMETADATAUNAVAILABLEFORVALIDATION
//
// MessageText:
//
// The column metadata was unavailable for validation.
//
#define DTS_E_COLUMNMETADATAUNAVAILABLEFORVALIDATION ((HRESULT)0xC020204DL)

//
// MessageId: DTS_E_CANNOTWRITETODATAFILE
//
// MessageText:
//
// Cannot write to the data file.
//
#define DTS_E_CANNOTWRITETODATAFILE      ((HRESULT)0xC0202053L)

//
// MessageId: DTS_E_COLUMNDELIMITERNOTFOUND
//
// MessageText:
//
// The column delimiter for column "%1!s!" was not found.
//
#define DTS_E_COLUMNDELIMITERNOTFOUND    ((HRESULT)0xC0202055L)

//
// MessageId: DTS_E_COLUMNPARSEFAILED
//
// MessageText:
//
// Failed to parse the column "%1!s!" in the data file.
//
#define DTS_E_COLUMNPARSEFAILED          ((HRESULT)0xC0202058L)

////////////////////////////////////////////////////////////////////////////
// Need a file name to read from or write to!

//
// MessageId: DTS_E_RAWFILENAMEREQUIRED
//
// MessageText:
//
// The file name is not properly specified.  Supply the path and name to the raw file either directly in the FileName property or by specifying a variable in the FileNameVariable property.
//
#define DTS_E_RAWFILENAMEREQUIRED        ((HRESULT)0xC020205AL)

////////////////////////////////////////////////////////////////////////////
// No priveleges or disk full.

//
// MessageId: DTS_E_RAWFILECANTOPEN
//
// MessageText:
//
// File "%1!s!" cannot be opened for writing. Error may occur when there are no file privileges or the disk is full.
//
#define DTS_E_RAWFILECANTOPEN            ((HRESULT)0xC020205BL)

//
// MessageId: DTS_E_RAWFILECANTBUFFER
//
// MessageText:
//
// An I/O buffer cannot be created for the output file. Error may occur when there are no file privileges or the disk is full.
//
#define DTS_E_RAWFILECANTBUFFER          ((HRESULT)0xC020205CL)

////////////////////////////////////////////////////////////////////////////
// The cause of the failure should have been previously reported.

//
// MessageId: DTS_E_RAWCANTWRITE
//
// MessageText:
//
// Cannot write %1!d! bytes to file "%2!s!". See previous error messages for details.
//
#define DTS_E_RAWCANTWRITE               ((HRESULT)0xC020205DL)

////////////////////////////////////////////////////////////////////////////
// The file is corrupt or not a SSIS-produced raw data file.

//
// MessageId: DTS_E_RAWBADHEADER
//
// MessageText:
//
// Encountered bad metadata in file header. The file is damaged or not a SSIS-produced raw data file.
//
#define DTS_E_RAWBADHEADER               ((HRESULT)0xC020205EL)

////////////////////////////////////////////////////////////////////////////
// The file exists and the WriteOption property is set to CreateOnce.

//
// MessageId: DTS_E_RAWEXISTSCREATEONCE
//
// MessageText:
//
// Error occurred because the output file already exists and the WriteOption is set to Create Once. Set the WriteOption property to Create Always, or delete the file.
//
#define DTS_E_RAWEXISTSCREATEONCE        ((HRESULT)0xC020205FL)

////////////////////////////////////////////////////////////////////////////
// Can't have both properties set.

//
// MessageId: DTS_E_RAWCANTAPPENDTRUNCATE
//
// MessageText:
//
// Error caused by conflicting property settings. Both the AllowAppend property and the ForceTruncate property are set to TRUE. Both properties cannot be set to TRUE. Set one of the two properties to FALSE.
//
#define DTS_E_RAWCANTAPPENDTRUNCATE      ((HRESULT)0xC0202060L)

////////////////////////////////////////////////////////////////////////////
// The file is corrupt or not a SSIS-produced raw data file.

//
// MessageId: DTS_E_RAWBADVERSION
//
// MessageText:
//
// The file had bad version and flags information. The file is damaged or not a SSIS-produced raw data file.
//
#define DTS_E_RAWBADVERSION              ((HRESULT)0xC0202061L)

////////////////////////////////////////////////////////////////////////////
// Old file with a format we don't understand.

//
// MessageId: DTS_E_RAWVERSIONINCOMPATIBLEAPPEND
//
// MessageText:
//
// The output file was written by an incompatible version and cannot be appended. The file may be an older file format that is no longer useable.
//
#define DTS_E_RAWVERSIONINCOMPATIBLEAPPEND ((HRESULT)0xC0202062L)

////////////////////////////////////////////////////////////////////////////
// Old file doesn't match in metadata.

//
// MessageId: DTS_E_RAWMETADATAMISMATCH
//
// MessageText:
//
// Cannot append output file because no column in the existing file matches column "%1!s!" from the input. Old file does not match in metadata.
//
#define DTS_E_RAWMETADATAMISMATCH        ((HRESULT)0xC0202064L)

//
// MessageId: DTS_E_RAWMETADATACOUNTMISMATCH
//
// MessageText:
//
// Cannot append output file because the number of columns in the output file does not match the number of columns in this destination. The old file does not match in metadata.
//
#define DTS_E_RAWMETADATACOUNTMISMATCH   ((HRESULT)0xC0202065L)

//
// MessageId: DTS_E_ERRORRETRIEVINGCOLUMNCODEPAGE
//
// MessageText:
//
// There was an error retrieving column code page information.
//
#define DTS_E_ERRORRETRIEVINGCOLUMNCODEPAGE ((HRESULT)0xC0202067L)

////////////////////////////////////////////////////////////////////////////
// The cause of the failure should have been previously reported.

//
// MessageId: DTS_E_RAWCANTREAD
//
// MessageText:
//
// Cannot read %1!d! bytes from file "%2!s!". The cause of the failure should have been previously reported.
//
#define DTS_E_RAWCANTREAD                ((HRESULT)0xC0202068L)

////////////////////////////////////////////////////////////////////////////
// The file ended prematurely because it has an invalid format.

//
// MessageId: DTS_E_RAWUNEXPECTEDEOF
//
// MessageText:
//
// Unexpected end-of-file encountered while reading %1!d! bytes from file "%2!s!". The file ended prematurely because of an invalid file format.
//
#define DTS_E_RAWUNEXPECTEDEOF           ((HRESULT)0xC0202069L)

//
// MessageId: DTS_E_RAWNOLONGTYPES
//
// MessageText:
//
// The column %1!s! cannot be used. The raw adapters do not support image, text, or ntext data.
//
#define DTS_E_RAWNOLONGTYPES             ((HRESULT)0xC020206AL)

////////////////////////////////////////////////////////////////////////////
// Corrupt input file (source) or completely invalid buffer type (dest).

//
// MessageId: DTS_E_RAWUNEXPECTEDTYPE
//
// MessageText:
//
// The adapter encountered an unrecognized data type of %1!d!. This could be caused by a damaged input file (source) or by an invalid buffer type (destination).
//
#define DTS_E_RAWUNEXPECTEDTYPE          ((HRESULT)0xC020206BL)

////////////////////////////////////////////////////////////////////////////
// Corrupt input file. The file showed a string length that was too big for the buffer column we've got.

//
// MessageId: DTS_E_RAWSTRINGTOOLONG
//
// MessageText:
//
// String too long. The adapter read a string that was %1!d! bytes long, and expected a string no longer than %2!d! bytes, at offset %3!d!. This could indicate a damaged input file. The file shows a string length that is too large for the buffer column.
//
#define DTS_E_RAWSTRINGTOOLONG           ((HRESULT)0xC020206CL)

////////////////////////////////////////////////////////////////////////////
// The error returned from the OS should have been previously reported.

//
// MessageId: DTS_E_RAWSKIPFAILED
//
// MessageText:
//
// The raw adapter attempted to skip %1!d! bytes in the input file for unreferenced column "%2!s!" with lineage ID %3!d!, but there was an error. The error returned from the operating system should have been previously reported.
//
#define DTS_E_RAWSKIPFAILED              ((HRESULT)0xC020206EL)

//
// MessageId: DTS_E_RAWREADFAILED
//
// MessageText:
//
// The raw adapter attempted to read %1!d! bytes in the input file for column "%2!s!" with lineage ID %3!d!, but there was an error. The error returned from the operating system should have been previously reported.
//
#define DTS_E_RAWREADFAILED              ((HRESULT)0xC020206FL)

////////////////////////////////////////////////////////////////////////////
// The file name was a device, or contained invalid characters.

//
// MessageId: DTS_E_RAWFILENAMEINVALID
//
// MessageText:
//
// The file name property is not valid. The file name is a device or contains invalid characters.
//
#define DTS_E_RAWFILENAMEINVALID         ((HRESULT)0xC0202070L)

//
// MessageId: DTS_E_BULKINSERTAPIPREPARATIONFAILED
//
// MessageText:
//
// Unable to bulk copy data. You may need to run this package as an administrator.
//
#define DTS_E_BULKINSERTAPIPREPARATIONFAILED ((HRESULT)0xC0202071L)

//
// MessageId: DTS_E_INVALIDDATABASEOBJECTNAME
//
// MessageText:
//
// Database object name "%1!s!" is not valid.
//
#define DTS_E_INVALIDDATABASEOBJECTNAME  ((HRESULT)0xC0202072L)

//
// MessageId: DTS_E_INVALIDORDERCLAUSE
//
// MessageText:
//
// Order clause is not valid.
//
#define DTS_E_INVALIDORDERCLAUSE         ((HRESULT)0xC0202073L)

////////////////////////////////////////////////////////////////////////////
// No priveleges or file not found. Exact cause reported in previous error.

//
// MessageId: DTS_E_RAWFILECANTOPENREAD
//
// MessageText:
//
// File "%1!s!" cannot be opened for reading. Error may occur when there are no privileges or the file is not found. Exact cause is reported in previous error message.
//
#define DTS_E_RAWFILECANTOPENREAD        ((HRESULT)0xC0202074L)

//
// MessageId: DTS_E_TIMEGENCANTCREATE
//
// MessageText:
//
// Unable to create the Microsoft.AnalysisServices.TimeDimGenerator.TimeDimGenerator.
//
#define DTS_E_TIMEGENCANTCREATE          ((HRESULT)0xC0202075L)

//
// MessageId: DTS_E_TIMEGENCANTCONFIGURE
//
// MessageText:
//
// Unable to configure the Microsoft.AnalysisServices.TimeDimGenerator.
//
#define DTS_E_TIMEGENCANTCONFIGURE       ((HRESULT)0xC0202076L)

//
// MessageId: DTS_E_TIMEGENCANTCONVERT
//
// MessageText:
//
// Unsupported datatype for column %1!d!.
//
#define DTS_E_TIMEGENCANTCONVERT         ((HRESULT)0xC0202077L)

//
// MessageId: DTS_E_TIMEGENCANTREAD
//
// MessageText:
//
// The attempt to read from the Microsoft.AnalysisServices.TimeDimGenerator failed with error code 0x%1!8.8X!.
//
#define DTS_E_TIMEGENCANTREAD            ((HRESULT)0xC0202079L)

//
// MessageId: DTS_E_TIMEGENCANTREADCOLUMN
//
// MessageText:
//
// The attempt to read column "%2!d!" data from the Microsoft.AnalysisServices.TimeDimGenerator failed with error code 0x%2!8.8X!.
//
#define DTS_E_TIMEGENCANTREADCOLUMN      ((HRESULT)0xC020207AL)

////////////////////////////////////////////////////////////////////////////
// Need a runtime variable name to write to!]

//
// MessageId: DTS_E_RSTDESTBADVARIABLENAME
//
// MessageText:
//
// The VariableName property is not set to the name of a valid variable. Need a runtime variable name to write to.
//
#define DTS_E_RSTDESTBADVARIABLENAME     ((HRESULT)0xC020207BL)

//
// MessageId: DTS_E_RSTDESTRSTCONFIGPROBLEM
//
// MessageText:
//
// Unable to create or configure the ADODB.Recordset object.
//
#define DTS_E_RSTDESTRSTCONFIGPROBLEM    ((HRESULT)0xC020207CL)

//
// MessageId: DTS_E_RSTDESTRSTWRITEPROBLEM
//
// MessageText:
//
// Error writing to the ADODB.Recordset object.
//
#define DTS_E_RSTDESTRSTWRITEPROBLEM     ((HRESULT)0xC020207DL)

////////////////////////////////////////////////////////////////////////////
// The file name was a device, or contained invalid characters.

//
// MessageId: DTS_E_FILENAMEINVALID
//
// MessageText:
//
// The file name is not valid. The file name is a device or contains invalid characters.
//
#define DTS_E_FILENAMEINVALID            ((HRESULT)0xC020207EL)

//
// MessageId: DTS_E_FILENAMEINVALIDWITHPARAM
//
// MessageText:
//
// The file name "%1!s!" is not valid. The file name is a device or contains invalid characters.
//
#define DTS_E_FILENAMEINVALIDWITHPARAM   ((HRESULT)0xC020207FL)

//
// MessageId: DTS_E_CMDDESTNOPARAMS
//
// MessageText:
//
// Unable to retrieve destination column descriptions from the parameters of the SQL command.
//
#define DTS_E_CMDDESTNOPARAMS            ((HRESULT)0xC0202080L)

//
// MessageId: DTS_E_CMDDESTNOTBOUND
//
// MessageText:
//
// Parameters are not bound. All parameters in the SQL command must be bound to input columns.
//
#define DTS_E_CMDDESTNOTBOUND            ((HRESULT)0xC0202081L)

//
// MessageId: DTS_E_TXPIVOTBADUSAGE
//
// MessageText:
//
// The PivotUsage value for the input column "%1!s!" (%2!d!) is not valid.
//
#define DTS_E_TXPIVOTBADUSAGE            ((HRESULT)0xC0202082L)

//
// MessageId: DTS_E_TXPIVOTTOOMANYPIVOTKEYS
//
// MessageText:
//
// Too many Pivot Keys found. Only one input column can be used as the Pivot Key.
//
#define DTS_E_TXPIVOTTOOMANYPIVOTKEYS    ((HRESULT)0xC0202083L)

//
// MessageId: DTS_E_TXPIVOTNOPIVOTKEY
//
// MessageText:
//
// No Pivot Key found. One input column must be used as the Pivot Key.
//
#define DTS_E_TXPIVOTNOPIVOTKEY          ((HRESULT)0xC0202084L)

//
// MessageId: DTS_E_TXPIVOTINPUTALREADYMAPPED
//
// MessageText:
//
// More than one output column (such as "%1!s!" (%2!d!)) is mapped to input column "%3!s!" (%4!d!).
//
#define DTS_E_TXPIVOTINPUTALREADYMAPPED  ((HRESULT)0xC0202085L)

//
// MessageId: DTS_E_TXPIVOTCANTMAPPIVOTKEY
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) cannot be mapped to PivotKey input column.
//
#define DTS_E_TXPIVOTCANTMAPPIVOTKEY     ((HRESULT)0xC0202086L)

//
// MessageId: DTS_E_TXPIVOTCANTMAPPINGNOTFOUND
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) has a SourceColumn %3!d! that is not a valid input column lineage ID.
//
#define DTS_E_TXPIVOTCANTMAPPINGNOTFOUND ((HRESULT)0xC0202087L)

//
// MessageId: DTS_E_TXPIVOTEMPTYPIVOTKEYVALUE
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) is mapped to a Pivoted Value input column, but its PivotKeyValue property value is missing.
//
#define DTS_E_TXPIVOTEMPTYPIVOTKEYVALUE  ((HRESULT)0xC0202088L)

//
// MessageId: DTS_E_TXPIVOTDUPLICATEPIVOTKEYVALUE
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) is mapped to a Pivoted Value input column with a non-unique PivotKeyValue property value.
//
#define DTS_E_TXPIVOTDUPLICATEPIVOTKEYVALUE ((HRESULT)0xC0202089L)

//
// MessageId: DTS_E_TXPIVOTOUTPUTNOTMAPPED
//
// MessageText:
//
// Input column "%1!s!" (%2!d!) is not mapped to any output column.
//
#define DTS_E_TXPIVOTOUTPUTNOTMAPPED     ((HRESULT)0xC020208AL)

//
// MessageId: DTS_E_TXPIVOTCANTCOMPARESETKEYS
//
// MessageText:
//
// Failure occurred while comparing values for the set keys.
//
#define DTS_E_TXPIVOTCANTCOMPARESETKEYS  ((HRESULT)0xC020208BL)

//
// MessageId: DTS_E_TXPIVOTNOBLOB
//
// MessageText:
//
// The Input column "%1!s!" (%2!d!) cannot be used as a Set Key, Pivot Key, or Pivot Value because it contains long data.
//
#define DTS_E_TXPIVOTNOBLOB              ((HRESULT)0xC020208DL)

//
// MessageId: DTS_E_TXPIVOTBADOUTPUTTYPE
//
// MessageText:
//
// Incorrect output type. The output column "%1!s!" (%2!d!) must have the same data type and metadata as the input column to which it is mapped.
//
#define DTS_E_TXPIVOTBADOUTPUTTYPE       ((HRESULT)0xC020208EL)

//
// MessageId: DTS_E_TXPIVOTPROCESSERROR
//
// MessageText:
//
// Failure when trying to pivot the source records.
//
#define DTS_E_TXPIVOTPROCESSERROR        ((HRESULT)0xC020208FL)

//
// MessageId: DTS_E_TXPIVOTBADPIVOTKEYVALUE
//
// MessageText:
//
// The pivot key value "%1!s!" is not valid.
//
#define DTS_E_TXPIVOTBADPIVOTKEYVALUE    ((HRESULT)0xC0202090L)

//
// MessageId: DTS_E_ERRORWHILESKIPPINGDATAROWS
//
// MessageText:
//
// An error occurred while skipping data rows.
//
#define DTS_E_ERRORWHILESKIPPINGDATAROWS ((HRESULT)0xC0202091L)

//
// MessageId: DTS_E_ERRORWHILEREADINGDATAROWS
//
// MessageText:
//
// An error occurred while processing file "%1!s!" on data row %2!I64d!.
//
#define DTS_E_ERRORWHILEREADINGDATAROWS  ((HRESULT)0xC0202092L)

//
// MessageId: DTS_E_FAILEDTOINITIALIZEFLATFILEPARSER
//
// MessageText:
//
// An error occurred while initializing the flat file parser.
//
#define DTS_E_FAILEDTOINITIALIZEFLATFILEPARSER ((HRESULT)0xC0202093L)

//
// MessageId: DTS_E_UNABLETORETRIEVECOLUMNINFOFROMFLATFILECONNECTIONMANAGER
//
// MessageText:
//
// Unable to retrieve column information from the flat file connection manager.
//
#define DTS_E_UNABLETORETRIEVECOLUMNINFOFROMFLATFILECONNECTIONMANAGER ((HRESULT)0xC0202094L)

//
// MessageId: DTS_E_FAILEDTOWRITEOUTCOLUMNNAME
//
// MessageText:
//
// The column name for column "%1!s!" could not be written. The column name may be longer than the available column size.
//
#define DTS_E_FAILEDTOWRITEOUTCOLUMNNAME ((HRESULT)0xC0202095L)

//
// MessageId: DTS_E_INVALIDFLATFILECOLUMNTYPE
//
// MessageText:
//
// The column type for column "%1!s!" is incorrect. It is type "%2!s!". It can only be either "%3!s!" or "%4!s!".
//
#define DTS_E_INVALIDFLATFILECOLUMNTYPE  ((HRESULT)0xC0202096L)

//
// MessageId: DTS_E_DISKIOBUFFEROVERFLOW
//
// MessageText:
//
// The attempt to write data of %1!d! bytes into the disk I/O failed. The disk I/O buffer has %2!d! free bytes.
//
#define DTS_E_DISKIOBUFFEROVERFLOW       ((HRESULT)0xC0202097L)

//
// MessageId: DTS_E_FAILEDTOWRITEOUTHEADER
//
// MessageText:
//
// An error occurred while writing out the file header.
//
#define DTS_E_FAILEDTOWRITEOUTHEADER     ((HRESULT)0xC0202098L)

//
// MessageId: DTS_E_FAILEDTOGETFILESIZE
//
// MessageText:
//
// An error occurred while getting the file size for file "%1!s!".
//
#define DTS_E_FAILEDTOGETFILESIZE        ((HRESULT)0xC0202099L)

//
// MessageId: DTS_E_FAILEDTOSETFILEPOINTER
//
// MessageText:
//
// An error occurred while setting the file pointer for file "%1!s!".
//
#define DTS_E_FAILEDTOSETFILEPOINTER     ((HRESULT)0xC020209AL)

//
// MessageId: DTS_E_UNABLETOSETUPDISKIOBUFFER
//
// MessageText:
//
// An error occurred while setting up the disk I/O buffer.
//
#define DTS_E_UNABLETOSETUPDISKIOBUFFER  ((HRESULT)0xC020209BL)

//
// MessageId: DTS_E_COLUMNDATAOVERFLOWDISKIOBUFFER
//
// MessageText:
//
// The column data for column "%1!s!" overflowed the disk I/O buffer.
//
#define DTS_E_COLUMNDATAOVERFLOWDISKIOBUFFER ((HRESULT)0xC020209CL)

//
// MessageId: DTS_E_DISKIOFAILED
//
// MessageText:
//
// An unexpected disk I/O error occurred while reading the file.
//
#define DTS_E_DISKIOFAILED               ((HRESULT)0xC020209DL)

//
// MessageId: DTS_E_DISKIOTIMEDOUT
//
// MessageText:
//
// An disk I/O time out occurred while reading the file.
//
#define DTS_E_DISKIOTIMEDOUT             ((HRESULT)0xC020209EL)

//
// MessageId: DTS_E_INPUTSNOTREADONLY
//
// MessageText:
//
// The Usage Type specified for the input columns to this transform cannot be read/write. Change the Usage Type to be read-only.
//
#define DTS_E_INPUTSNOTREADONLY          ((HRESULT)0xC020209FL)

//
// MessageId: DTS_E_CANNOTCOPYORCONVERTFLATFILEDATA
//
// MessageText:
//
// Cannot copy or convert flat file data for column "%1!s!".
//
#define DTS_E_CANNOTCOPYORCONVERTFLATFILEDATA ((HRESULT)0xC02020A0L)

//
// MessageId: DTS_E_FAILEDCOLUMNDATACONVERSIONSTATUS
//
// MessageText:
//
// Data conversion failed. The data conversion for column "%1!s!" returned status value %2!d! and status text "%3!s!".
//
#define DTS_E_FAILEDCOLUMNDATACONVERSIONSTATUS ((HRESULT)0xC02020A1L)

//
// MessageId: DTS_E_VARIABLESCOLLECTIONUNAVAILABLE
//
// MessageText:
//
// The Variables collection is not available.
//
#define DTS_E_VARIABLESCOLLECTIONUNAVAILABLE ((HRESULT)0xC02020A2L)

//
// MessageId: DTS_E_TXUNPIVOTDUPLICATEPIVOTKEYVALUE
//
// MessageText:
//
// Duplicate PivotKeyValue. Input column "%1!s!" (%2!d!) is mapped to a Pivoted Value output column and has a non-unique PivotKeyValue.
//
#define DTS_E_TXUNPIVOTDUPLICATEPIVOTKEYVALUE ((HRESULT)0xC02020A3L)

//
// MessageId: DTS_E_TXUNPIVOTNOUNPIVOTDESTINATION
//
// MessageText:
//
// No unpivot destination found. At least one input column must be mapped with a PivotKeyValue to an DestinationColumn in the output.
//
#define DTS_E_TXUNPIVOTNOUNPIVOTDESTINATION ((HRESULT)0xC02020A4L)

//
// MessageId: DTS_E_TXUNPIVOTBADKEYLIST
//
// MessageText:
//
// PivotKeyValue is not valid. In an UnPivot transform with more than one unpivoted DestinationColumn, the set of PivotKeyValues per destination must match exactly.
//
#define DTS_E_TXUNPIVOTBADKEYLIST        ((HRESULT)0xC02020A5L)

//
// MessageId: DTS_E_TXUNPIVOTBADUNPIVOTMETADATA
//
// MessageText:
//
// Incorrect UnPivot metadata. In an UnPivot transform, all input columns with a PivotKeyValue that is set, and are pointing to the same DestinationColumn, must have metadata that exactly matches the DestinationColumn.
//
#define DTS_E_TXUNPIVOTBADUNPIVOTMETADATA ((HRESULT)0xC02020A6L)

//
// MessageId: DTS_E_TXPIVOTBADPIVOTKEYCONVERT
//
// MessageText:
//
// Cannot convert the pivot key value "%1!s!" to the data type of the pivot key column.
//
#define DTS_E_TXPIVOTBADPIVOTKEYCONVERT  ((HRESULT)0xC02020A7L)

//
// MessageId: DTS_E_TXUNPIVOTTOOMANYPIVOTKEYS
//
// MessageText:
//
// Too many Pivot Keys specified. Only one output column can be used as the Pivot Key.
//
#define DTS_E_TXUNPIVOTTOOMANYPIVOTKEYS  ((HRESULT)0xC02020A8L)

//
// MessageId: DTS_E_TXUNPIVOTUNMAPPEDOUTPUT
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) is not mapped by any input column's DestinationColumn property.
//
#define DTS_E_TXUNPIVOTUNMAPPEDOUTPUT    ((HRESULT)0xC02020A9L)

//
// MessageId: DTS_E_TXUNPIVOTNOPIVOT
//
// MessageText:
//
// No output column is marked as the PivotKey.
//
#define DTS_E_TXUNPIVOTNOPIVOT           ((HRESULT)0xC02020AAL)

//
// MessageId: DTS_E_TXUNPIVOTNOTINPUTMAP
//
// MessageText:
//
// Input column "%1!s!" (%2!d!) has a DestinationColumn property value that does not refer to a valid output column LineageID.
//
#define DTS_E_TXUNPIVOTNOTINPUTMAP       ((HRESULT)0xC02020ABL)

//
// MessageId: DTS_E_TXUNPIVOTDUPLICATEDESTINATION
//
// MessageText:
//
// Duplicate destination error. More than one non-pivoted input column is mapped to the same destination output column.
//
#define DTS_E_TXUNPIVOTDUPLICATEDESTINATION ((HRESULT)0xC02020ACL)

////////////////////////////////////////////////////////////////////////////
// This happens when no input columns have been mapped to output columns.

//
// MessageId: DTS_E_TOTALINPUTCOLSCANNOTBEZERO
//
// MessageText:
//
// No input columns found. At least one input column must be mapped to an output column.
//
#define DTS_E_TOTALINPUTCOLSCANNOTBEZERO ((HRESULT)0xC02020ADL)

//
// MessageId: DTS_E_TXMERGEJOINMUSTHAVESAMENUMBEROFINPUTANDOUTPUTCOLS
//
// MessageText:
//
// The number of input and output columns are not equal. The total number of input columns on all inputs must be the same as the total number of output columns.
//
#define DTS_E_TXMERGEJOINMUSTHAVESAMENUMBEROFINPUTANDOUTPUTCOLS ((HRESULT)0xC02020AEL)

//
// MessageId: DTS_E_INPUTMUSTBESORTED
//
// MessageText:
//
// "%1!s!" must be sorted.  If possible, sort the data at the source and mark the data as sorted by setting the IsSorted and SortKeyPosition properties in the Advanced Editor.  Otherwise, add a Sort Transformation to the path before the merge.
//
#define DTS_E_INPUTMUSTBESORTED          ((HRESULT)0xC02020AFL)

//
// MessageId: DTS_E_TXMERGEJOININVALIDJOINTYPE
//
// MessageText:
//
// The JoinType custom property for the %1!s! contains a value of %2!ld!, which is not valid. Valid values are 0 (full), 1 (left), or 2 (inner).
//
#define DTS_E_TXMERGEJOININVALIDJOINTYPE ((HRESULT)0xC02020B0L)

//
// MessageId: DTS_E_TXMERGEJOININVALIDNUMKEYCOLS
//
// MessageText:
//
// The NumKeyColumns value is not valid. In the %1!s!, the value for the NumKeyColumns custom property must be between 1 and %2!lu!.
//
#define DTS_E_TXMERGEJOININVALIDNUMKEYCOLS ((HRESULT)0xC02020B1L)

//
// MessageId: DTS_E_NOKEYCOLS
//
// MessageText:
//
// No key columns are found. The %1!s! must have at least one column with a SortKeyPosition that is non-zero.
//
#define DTS_E_NOKEYCOLS                  ((HRESULT)0xC02020B2L)

//
// MessageId: DTS_E_TXMERGEJOINNOTENOUGHKEYCOLS
//
// MessageText:
//
// Not enough key columns. The %1!s! must have at least %2!ld! columns with non-zero SortKeyPosition values.
//
#define DTS_E_TXMERGEJOINNOTENOUGHKEYCOLS ((HRESULT)0xC02020B3L)

//
// MessageId: DTS_E_TXMERGEJOINDATATYPEMISMATCH
//
// MessageText:
//
// Datatype mismatch occurred. The datatypes for the columns with SortKeyPosition value %1!ld! do not match.
//
#define DTS_E_TXMERGEJOINDATATYPEMISMATCH ((HRESULT)0xC02020B4L)

//
// MessageId: DTS_E_TXMERGEJOININVALIDSORTKEYPOS
//
// MessageText:
//
// The column with the SortKeyPosition value of %1!ld! is not valid. It should be %2!ld!.
//
#define DTS_E_TXMERGEJOININVALIDSORTKEYPOS ((HRESULT)0xC02020B5L)

//
// MessageId: DTS_E_TXMERGEJOINSORTDIRECTIONMISMATCH
//
// MessageText:
//
// Sort direction mismatch. The sort directions for the columns with SortKeyPosition value %1!ld! do not match.
//
#define DTS_E_TXMERGEJOINSORTDIRECTIONMISMATCH ((HRESULT)0xC02020B6L)

//
// MessageId: DTS_E_TXMERGEJOINOUTPUTCOLMUSTHAVEASSOCIATEDINPUTCOL
//
// MessageText:
//
// Missing column. The %1!s! must have an associated input column.
//
#define DTS_E_TXMERGEJOINOUTPUTCOLMUSTHAVEASSOCIATEDINPUTCOL ((HRESULT)0xC02020B7L)

//
// MessageId: DTS_E_TXMERGEJOINREADONLYINPUTCOLSWITHNOOUTPUTCOL
//
// MessageText:
//
// Input columns must have output columns. There are input columns with a usage type of read-only that do not have associated output columns.
//
#define DTS_E_TXMERGEJOINREADONLYINPUTCOLSWITHNOOUTPUTCOL ((HRESULT)0xC02020B8L)

//
// MessageId: DTS_E_TXMERGEJOINNONSTRINGCOMPARISONFLAGSNOTZERO
//
// MessageText:
//
// The comparison flags are not zero. The comparison flags for non-string columns must be zero.
//
#define DTS_E_TXMERGEJOINNONSTRINGCOMPARISONFLAGSNOTZERO ((HRESULT)0xC02020B9L)

//
// MessageId: DTS_E_TXMERGEJOINCOMPARISONFLAGSMISMATCH
//
// MessageText:
//
// The comparison flags for the columns with SortKeyPosition value %1!ld! do not match.
//
#define DTS_E_TXMERGEJOINCOMPARISONFLAGSMISMATCH ((HRESULT)0xC02020BAL)

//
// MessageId: DTS_E_TXPIVOTBADPIVOTKEYVALUENOSTRING
//
// MessageText:
//
// Unrecognized pivot key value.
//
#define DTS_E_TXPIVOTBADPIVOTKEYVALUENOSTRING ((HRESULT)0xC02020BBL)

//
// MessageId: DTS_E_TXLINEAGEINVALIDLINEAGEITEM
//
// MessageText:
//
// Lineage item value %1!ld! is not valid. The valid range is between %2!ld! and %3!ld!.
//
#define DTS_E_TXLINEAGEINVALIDLINEAGEITEM ((HRESULT)0xC02020BCL)

//
// MessageId: DTS_E_CANNOTHAVEANYINPUTCOLUMNS
//
// MessageText:
//
// Input columns not allowed. The number of input columns must be zero.
//
#define DTS_E_CANNOTHAVEANYINPUTCOLUMNS  ((HRESULT)0xC02020BDL)

//
// MessageId: DTS_E_TXLINEAGEDATATYPEMISMATCH
//
// MessageText:
//
// The datatype for "%1!s!" is not valid for the specified lineage item.
//
#define DTS_E_TXLINEAGEDATATYPEMISMATCH  ((HRESULT)0xC02020BEL)

//
// MessageId: DTS_E_TXLINEAGEINVALIDLENGTH
//
// MessageText:
//
// The length for "%1!s!" is not valid for the specified lineage item.
//
#define DTS_E_TXLINEAGEINVALIDLENGTH     ((HRESULT)0xC02020BFL)

////////////////////////////////////////////////////////////////////////////
// The input column's metadata does not match the metadata of the output column it is associated with.

//
// MessageId: DTS_E_METADATAMISMATCHWITHOUTPUTCOLUMN
//
// MessageText:
//
// The metadata for "%1!s!" does not match the metadata for the associated output column.
//
#define DTS_E_METADATAMISMATCHWITHOUTPUTCOLUMN ((HRESULT)0xC02020C1L)

//
// MessageId: DTS_E_TXMERGESORTKEYPOSMISMATCH
//
// MessageText:
//
// There are output columns that have SortKeyPosition values that don't match the associated input columns' SortKeyPosition.
//
#define DTS_E_TXMERGESORTKEYPOSMISMATCH  ((HRESULT)0xC02020C3L)

//
// MessageId: DTS_E_ADDROWTOBUFFERFAILED
//
// MessageText:
//
// The attempt to add a row to the Data Flow task buffer failed with error code 0x%1!8.8X!.
//
#define DTS_E_ADDROWTOBUFFERFAILED       ((HRESULT)0xC02020C4L)

//
// MessageId: DTS_E_DATACONVERSIONFAILED
//
// MessageText:
//
// Data conversion failed while converting column "%1!s!" (%2!d!) to column "%3!s!" (%4!d!).  The conversion returned status value %5!d! and status text "%6!s!".
//
#define DTS_E_DATACONVERSIONFAILED       ((HRESULT)0xC02020C5L)

//
// MessageId: DTS_E_FAILEDTOALLOCATEROWHANDLEBUFFER
//
// MessageText:
//
// The attempt to allocate a row handle buffer failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOALLOCATEROWHANDLEBUFFER ((HRESULT)0xC02020C6L)

//
// MessageId: DTS_E_FAILEDTOSENDROWTOSQLSERVER
//
// MessageText:
//
// The attempt to send a row to SQL Server failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOSENDROWTOSQLSERVER ((HRESULT)0xC02020C7L)

//
// MessageId: DTS_E_FAILEDTOPREPAREBUFFERSTATUS
//
// MessageText:
//
// The attempt to prepare the buffer status failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOPREPAREBUFFERSTATUS ((HRESULT)0xC02020C8L)

//
// MessageId: DTS_E_FAILEDTOBUFFERROWSTARTS
//
// MessageText:
//
// The attempt to retrieve the start of the buffer row failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOBUFFERROWSTARTS    ((HRESULT)0xC02020C9L)

////////////////////////////////////////////////////////////////////////////
// Try increasing the bulk insert thread timeout.

//
// MessageId: DTS_E_BULKINSERTTHREADTERMINATED
//
// MessageText:
//
// The thread for the SSIS Bulk Insert is no longer running.  No more rows can be inserted. Try increasing the bulk insert thread timeout.
//
#define DTS_E_BULKINSERTTHREADTERMINATED ((HRESULT)0xC02020CAL)

////////////////////////////////////////////////////////////////////////////
// The source file wasn't produced by the raw file destination.

//
// MessageId: DTS_E_RAWTOOMANYCOLUMNS
//
// MessageText:
//
// The source file is not valid. The source file is returning a count of more than 131,072 columns. This usually occurs when the source file is not produced by the raw file destination.
//
#define DTS_E_RAWTOOMANYCOLUMNS          ((HRESULT)0xC02020CBL)

//
// MessageId: DTS_E_TXUNIONALL_EXTRADANGLINGINPUT
//
// MessageText:
//
// The %1!s! is an extra unattached input and will be removed.
//
#define DTS_E_TXUNIONALL_EXTRADANGLINGINPUT ((HRESULT)0xC02020CCL)

//
// MessageId: DTS_E_TXUNIONALL_NONDANGLINGUNATTACHEDINPUT
//
// MessageText:
//
// The %1!s! is not attached but is not marked as dangling.  It will be marked as dangling.
//
#define DTS_E_TXUNIONALL_NONDANGLINGUNATTACHEDINPUT ((HRESULT)0xC02020CDL)

//
// MessageId: DTS_E_TXPIVOTRUNTIMEDUPLICATEPIVOTKEYVALUE
//
// MessageText:
//
// Duplicate pivot key value "%1!s!".
//
#define DTS_E_TXPIVOTRUNTIMEDUPLICATEPIVOTKEYVALUE ((HRESULT)0xC02020CFL)

//
// MessageId: DTS_E_TXPIVOTRUNTIMEDUPLICATEPIVOTKEYVALUENOSTRING
//
// MessageText:
//
// Duplicate pivot key value.
//
#define DTS_E_TXPIVOTRUNTIMEDUPLICATEPIVOTKEYVALUENOSTRING ((HRESULT)0xC02020D0L)

//
// MessageId: DTS_E_FAILEDTOGETCOMPONENTLOCALEID
//
// MessageText:
//
// Failure retrieving component locale ID. Error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOGETCOMPONENTLOCALEID ((HRESULT)0xC02020D1L)

//
// MessageId: DTS_E_MISMATCHCOMPONENTCONNECTIONMANAGERLOCALEID
//
// MessageText:
//
// Mismatched locale IDs. The component locale ID (%1!d!) does not match the connection manager locale ID (%2!d!).
//
#define DTS_E_MISMATCHCOMPONENTCONNECTIONMANAGERLOCALEID ((HRESULT)0xC02020D2L)

////////////////////////////////////////////////////////////////////////////
// Flat file adapters need to have the locale ID on the flat file connection manager set

//
// MessageId: DTS_E_LOCALEIDNOTSET
//
// MessageText:
//
// The component locale ID has not been set. Flat file adapters need to have the locale ID on the flat file connection manager set.
//
#define DTS_E_LOCALEIDNOTSET             ((HRESULT)0xC02020D3L)

////////////////////////////////////////////////////////////////////////////
// Corrupt input file. The file showed a string length that was too big for the buffer column we've got.

//
// MessageId: DTS_E_RAWBYTESTOOLONG
//
// MessageText:
//
// The binary field is too large. The adapter attempted to read a binary field that was %1!d! bytes long, but expected a field no longer than %2!d! bytes at offset %3!d!. This usually occurs when the input file is not valid. The file contains a string length that is too large for the buffer column.
//
#define DTS_E_RAWBYTESTOOLONG            ((HRESULT)0xC02020D4L)

//
// MessageId: DTS_E_TXSAMPLINGINVALIDPCT
//
// MessageText:
//
// The percentage, %2!ld!, is not valid for the "%1!s!" property. It must be between 0 and 100.
//
#define DTS_E_TXSAMPLINGINVALIDPCT       ((HRESULT)0xC02020D5L)

//
// MessageId: DTS_E_TXSAMPLINGINVALIDROWS
//
// MessageText:
//
// The number of rows, %2!ld!, is not valid for the "%1!s!" property. It must be greater than 0.
//
#define DTS_E_TXSAMPLINGINVALIDROWS      ((HRESULT)0xC02020D6L)

////////////////////////////////////////////////////////////////////////////
// Somehow, a very long string entered the pipeline.

//
// MessageId: DTS_E_RAWSTRINGINPUTTOOLONG
//
// MessageText:
//
// The adapter was asked to write a string that was %1!I64d! bytes long, but all data must be less than 4294967295 bytes in length.
//
#define DTS_E_RAWSTRINGINPUTTOOLONG      ((HRESULT)0xC02020D7L)

////////////////////////////////////////////////////////////////////////////
// This happens when no input columns have been mapped to output columns.

//
// MessageId: DTS_E_ATLEASTONEINPUTMUSTBEMAPPEDTOOUTPUT
//
// MessageText:
//
// No inputs were mapped to an output. The "%1!s!" must have at least one input column mapped to an output column.
//
#define DTS_E_ATLEASTONEINPUTMUSTBEMAPPEDTOOUTPUT ((HRESULT)0xC02020D9L)

//
// MessageId: DTS_E_CANNOTCONVERTDATATYPESWITHDIFFERENTCODEPAGES
//
// MessageText:
//
// Conversion from "%1!s!" with code page %2!d! to "%3!s!" with code page %4!d! is not supported.
//
#define DTS_E_CANNOTCONVERTDATATYPESWITHDIFFERENTCODEPAGES ((HRESULT)0xC02020DBL)

//
// MessageId: DTS_E_COLUMNNOTMAPPEDTOEXTERNALMETADATACOLUMN
//
// MessageText:
//
// The external metadata column mapping for %1!s! is not valid.  The external metadata column ID cannot be zero.
//
#define DTS_E_COLUMNNOTMAPPEDTOEXTERNALMETADATACOLUMN ((HRESULT)0xC02020DCL)

//
// MessageId: DTS_E_COLUMNMAPPEDTONONEXISTENTEXTERNALMETADATACOLUMN
//
// MessageText:
//
// The %1!s! is mapped to an external metadata column that does not exist.
//
#define DTS_E_COLUMNMAPPEDTONONEXISTENTEXTERNALMETADATACOLUMN ((HRESULT)0xC02020DDL)

//
// MessageId: DTS_E_UNABLETOWRITELOBDATATOBUFFER
//
// MessageText:
//
// Writing long object data of type DT_TEXT, DT_NTEXT, or DT_IMAGE to Data Flow task buffer failed for column "%1!s!".
//
#define DTS_E_UNABLETOWRITELOBDATATOBUFFER ((HRESULT)0xC02020E5L)

////////////////////////////////////////////////////////////////////////////
// Check that the object exists in the database.

//
// MessageId: DTS_E_CANNOTGETIROWSET
//
// MessageText:
//
// Opening a rowset for "%1!s!" failed. Check that the object exists in the database.
//
#define DTS_E_CANNOTGETIROWSET           ((HRESULT)0xC02020E8L)

//
// MessageId: DTS_E_VARIABLEACCESSFAILED
//
// MessageText:
//
// Accessing variable "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_VARIABLEACCESSFAILED       ((HRESULT)0xC02020E9L)

////////////////////////////////////////////////////////////////////////////
// A component failed to find the CM in Connections collection.

//
// MessageId: DTS_E_CONNECTIONMANAGERNOTFOUND
//
// MessageText:
//
// The connection manager "%1!s!" is not found. A component failed to find the connection manager in the Connections collection.
//
#define DTS_E_CONNECTIONMANAGERNOTFOUND  ((HRESULT)0xC02020EAL)

//
// MessageId: DTS_E_VERSIONUPGRADEFAILED
//
// MessageText:
//
// The upgrade from version "%1!s!" to version %2!d! failed.
//
#define DTS_E_VERSIONUPGRADEFAILED       ((HRESULT)0xC02020EBL)

//
// MessageId: DTS_E_RSTDESTBIGBLOB
//
// MessageText:
//
// A value in an input column is too large to be stored in the ADODB.Recordset object.
//
#define DTS_E_RSTDESTBIGBLOB             ((HRESULT)0xC02020ECL)

//
// MessageId: DTS_E_CANNOTCONVERTBETWEENUNICODEANDNONUNICODESTRINGCOLUMNS
//
// MessageText:
//
// Columns "%1!s!" and "%2!s!" cannot convert between unicode and non-unicode string data types.
//
#define DTS_E_CANNOTCONVERTBETWEENUNICODEANDNONUNICODESTRINGCOLUMNS ((HRESULT)0xC02020EDL)

////////////////////////////////////////////////////////////////////////////
// Need a runtime variable name to write to

//
// MessageId: DTS_E_ROWCOUNTBADVARIABLENAME
//
// MessageText:
//
// The variable "%1!s!" specified by VariableName property is not a valid variable. Need a valid variable name to write to.
//
#define DTS_E_ROWCOUNTBADVARIABLENAME    ((HRESULT)0xC02020EEL)

////////////////////////////////////////////////////////////////////////////
// Need the runtime variable to be of type VT_I4, VT_UI4, VT_I8 or VT_UI8

//
// MessageId: DTS_E_ROWCOUNTBADVARIABLETYPE
//
// MessageText:
//
// The variable "%1!s!" specified by VariableName property is not an integer. Change the variable to be of type VT_I4, VT_UI4, VT_I8, or VT_UI8.
//
#define DTS_E_ROWCOUNTBADVARIABLETYPE    ((HRESULT)0xC02020EFL)

//
// MessageId: DTS_E_NOCOLUMNADVANCETHROUGHFILE
//
// MessageText:
//
// No column was specified to allow the component to advance through the file.
//
#define DTS_E_NOCOLUMNADVANCETHROUGHFILE ((HRESULT)0xC02020F0L)

//
// MessageId: DTS_E_MERGEJOINSORTEDOUTPUTHASNOSORTKEYPOSITIONS
//
// MessageText:
//
// The "%1!s!" has IsSorted set to TRUE, but the SortKeyPosition on all output columns are zero. Either change the IsSorted to FALSE, or select at least one output column to contain a non-zero SortKeyPosition.
//
#define DTS_E_MERGEJOINSORTEDOUTPUTHASNOSORTKEYPOSITIONS ((HRESULT)0xC02020F1L)

////////////////////////////////////////////////////////////////////////////
// The input column's metadata does not match the metadata of the output column it is associated with.

//
// MessageId: DTS_E_METADATAMISMATCHWITHINPUTCOLUMN
//
// MessageText:
//
// The "%1!s!" metadata does not match the metadata of the input column.
//
#define DTS_E_METADATAMISMATCHWITHINPUTCOLUMN ((HRESULT)0xC02020F2L)

//
// MessageId: DTS_E_RSTDESTBADVARIABLE
//
// MessageText:
//
// The value of the specified variable cannot be located, locked, or set.
//
#define DTS_E_RSTDESTBADVARIABLE         ((HRESULT)0xC02020F3L)

//
// MessageId: DTS_E_CANTPROCESSCOLUMNTYPECODEPAGE
//
// MessageText:
//
// The column "%1!s!" cannot be processed because more than one code page (%2!d! and %3!d!) are specified for it.
//
#define DTS_E_CANTPROCESSCOLUMNTYPECODEPAGE ((HRESULT)0xC02020F4L)

//
// MessageId: DTS_E_CANTINSERTCOLUMNTYPE
//
// MessageText:
//
// The column "%1!s!" can't be inserted because the conversion between types %2!s! and %3!s! is not supported.
//
#define DTS_E_CANTINSERTCOLUMNTYPE       ((HRESULT)0xC02020F5L)

//
// MessageId: DTS_E_CANNOTCONVERTBETWEENUNICODEANDNONUNICODESTRINGCOLUMN
//
// MessageText:
//
// Column "%1!s!" cannot convert between unicode and non-unicode string data types.
//
#define DTS_E_CANNOTCONVERTBETWEENUNICODEANDNONUNICODESTRINGCOLUMN ((HRESULT)0xC02020F6L)

//
// MessageId: DTS_E_COULDNOTFINDINPUTBUFFERCOLUMNBYLINEAGE
//
// MessageText:
//
// The %1!s! cannot find the column with LineageID %2!ld! in its input buffer.
//
#define DTS_E_COULDNOTFINDINPUTBUFFERCOLUMNBYLINEAGE ((HRESULT)0xC02020F8L)

//
// MessageId: DTS_E_COULDNOTGETCOLUMNINFOFORINPUTBUFFER
//
// MessageText:
//
// The %1!s! cannot get the column information for column %2!lu! from its input buffer.
//
#define DTS_E_COULDNOTGETCOLUMNINFOFORINPUTBUFFER ((HRESULT)0xC02020F9L)

//
// MessageId: DTS_E_COULDNOTGETCOLUMNINFOFORCOPYBUFFER
//
// MessageText:
//
// The %1!s! cannot get the column information for column "%2!lu!" from its copy buffer.
//
#define DTS_E_COULDNOTGETCOLUMNINFOFORCOPYBUFFER ((HRESULT)0xC02020FAL)

//
// MessageId: DTS_E_COULDNOTREGISTERCOPYBUFFER
//
// MessageText:
//
// The %1!s! cannot register a buffer type for its copy buffer.
//
#define DTS_E_COULDNOTREGISTERCOPYBUFFER ((HRESULT)0xC02020FBL)

//
// MessageId: DTS_E_COULDNOTCREATECOPYBUFFER
//
// MessageText:
//
// The %1!s! cannot create a buffer to copy its data into for sorting.
//
#define DTS_E_COULDNOTCREATECOPYBUFFER   ((HRESULT)0xC02020FCL)

//
// MessageId: DTS_E_DATAREADERDESTREADFAILED
//
// MessageText:
//
// DataReader client has failed to call Read or has closed the DataReader.
//
#define DTS_E_DATAREADERDESTREADFAILED   ((HRESULT)0xC02020FDL)

//
// MessageId: DTS_E_NOSCHEMAINFOFOUND
//
// MessageText:
//
// No column information was returned by the SQL command.
//
#define DTS_E_NOSCHEMAINFOFOUND          ((HRESULT)0xC02020FEL)

////////////////////////////////////////////////////////////////////////////
// An exception was thrown by GetSchemaTable.

//
// MessageId: DTS_E_GETSCHEMATABLEFAILED
//
// MessageText:
//
// The %1!s! was unable to retrieve column information for the SQL command. The following error occurred: %2!s!
//
#define DTS_E_GETSCHEMATABLEFAILED       ((HRESULT)0xC02020FFL)

//
// MessageId: DTS_E_SOURCETABLENAMENOTPROVIDED
//
// MessageText:
//
// A source table name has not been provided.
//
#define DTS_E_SOURCETABLENAMENOTPROVIDED ((HRESULT)0xC0202100L)

////////////////////////////////////////////////////////////////////////////
// Invalid index position specified (negative or too big)

//
// MessageId: DTS_E_CACHE_INVALID_INDEXPOS
//
// MessageText:
//
// The cache index position, %1!d!, is not valid. For non-index columns, the index position should be 0. For index columns, the index position should be a sequential, positive number.
//
#define DTS_E_CACHE_INVALID_INDEXPOS     ((HRESULT)0xC0203110L)

////////////////////////////////////////////////////////////////////////////
// Duplicate column index position specified

//
// MessageId: DTS_E_CACHE_DUPLICATE_INDEXPOS
//
// MessageText:
//
// The index position, %1!d!, is a duplicate. For non-index columns, the index position should be 0. For index columns, the index position should be a sequential, positive number.
//
#define DTS_E_CACHE_DUPLICATE_INDEXPOS   ((HRESULT)0xC0203111L)

////////////////////////////////////////////////////////////////////////////
// Index columns are not specified

//
// MessageId: DTS_E_CACHE_TOO_FEW_INDEX_COLUMNS
//
// MessageText:
//
// At least one index column should be specified for the Cache connection manager. To specify an index column, set the Index Position property of the cache column.
//
#define DTS_E_CACHE_TOO_FEW_INDEX_COLUMNS ((HRESULT)0xC0203112L)

////////////////////////////////////////////////////////////////////////////
// Cache connection manager index positions are not continous

//
// MessageId: DTS_E_CACHE_INDEXPOS_NOT_CONTINUOUS
//
// MessageText:
//
// Cache index positions must be contiguous. For non-index columns, the index position should be 0. For index columns, the index position should be a sequential, positive number.
//
#define DTS_E_CACHE_INDEXPOS_NOT_CONTINUOUS ((HRESULT)0xC0203113L)

////////////////////////////////////////////////////////////////////////////
// The property being set is not supported on the specified object. Check the property name, case, and spelling.

//
// MessageId: DTS_E_PROPERTYNOTSUPPORTED
//
// MessageText:
//
// The property "%1!s!" cannot be set on "%2!s!". The property being set is not supported on the specified object. Check the property name, case, and spelling.
//
#define DTS_E_PROPERTYNOTSUPPORTED       ((HRESULT)0xC0204000L)

//
// MessageId: DTS_E_CANTCHANGEPROPERTYTYPE
//
// MessageText:
//
// The property type cannot be changed from the type that was set by the component.
//
#define DTS_E_CANTCHANGEPROPERTYTYPE     ((HRESULT)0xC0204002L)

////////////////////////////////////////////////////////////////////////////
// Inserting the output failed.  The new output was not created.

//
// MessageId: DTS_E_CANTADDOUTPUTID
//
// MessageText:
//
// Output ID %1!d! failed during insert. The new output was not created.
//
#define DTS_E_CANTADDOUTPUTID            ((HRESULT)0xC0204003L)

////////////////////////////////////////////////////////////////////////////
// The output could not be deleted from the output collection.  The ID might have been invalid, or it might have been the default or error output.

//
// MessageId: DTS_E_CANTDELETEOUTPUTID
//
// MessageText:
//
// Cannot delete output ID %1!d! from the output collection.  The ID may not be valid, or the ID may have been the default or error output.
//
#define DTS_E_CANTDELETEOUTPUTID         ((HRESULT)0xC0204004L)

////////////////////////////////////////////////////////////////////////////
// The property could not be set for an unknown reason.

//
// MessageId: DTS_E_FAILEDTOSETPROPERTY
//
// MessageText:
//
// Failed to set property "%1!s!" on "%2!s!".
//
#define DTS_E_FAILEDTOSETPROPERTY        ((HRESULT)0xC0204006L)

////////////////////////////////////////////////////////////////////////////
// Failed to set the type of the output column to the result type of the expression on the column.

//
// MessageId: DTS_E_FAILEDTOSETOUTPUTCOLUMNTYPE
//
// MessageText:
//
// Failed to set the type of %1!s! to type: "%2!s!", length: %3!d!, precision: %4!d!, scale: %5!d!, codepage: %6!d!.
//
#define DTS_E_FAILEDTOSETOUTPUTCOLUMNTYPE ((HRESULT)0xC0204007L)

//
// MessageId: DTS_E_MORETHANONEERROROUTPUTFOUND
//
// MessageText:
//
// More than one error output was found on the component, and there can be only one.
//
#define DTS_E_MORETHANONEERROROUTPUTFOUND ((HRESULT)0xC0204008L)

//
// MessageId: DTS_E_CANTSETOUTPUTCOLUMNPROPERTY
//
// MessageText:
//
// The property on an output column cannot be set.
//
#define DTS_E_CANTSETOUTPUTCOLUMNPROPERTY ((HRESULT)0xC020400AL)

//
// MessageId: DTS_E_CANTMODIFYERROROUTPUTCOLUMNDATATYPE
//
// MessageText:
//
// The data type for "%1!s!" cannot be modified in the error "%2!s!".
//
#define DTS_E_CANTMODIFYERROROUTPUTCOLUMNDATATYPE ((HRESULT)0xC020400BL)

////////////////////////////////////////////////////////////////////////////
// A source output has a SynchronousInputID value of zero.

//
// MessageId: DTS_E_CANONLYSETISSORTEDONSOURCE
//
// MessageText:
//
// The "%1!s!" cannot have its IsSorted property set to TRUE because it is not a source output. A source output has a SynchronousInputID value of zero.
//
#define DTS_E_CANONLYSETISSORTEDONSOURCE ((HRESULT)0xC020400EL)

////////////////////////////////////////////////////////////////////////////
// The output column "colname" (ID) cannot have its SortKeyPosition property set to non-zero because its output "outputname" (ID) is not a source output.

//
// MessageId: DTS_E_CANONLYSETSORTKEYONSOURCE
//
// MessageText:
//
// The "%1!s!" cannot have a SortKeyPosition property set to non-zero because "%2!s!" is not a source output. The output column "colname" (ID) cannot have its SortKeyPosition property set to non-zero because its output "outputname" (ID) is not a source output.
//
#define DTS_E_CANONLYSETSORTKEYONSOURCE  ((HRESULT)0xC020400FL)

////////////////////////////////////////////////////////////////////////////
// The output column "colname" (ID) cannot have its ComparisonFlags property set to non-zero because its output "outputname" (ID) is not a source output.

//
// MessageId: DTS_E_CANONLYSETCOMPFLAGSONSOURCE
//
// MessageText:
//
// The ComparisonFlags property cannot be set to a non-zero value for "%1!s!" because the "%2!s!" is not a source output. The output column "colname" (ID) cannot have a ComparisonFlags property set to non-zero because its output "outputname" (ID) is not a source output.
//
#define DTS_E_CANONLYSETCOMPFLAGSONSOURCE ((HRESULT)0xC0204010L)

////////////////////////////////////////////////////////////////////////////
// ComparisonFlags can only be non zero for string type columns.

//
// MessageId: DTS_E_NONSTRINGCOMPARISONFLAGSNOTZERO
//
// MessageText:
//
// The comparison flags for "%1!s!" must be zero because its type is not a string type. ComparisonFlags can only be non-zero for string type columns.
//
#define DTS_E_NONSTRINGCOMPARISONFLAGSNOTZERO ((HRESULT)0xC0204011L)

////////////////////////////////////////////////////////////////////////////
// An output column's ComparisonFlags can only be non-zero if its SortKeyPosition is also non zero.

//
// MessageId: DTS_E_COMPFLAGSONLYONSORTCOL
//
// MessageText:
//
// The "%1!s!" cannot have a ComparisonFlags property set to non-zero because its SortKeyPosition is set to zero. An output column's ComparisonFlags can only be non-zero if its SortKeyPosition is also non-zero.
//
#define DTS_E_COMPFLAGSONLYONSORTCOL     ((HRESULT)0xC0204012L)

//
// MessageId: DTS_E_READONLYSTOCKPROPERTY
//
// MessageText:
//
// The property is read-only.
//
#define DTS_E_READONLYSTOCKPROPERTY      ((HRESULT)0xC0204013L)

//
// MessageId: DTS_E_INVALIDDATATYPE
//
// MessageText:
//
// The %1!s! had an invalid datatype value (%2!ld!) set.
//
#define DTS_E_INVALIDDATATYPE            ((HRESULT)0xC0204014L)

//
// MessageId: DTS_E_CODEPAGEREQUIRED
//
// MessageText:
//
// The "%1!s!" requires a code page to be set but the value passed was zero.
//
#define DTS_E_CODEPAGEREQUIRED           ((HRESULT)0xC0204015L)

//
// MessageId: DTS_E_INVALIDSTRINGLENGTH
//
// MessageText:
//
// The "%1!s!" has a length that is not valid. The length must be between %2!ld! and %3!ld!.
//
#define DTS_E_INVALIDSTRINGLENGTH        ((HRESULT)0xC0204016L)

//
// MessageId: DTS_E_INVALIDSCALE
//
// MessageText:
//
// The "%1!s!" has a scale that is not valid. The scale must be between %2!ld! and %3!ld!.
//
#define DTS_E_INVALIDSCALE               ((HRESULT)0xC0204017L)

//
// MessageId: DTS_E_INVALIDPRECISION
//
// MessageText:
//
// The "%1!s!" has a precision that is not valid. The precision must be between %2!ld! and %3!ld!.
//
#define DTS_E_INVALIDPRECISION           ((HRESULT)0xC0204018L)

//
// MessageId: DTS_E_PROPVALUEIGNORED
//
// MessageText:
//
// The "%1!s!" has a value set for length, precision, scale, or code page that is a value other than zero, but the data type requires the value to be zero.
//
#define DTS_E_PROPVALUEIGNORED           ((HRESULT)0xC0204019L)

//
// MessageId: DTS_E_CANTSETOUTPUTCOLUMNDATATYPEPROPERTIES
//
// MessageText:
//
// The %1!s! does not allow setting output column datatype properties.
//
#define DTS_E_CANTSETOUTPUTCOLUMNDATATYPEPROPERTIES ((HRESULT)0xC020401AL)

//
// MessageId: DTS_E_INVALIDDATATYPEFORERRORCOLUMNS
//
// MessageText:
//
// The "%1!s!" contains an invalid data type. "%1!s! " is a special error column,  and the only valid data type is DT_I4.
//
#define DTS_E_INVALIDDATATYPEFORERRORCOLUMNS ((HRESULT)0xC020401BL)

//
// MessageId: DTS_E_NOERRORDESCFORCOMPONENT
//
// MessageText:
//
// The component does not supply error code descriptions.
//
#define DTS_E_NOERRORDESCFORCOMPONENT    ((HRESULT)0xC020401CL)

//
// MessageId: DTS_E_UNRECOGNIZEDERRORCODE
//
// MessageText:
//
// The specified error code is not associated with this component.
//
#define DTS_E_UNRECOGNIZEDERRORCODE      ((HRESULT)0xC020401DL)

//
// MessageId: DTS_E_TRUNCATIONTRIGGEREDREDIRECTION
//
// MessageText:
//
// A truncation caused a row to be redirected, based on the truncation disposition settings.
//
#define DTS_E_TRUNCATIONTRIGGEREDREDIRECTION ((HRESULT)0xC020401FL)

////////////////////////////////////////////////////////////////////////////
// A attempt was made to change the usage type of an input column to a type (UT_READWRITE) that is not supported on this component.

//
// MessageId: DTS_E_CANTSETUSAGETYPETOREADWRITE
//
// MessageText:
//
// The "%1!s!" is unable to make the column with lineage ID %2!d! read/write because that usage type is not allowed on this column. An attempt was made to change the usage type of an input column to a type, UT_READWRITE, that is not supported on this component.
//
#define DTS_E_CANTSETUSAGETYPETOREADWRITE ((HRESULT)0xC0204020L)

////////////////////////////////////////////////////////////////////////////
// An attempt was made to set the usage type of an input column to a type that is not allowed on this component.

//
// MessageId: DTS_E_CANTSETUSAGETYPE
//
// MessageText:
//
// The %1!s! has forbidden the requested use of the input column with lineage ID %2!d!.
//
#define DTS_E_CANTSETUSAGETYPE           ((HRESULT)0xC0204023L)

////////////////////////////////////////////////////////////////////////////
// The specified error occurred while attempting to set the usage type of an input column.

//
// MessageId: DTS_E_FAILEDTOSETUSAGETYPE
//
// MessageText:
//
// The "%1!s!" was unable to make the requested change to the input column with lineage ID %2!d!. The request failed with error code 0x%3!8.8X!. The specified error occurred while attempting to set the usage type of an input column.
//
#define DTS_E_FAILEDTOSETUSAGETYPE       ((HRESULT)0xC0204024L)

////////////////////////////////////////////////////////////////////////////
// The specified error occurred while attempting to set one or more of the data type properties of the output column.

//
// MessageId: DTS_E_FAILEDTOSETOUTPUTCOLUMNDATATYPEPROPERTIES
//
// MessageText:
//
// Attempt to set the data type properties on "%1!s!" failed with error code 0x%2!8.8X!. The error occurred while attempting to set one or more of the data type properties of the output column.
//
#define DTS_E_FAILEDTOSETOUTPUTCOLUMNDATATYPEPROPERTIES ((HRESULT)0xC0204025L)

////////////////////////////////////////////////////////////////////////////
// Make sure the object name is valid and the object exists.

//
// MessageId: DTS_E_UNABLETORETRIEVEMETADATA
//
// MessageText:
//
// The metadata for "%1!s!" cannot be retrieved. Make sure the object name is correct and the object exists.
//
#define DTS_E_UNABLETORETRIEVEMETADATA   ((HRESULT)0xC0204026L)

//
// MessageId: DTS_E_CANNOTMAPOUTPUTCOLUMN
//
// MessageText:
//
// The output column cannot be mapped to an external metadata column.
//
#define DTS_E_CANNOTMAPOUTPUTCOLUMN      ((HRESULT)0xC0204027L)

//
// MessageId: DTS_E_UNSUPPORTEDVARIABLETYPE
//
// MessageText:
//
// The variable %1!s! is required to be of type "%2!s!".
//
#define DTS_E_UNSUPPORTEDVARIABLETYPE    ((HRESULT)0xC0204028L)

//
// MessageId: DTS_E_CANTSETEXTERNALMETADATACOLUMNDATATYPEPROPERTIES
//
// MessageText:
//
// The %1!s! does not allow setting external metadata column datatype properties.
//
#define DTS_E_CANTSETEXTERNALMETADATACOLUMNDATATYPEPROPERTIES ((HRESULT)0xC020402AL)

////////////////////////////////////////////////////////////////////////////
// The specified ID must be the input ID or the output ID that the external metadata collection is associated with.

//
// MessageId: DTS_E_IDNOTINPUTNOROUTPUT
//
// MessageText:
//
// The ID, %1!lu!, is neither an input ID nor an output ID. The specified ID must be the input ID or the output ID that the external metadata collection is associated with.
//
#define DTS_E_IDNOTINPUTNOROUTPUT        ((HRESULT)0xC020402BL)

//
// MessageId: DTS_E_METADATACOLLECTIONNOTUSED
//
// MessageText:
//
// The external metadata collection on "%1!s!" is marked as not used, so no operations can be performed on it.
//
#define DTS_E_METADATACOLLECTIONNOTUSED  ((HRESULT)0xC020402CL)

////////////////////////////////////////////////////////////////////////////
// Cannot get a buffer type on a sync output

//
// MessageId: DTS_E_NOBUFFERTYPEONSYNCOUTPUT
//
// MessageText:
//
// The %1!s! is a synchronous output and the buffer type cannot be retrieved for a synchronous output.
//
#define DTS_E_NOBUFFERTYPEONSYNCOUTPUT   ((HRESULT)0xC020402DL)

////////////////////////////////////////////////////////////////////////////
// The input column has a usage type other than read only, which is not allowed here.

//
// MessageId: DTS_E_INPUTCOLUMNUSAGETYPENOTREADONLY
//
// MessageText:
//
// The input column "%1!s!" must be read-only. The input column has a usage type other than read-only, which is not allowed.
//
#define DTS_E_INPUTCOLUMNUSAGETYPENOTREADONLY ((HRESULT)0xC0207000L)

////////////////////////////////////////////////////////////////////////////
// The object is required to have the specified custom property.

//
// MessageId: DTS_E_MISSINGCUSTOMPROPERTY
//
// MessageText:
//
// The "%1!s!" is missing the required property "%2!s!". The object is required to have the specified custom property.
//
#define DTS_E_MISSINGCUSTOMPROPERTY      ((HRESULT)0xC0207001L)

////////////////////////////////////////////////////////////////////////////
// The output is not allowed to have the specified property.

//
// MessageId: DTS_E_ILLEGALCUSTOMOUTPUTPROPERTY
//
// MessageText:
//
// The output %1!s! cannot not have property "%2!s!", but currently has that property assigned.
//
#define DTS_E_ILLEGALCUSTOMOUTPUTPROPERTY ((HRESULT)0xC0207002L)

////////////////////////////////////////////////////////////////////////////
// All outputs must be in the specified exclusion group.

//
// MessageId: DTS_E_INVALIDOUTPUTEXCLUSIONGROUP
//
// MessageText:
//
// The %1!s! must be in exclusion group %2!d!. All outputs must be in the specified exclusion group.
//
#define DTS_E_INVALIDOUTPUTEXCLUSIONGROUP ((HRESULT)0xC0207003L)

////////////////////////////////////////////////////////////////////////////
// The property is not allowed to be empty.

//
// MessageId: DTS_E_PROPERTYISEMPTY
//
// MessageText:
//
// The property "%1!s!" is empty. The property cannot be empty.
//
#define DTS_E_PROPERTYISEMPTY            ((HRESULT)0xC0207004L)

////////////////////////////////////////////////////////////////////////////
// Out of memory creating internal object to hold the expression.

//
// MessageId: DTS_E_CREATEEXPRESSIONOBJECTFAILED
//
// MessageText:
//
// Memory cannot be allocated for the expression "%1!s!". There was an out-of-memory error while creating an internal object to hold the expression.
//
#define DTS_E_CREATEEXPRESSIONOBJECTFAILED ((HRESULT)0xC0207005L)

////////////////////////////////////////////////////////////////////////////
// Expression was invalid, or we ran out of memory.

//
// MessageId: DTS_E_EXPRESSIONPARSEFAILED
//
// MessageText:
//
// Cannot parse the expression "%1!s!". The expression was not valid, or there is an out-of-memory error.
//
#define DTS_E_EXPRESSIONPARSEFAILED      ((HRESULT)0xC0207006L)

////////////////////////////////////////////////////////////////////////////
// Failed to compute the expression.  The expression may have errors (such as divide by zero) that could not be detected at parse time, or we may have run out of memory.

//
// MessageId: DTS_E_EXPRESSIONCOMPUTEFAILED
//
// MessageText:
//
// Computing the expression "%1!s!" failed with error code 0x%2!8.8X!. The expression may have errors, such as divide by zero, that cannot be detected at parse time, or there may be an out-of-memory error.
//
#define DTS_E_EXPRESSIONCOMPUTEFAILED    ((HRESULT)0xC0207007L)

////////////////////////////////////////////////////////////////////////////
// Out of memory creating the array of Expression object pointers.

//
// MessageId: DTS_E_FAILEDTOCREATEEXPRESSIONARRAY
//
// MessageText:
//
// Memory cannot be allocated for the Expression objects. An out-of-memory error occurred while creating the array of Expression object pointers.
//
#define DTS_E_FAILEDTOCREATEEXPRESSIONARRAY ((HRESULT)0xC0207008L)

////////////////////////////////////////////////////////////////////////////
// The specified error occurred creating the Expression Manager object.

//
// MessageId: DTS_E_FAILEDTOCREATEEXPRESSIONMANANGER
//
// MessageText:
//
// The %1!s! failed with error code 0x%2!8.8X! while creating the Expression Manager.
//
#define DTS_E_FAILEDTOCREATEEXPRESSIONMANANGER ((HRESULT)0xC020700AL)

////////////////////////////////////////////////////////////////////////////
// The result type of the expression must be Boolean.

//
// MessageId: DTS_E_SPLITEXPRESSIONNOTBOOLEAN
//
// MessageText:
//
// The expression "%1!s!" is not Boolean. The result type of the expression must be Boolean.
//
#define DTS_E_SPLITEXPRESSIONNOTBOOLEAN  ((HRESULT)0xC020700BL)

////////////////////////////////////////////////////////////////////////////
// The expression failed validation.

//
// MessageId: DTS_E_EXPRESSIONVALIDATIONFAILED
//
// MessageText:
//
// The expression "%1!s!" on "%2!s!" is not valid.
//
#define DTS_E_EXPRESSIONVALIDATIONFAILED ((HRESULT)0xC020700CL)

////////////////////////////////////////////////////////////////////////////
// The name provided on the output column or input column object couldn't be found in the file.

//
// MessageId: DTS_E_COLUMNNOTMATCHED
//
// MessageText:
//
// The column "%1!s!" (%2!d!) cannot be matched to any input file column. The output column name or input column name cannot be found in the file.
//
#define DTS_E_COLUMNNOTMATCHED           ((HRESULT)0xC020700EL)

////////////////////////////////////////////////////////////////////////////
// The input or output column that was to receive the result of the expression could not be determined, or the expression result could not be cast to the column type.

//
// MessageId: DTS_E_SETRESULTCOLUMNFAILED
//
// MessageText:
//
// Attempting to set the result column for the expression "%1!s!" on %2!s! failed with error code 0x%3!8.8X!. The input or output column that was to receive the result of the expression cannot be determined, or the expression result cannot be cast to the column type.
//
#define DTS_E_SETRESULTCOLUMNFAILED      ((HRESULT)0xC020700FL)

////////////////////////////////////////////////////////////////////////////
// The component failed to get the locale ID from the package because the variables collection was not available.

//
// MessageId: DTS_E_FAILEDTOGETLOCALEIDFROMPACKAGE
//
// MessageText:
//
// The %1!s! failed to get the locale ID from the package.
//
#define DTS_E_FAILEDTOGETLOCALEIDFROMPACKAGE ((HRESULT)0xC0207011L)

////////////////////////////////////////////////////////////////////////////
// The format is: "<parameter name>",variableID;"<parameter name2>",variableID2;

//
// MessageId: DTS_E_INCORRECTPARAMETERMAPPINGFORMAT
//
// MessageText:
//
// The parameter mapping string is not in the correct format.
//
#define DTS_E_INCORRECTPARAMETERMAPPINGFORMAT ((HRESULT)0xC0207012L)

//
// MessageId: DTS_E_NOTENOUGHPARAMETERSPROVIDED
//
// MessageText:
//
// The SQL command requires %1!d! parameters, but the parameter mapping only has %2!d! parameters.
//
#define DTS_E_NOTENOUGHPARAMETERSPROVIDED ((HRESULT)0xC0207013L)

//
// MessageId: DTS_E_PARAMETERNOTFOUNDINMAPPING
//
// MessageText:
//
// The SQL command requires a parameter named "%1!s!", which is not found in the parameter mapping.
//
#define DTS_E_PARAMETERNOTFOUNDINMAPPING ((HRESULT)0xC0207014L)

//
// MessageId: DTS_E_DUPLICATEDATASOURCECOLUMNNAME
//
// MessageText:
//
// There is more than one data source column with the name "%1!s!".  The data source column names must be unique.
//
#define DTS_E_DUPLICATEDATASOURCECOLUMNNAME ((HRESULT)0xC0207015L)

//
// MessageId: DTS_E_DATASOURCECOLUMNWITHNONAMEFOUND
//
// MessageText:
//
// There is a data source column with no name.  Each data source column must have a name.
//
#define DTS_E_DATASOURCECOLUMNWITHNONAMEFOUND ((HRESULT)0xC0207016L)

//
// MessageId: DTS_E_DISCONNECTEDCOMPONENT
//
// MessageText:
//
// A component is disconnected from the layout.
//
#define DTS_E_DISCONNECTEDCOMPONENT      ((HRESULT)0xC0208001L)

//
// MessageId: DTS_E_INVALIDCOMPONENTID
//
// MessageText:
//
// The ID for a layout component is not valid.
//
#define DTS_E_INVALIDCOMPONENTID         ((HRESULT)0xC0208002L)

//
// MessageId: DTS_E_INVALIDINPUTCOUNT
//
// MessageText:
//
// A component has an invalid number of inputs.
//
#define DTS_E_INVALIDINPUTCOUNT          ((HRESULT)0xC0208003L)

//
// MessageId: DTS_E_INVALIDOUTPUTCOUNT
//
// MessageText:
//
// A component has an invalid number of outputs.
//
#define DTS_E_INVALIDOUTPUTCOUNT         ((HRESULT)0xC0208004L)

//
// MessageId: DTS_E_NOINPUTSOROUTPUTS
//
// MessageText:
//
// A component does not have any inputs or outputs.
//
#define DTS_E_NOINPUTSOROUTPUTS          ((HRESULT)0xC0208005L)

//
// MessageId: DTS_E_CANTALLOCATECOLUMNINFO
//
// MessageText:
//
// Not enough memory was available to allocate a list of the columns that are being manipulated by this component.
//
#define DTS_E_CANTALLOCATECOLUMNINFO     ((HRESULT)0xC0208007L)

//
// MessageId: DTS_E_OUTPUTCOLUMNNOTININPUT
//
// MessageText:
//
// Output column "%1!s!" (%2!d!) references input column with lineage ID %3!d!, but no input could be found with that lineage ID.
//
#define DTS_E_OUTPUTCOLUMNNOTININPUT     ((HRESULT)0xC0208008L)

//
// MessageId: DTS_E_SORTNEEDSONEKEY
//
// MessageText:
//
// At least one input column must be marked as a sort key, but no keys were found.
//
#define DTS_E_SORTNEEDSONEKEY            ((HRESULT)0xC0208009L)

//
// MessageId: DTS_E_SORTDUPLICATEKEYWEIGHT
//
// MessageText:
//
// Both column "%1!s!" (%2!d!) and column "%3!s!" (%4!d!) were marked with sort key weight %5!d!.
//
#define DTS_E_SORTDUPLICATEKEYWEIGHT     ((HRESULT)0xC020800AL)

//
// MessageId: DTS_E_CANTMODIFYINVALID
//
// MessageText:
//
// The component cannot perform the requested metadata change until the validation problem is fixed.
//
#define DTS_E_CANTMODIFYINVALID          ((HRESULT)0xC020800DL)

//
// MessageId: DTS_E_CANTADDINPUT
//
// MessageText:
//
// An input cannot be added to the inputs collection.
//
#define DTS_E_CANTADDINPUT               ((HRESULT)0xC020800EL)

//
// MessageId: DTS_E_CANTADDOUTPUT
//
// MessageText:
//
// An output cannot be added to the outputs collection.
//
#define DTS_E_CANTADDOUTPUT              ((HRESULT)0xC020800FL)

//
// MessageId: DTS_E_CANTDELETEINPUT
//
// MessageText:
//
// An input cannot be deleted from the inputs collection.
//
#define DTS_E_CANTDELETEINPUT            ((HRESULT)0xC0208010L)

//
// MessageId: DTS_E_CANTDELETEOUTPUT
//
// MessageText:
//
// An output cannot be removed from the outputs collection.
//
#define DTS_E_CANTDELETEOUTPUT           ((HRESULT)0xC0208011L)

//
// MessageId: DTS_E_CANTCHANGEUSAGETYPE
//
// MessageText:
//
// The usage type of the column cannot be changed.
//
#define DTS_E_CANTCHANGEUSAGETYPE        ((HRESULT)0xC0208014L)

////////////////////////////////////////////////////////////////////////////
// The input or output column had the specified custom property, but was not read/write. Resolution: remove the property, or make the column read/write.

//
// MessageId: DTS_E_INVALIDUSAGETYPEFORCUSTOMPROPERTY
//
// MessageText:
//
// The %1!s! must be read/write to have custom property "%2!s!". The input or output column has the specified custom property, but is not read/write. Remove the property, or make the column read/write.
//
#define DTS_E_INVALIDUSAGETYPEFORCUSTOMPROPERTY ((HRESULT)0xC0208016L)

////////////////////////////////////////////////////////////////////////////
// The input or output column was read/write, so it requires the presence of the specified custom property. Resolution: add the property, or make the column not read/write.

//
// MessageId: DTS_E_READWRITECOLUMNMISSINGREQUIREDCUSTOMPROPERTY
//
// MessageText:
//
// The %1!s! is read/write and is required to have custom property "%2!s!". Add the property, or make remove the read/write attribute from the column.
//
#define DTS_E_READWRITECOLUMNMISSINGREQUIREDCUSTOMPROPERTY ((HRESULT)0xC0208017L)

////////////////////////////////////////////////////////////////////////////
// The component does not allow deleting columns from this input or output.

//
// MessageId: DTS_E_CANTDELETECOLUMN
//
// MessageText:
//
// The column cannot be deleted. The component does not allow columns to be deleted from this input or output.
//
#define DTS_E_CANTDELETECOLUMN           ((HRESULT)0xC0208018L)

////////////////////////////////////////////////////////////////////////////
// The component does not allow adding columns to this input or output.

//
// MessageId: DTS_E_CANTADDCOLUMN
//
// MessageText:
//
// The component does not allow adding columns to this input or output.
//
#define DTS_E_CANTADDCOLUMN              ((HRESULT)0xC0208019L)

////////////////////////////////////////////////////////////////////////////
// Make sure the component's runtime connection collection has an object with that name

//
// MessageId: DTS_E_CANNOTTFINDRUNTIMECONNECTIONOBJECT
//
// MessageText:
//
// The connection "%1!s!" cannot be found. Verify that the connection manager has a connection with that name.
//
#define DTS_E_CANNOTTFINDRUNTIMECONNECTIONOBJECT ((HRESULT)0xC020801AL)

////////////////////////////////////////////////////////////////////////////
// Make sure the runtime connection manager collection has an object with that ID

//
// MessageId: DTS_E_CANNOTFINDRUNTIMECONNECTIONMANAGER
//
// MessageText:
//
// The runtime connection manager with the ID "%1!s!" cannot be found. Verify that the connection manager collection has a connection manager with that ID.
//
#define DTS_E_CANNOTFINDRUNTIMECONNECTIONMANAGER ((HRESULT)0xC020801BL)

//
// MessageId: DTS_E_CANNOTACQUIRECONNECTIONFROMCONNECTIONMANAGER
//
// MessageText:
//
// SSIS Error Code DTS_E_CANNOTACQUIRECONNECTIONFROMCONNECTIONMANAGER.  The AcquireConnection method call to the connection manager "%1!s!" failed with error code 0x%2!8.8X!.  There may be error messages posted before this with more information on why the AcquireConnection method call failed.
//
#define DTS_E_CANNOTACQUIRECONNECTIONFROMCONNECTIONMANAGER ((HRESULT)0xC020801CL)

//
// MessageId: DTS_E_ACQUIREDCONNECTIONISINVALID
//
// MessageText:
//
// The connection acquired from the connection manager "%1!s!" is not valid.
//
#define DTS_E_ACQUIREDCONNECTIONISINVALID ((HRESULT)0xC020801DL)

//
// MessageId: DTS_E_INCORRECTCONNECTIONMANAGERTYPE
//
// MessageText:
//
// The connection manager "%1!s!" is an incorrect type.  The type required is "%2!s!". The type available to the component is "%3!s!".
//
#define DTS_E_INCORRECTCONNECTIONMANAGERTYPE ((HRESULT)0xC020801EL)

//
// MessageId: DTS_E_CANNOTACQUIREMANAGEDCONNECTIONFROMCONNECTIONMANAGER
//
// MessageText:
//
// Cannot acquire a managed connection from the run-time connection manager.
//
#define DTS_E_CANNOTACQUIREMANAGEDCONNECTIONFROMCONNECTIONMANAGER ((HRESULT)0xC020801FL)

//
// MessageId: DTS_E_CANTINITINPUT
//
// MessageText:
//
// An input cannot be created to initialize the inputs collection.
//
#define DTS_E_CANTINITINPUT              ((HRESULT)0xC0208020L)

//
// MessageId: DTS_E_CANTINITOUTPUT
//
// MessageText:
//
// An output cannot be created to initialize the outputs collection.
//
#define DTS_E_CANTINITOUTPUT             ((HRESULT)0xC0208021L)

////////////////////////////////////////////////////////////////////////////
// The error code was previously reported.

//
// MessageId: DTS_E_EXTRACTORCANTWRITE
//
// MessageText:
//
// Writing to the file "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXTRACTORCANTWRITE         ((HRESULT)0xC0208023L)

//
// MessageId: DTS_E_INCORRECTCONNECTIONOBJECTTYPE
//
// MessageText:
//
// The connection manager "%1!s!" returned an object of an  incorrect type from the AcquireConnection method.
//
#define DTS_E_INCORRECTCONNECTIONOBJECTTYPE ((HRESULT)0xC0208024L)

////////////////////////////////////////////////////////////////////////////
// The missing property should be added.

//
// MessageId: DTS_E_INPUTCOLPROPERTYNOTFOUND
//
// MessageText:
//
// The "%3!s!" property is required on input column "%1!s!" (%2!d!), but is not found. The missing property should be added.
//
#define DTS_E_INPUTCOLPROPERTYNOTFOUND   ((HRESULT)0xC0208025L)

////////////////////////////////////////////////////////////////////////////
// Unreferenced columns are not allowed.

//
// MessageId: DTS_E_EXTRACTORUNREFERENCED
//
// MessageText:
//
// The "%1!s!" is marked read-only, but is not referenced by any other column. Unreferenced columns are not allowed.
//
#define DTS_E_EXTRACTORUNREFERENCED      ((HRESULT)0xC0208026L)

////////////////////////////////////////////////////////////////////////////
// A reference points to a nonexistent column.

//
// MessageId: DTS_E_EXTRACTORREFERENCEDCOLUMNNOTFOUND
//
// MessageText:
//
// The "%1!s!" references column ID %2!d!, and that column is not found on the input. A reference points to a nonexistent column.
//
#define DTS_E_EXTRACTORREFERENCEDCOLUMNNOTFOUND ((HRESULT)0xC0208027L)

////////////////////////////////////////////////////////////////////////////
// A reference points to a column that isn't BLOB.

//
// MessageId: DTS_E_EXTRACTORDATACOLUMNNOTBLOB
//
// MessageText:
//
// The "%1!s!" references "%2!s!", and that column is not of a BLOB type.
//
#define DTS_E_EXTRACTORDATACOLUMNNOTBLOB ((HRESULT)0xC0208028L)

////////////////////////////////////////////////////////////////////////////
// A reference points to a nonexistent output column.

//
// MessageId: DTS_E_INSERTERREFERENCEDCOLUMNNOTFOUND
//
// MessageText:
//
// The "%1!s!" references output column ID %2!d!, and that column is not found on the output.
//
#define DTS_E_INSERTERREFERENCEDCOLUMNNOTFOUND ((HRESULT)0xC0208029L)

////////////////////////////////////////////////////////////////////////////
// The error code was previously reported.

//
// MessageId: DTS_E_INSERTERCANTREAD
//
// MessageText:
//
// Reading from the file "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_INSERTERCANTREAD           ((HRESULT)0xC020802AL)

////////////////////////////////////////////////////////////////////////////
// At least one column must be FixedAttribute, ChangingAttribute or HistoricalAttribute.

//
// MessageId: DTS_E_TXSCD_NOTYPEDCOLUMNSATINPUT
//
// MessageText:
//
// There must be at least one column of Fixed, Changing, or Historical type on the input of a Slowly Changing Dimension transform. Verify that at least one column is a FixedAttribute, ChangingAttribute, or HistoricalAttribute.
//
#define DTS_E_TXSCD_NOTYPEDCOLUMNSATINPUT ((HRESULT)0xC020802BL)

////////////////////////////////////////////////////////////////////////////
// The current value of the property is outside the range of legal values.

//
// MessageId: DTS_E_TXSCD_INVALIDINPUTCOLUMNTYPE
//
// MessageText:
//
// The ColumnType property of "%1!s!" is not valid. The current value is outside the range of acceptable values.
//
#define DTS_E_TXSCD_INVALIDINPUTCOLUMNTYPE ((HRESULT)0xC020802CL)

////////////////////////////////////////////////////////////////////////////
// SCD doesn't allow mapping between column of different types except for DT_STR and DT_WSTR.

//
// MessageId: DTS_E_TXSCD_CANNOTMAPDIFFERENTTYPES
//
// MessageText:
//
// The input column "%1!s!" cannot be mapped to external column "%2!s!" because they have different data types. The Slowly Changing Dimension transform does not allow mapping between column of different types except for DT_STR and DT_WSTR.
//
#define DTS_E_TXSCD_CANNOTMAPDIFFERENTTYPES ((HRESULT)0xC020802DL)

////////////////////////////////////////////////////////////////////////////
// Use DT_TEXT instead and then convert the data to DT_NTEXT using the data conversion component.

//
// MessageId: DTS_E_NTEXTDATATYPENOTSUPPORTEDWITHANSIFILES
//
// MessageText:
//
// The data type for "%1!s!" is DT_NTEXT, which is not supported with ANSI files. Use DT_TEXT instead and convert the data to DT_NTEXT using the data conversion component.
//
#define DTS_E_NTEXTDATATYPENOTSUPPORTEDWITHANSIFILES ((HRESULT)0xC020802EL)

////////////////////////////////////////////////////////////////////////////
// Use DT_NTEXT instead and then convert the data to DT_TEXT using the data conversion component.

//
// MessageId: DTS_E_TEXTDATATYPENOTSUPPORTEDWITHUNICODEFILES
//
// MessageText:
//
// The data type for "%1!s!" is DT_TEXT, which is not supported with Unicode files. Use DT_NTEXT instead and convert the data to DT_TEXT using the data conversion component.
//
#define DTS_E_TEXTDATATYPENOTSUPPORTEDWITHUNICODEFILES ((HRESULT)0xC020802FL)

////////////////////////////////////////////////////////////////////////////
// Use DT_TEXT or DT_NTEXT instead and then convert the data from or to DT_IMAGE using the data conversion component.

//
// MessageId: DTS_E_IMAGEDATATYPENOTSUPPORTED
//
// MessageText:
//
// The data type for "%1!s!" is DT_IMAGE, which is not supported. Use DT_TEXT or DT_NTEXT instead and convert the data from, or to, DT_IMAGE using the data conversion component.
//
#define DTS_E_IMAGEDATATYPENOTSUPPORTED  ((HRESULT)0xC0208030L)

//
// MessageId: DTS_E_FLATFILEFORMATNOTSUPPORTED
//
// MessageText:
//
// Format "%1!s!" is not supported by Flat File Connection Manager. Supported formats are Delimited, FixedWidth, RaggedRight, and Mixed.
//
#define DTS_E_FLATFILEFORMATNOTSUPPORTED ((HRESULT)0xC0208031L)

////////////////////////////////////////////////////////////////////////////
// A referencing column is not of string type.

//
// MessageId: DTS_E_EXTRACTORFILENAMECOLUMNNOTSTRING
//
// MessageText:
//
// The "%1!s!" should contain a file name, but it is not of a String type.
//
#define DTS_E_EXTRACTORFILENAMECOLUMNNOTSTRING ((HRESULT)0xC0208032L)

////////////////////////////////////////////////////////////////////////////
// Cannot have both properties set.

//
// MessageId: DTS_E_EXTRACTORCANTAPPENDTRUNCATE
//
// MessageText:
//
// Error caused by conflicting property settings. The "%1!s!" has both the AllowAppend property and the ForceTruncate property set to TRUE. Both properties cannot be set to TRUE. Set one of the two properties to FALSE.
//
#define DTS_E_EXTRACTORCANTAPPENDTRUNCATE ((HRESULT)0xC0208033L)

////////////////////////////////////////////////////////////////////////////
// A reference points to an already-referenced column.

//
// MessageId: DTS_E_EXTRACTORCOLUMNALREADYREFERENCED
//
// MessageText:
//
// The %1!s! references column ID %2!d!, but that column is already referenced by %3!s!. Remove one of the two reference to the column.
//
#define DTS_E_EXTRACTORCOLUMNALREADYREFERENCED ((HRESULT)0xC0208034L)

//
// MessageId: DTS_E_CONNECTIONMANANGERNOTASSIGNED
//
// MessageText:
//
// A connection manager has not been assigned to the %1!s!.
//
#define DTS_E_CONNECTIONMANANGERNOTASSIGNED ((HRESULT)0xC0208035L)

////////////////////////////////////////////////////////////////////////////
// A reference points to an already-referenced column.

//
// MessageId: DTS_E_INSERTERCOLUMNALREADYREFERENCED
//
// MessageText:
//
// The %1!s! references the output column with ID %2!d!, but that column is already referenced by %3!s!.
//
#define DTS_E_INSERTERCOLUMNALREADYREFERENCED ((HRESULT)0xC0208036L)

////////////////////////////////////////////////////////////////////////////
// Each output column must be referenced by exactly one input column.

//
// MessageId: DTS_E_INSERTERCOLUMNNOTREFERENCED
//
// MessageText:
//
// The "%1!s!" is not referenced by any input column. Each output column must be referenced by exactly one input column.
//
#define DTS_E_INSERTERCOLUMNNOTREFERENCED ((HRESULT)0xC0208037L)

////////////////////////////////////////////////////////////////////////////
// A reference points to a column that isn't BLOB as required.

//
// MessageId: DTS_E_INSERTERDATACOLUMNNOTBLOB
//
// MessageText:
//
// The "%1!s!" references "%2!s!", and that column is not the correct type. It must be DT_TEXT, DT_NTEXT, or DT_IMAGE. A reference points to a column that must be a BLOB.
//
#define DTS_E_INSERTERDATACOLUMNNOTBLOB  ((HRESULT)0xC0208038L)

////////////////////////////////////////////////////////////////////////////
// A referencing column is not of string type.

//
// MessageId: DTS_E_INSERTERFILENAMECOLUMNNOTSTRING
//
// MessageText:
//
// The "%1!s!" should contain a file name, but it is not a String type.
//
#define DTS_E_INSERTERFILENAMECOLUMNNOTSTRING ((HRESULT)0xC0208039L)

////////////////////////////////////////////////////////////////////////////
// ExpectBOM can only be set to TRUE for DT_NTEXT output columns.

//
// MessageId: DTS_E_INSERTEREXPECTBOMINVALIDTYPE
//
// MessageText:
//
// The "%1!s!" has the ExpectBOM property set to TRUE for %2!s!, but the column is not NT_NTEXT. The ExpectBOM specifies that the Import Column transformation expects a byte-order mark (BOM). Either set the ExpectBOM property to false or change the output column data type to DT_NTEXT.
//
#define DTS_E_INSERTEREXPECTBOMINVALIDTYPE ((HRESULT)0xC020803AL)

////////////////////////////////////////////////////////////////////////////
// The data output column may only be set to a BLOB type.

//
// MessageId: DTS_E_INSERTERINVALIDDATACOLUMNSETTYPE
//
// MessageText:
//
// Data output columns must be DT_TEXT, DT_NTEXT, or DT_IMAGE. The data output column may only be set to a BLOB type.
//
#define DTS_E_INSERTERINVALIDDATACOLUMNSETTYPE ((HRESULT)0xC020803BL)

////////////////////////////////////////////////////////////////////////////
// The transform will fail when a FixedAttribute change is detected if you set FailOnFixedAttribute to true. To direct the rows to Fixed Attribute Output set FailOnFixedAttribute to false

//
// MessageId: DTS_E_TXSCD_FIXEDATTRIBUTECHANGE
//
// MessageText:
//
// If the FailOnFixedAttributeChange property is set to TRUE, the transformation will fail when a fixed attribute change is detected. To send rows to the Fixed Attribute output, set the FailOnFixedAttributeChange property to FALSE.
//
#define DTS_E_TXSCD_FIXEDATTRIBUTECHANGE ((HRESULT)0xC020803CL)

////////////////////////////////////////////////////////////////////////////
// The transform will fail when a FailOnLookupFailure is set to true.

//
// MessageId: DTS_E_TXSCD_LOOKUPFAILURE
//
// MessageText:
//
// The Lookup transformation failed to retrieve any rows. The transform fails when the FailOnLookupFailure is set to TRUE and no rows are retrieved.
//
#define DTS_E_TXSCD_LOOKUPFAILURE        ((HRESULT)0xC020803DL)

////////////////////////////////////////////////////////////////////////////
// At least one column must be Key.

//
// MessageId: DTS_E_TXSCD_INVALIDNUMBERSOFPARAMETERS
//
// MessageText:
//
// There must be at least one column type of Key on the input of a Slowly Changing Dimension transformation. Set at least one column type to Key.
//
#define DTS_E_TXSCD_INVALIDNUMBERSOFPARAMETERS ((HRESULT)0xC020803EL)

//
// MessageId: DTS_E_TXSCD_CANNOTFINDEXTERNALCOLUMN
//
// MessageText:
//
// Cannot find external column with name "%1!s!".
//
#define DTS_E_TXSCD_CANNOTFINDEXTERNALCOLUMN ((HRESULT)0xC020803FL)

//
// MessageId: DTS_E_TXSCD_INFFEREDINDICATORNOTBOOL
//
// MessageText:
//
// Inferred indicator column "%1!s!" must be of type DT_BOOL.
//
#define DTS_E_TXSCD_INFFEREDINDICATORNOTBOOL ((HRESULT)0xC0208040L)

//
// MessageId: DTS_E_ERRORROWDISPMUSTBENOTUSED
//
// MessageText:
//
// The %1!s! must have its error row disposition value set to RD_NotUsed.
//
#define DTS_E_ERRORROWDISPMUSTBENOTUSED  ((HRESULT)0xC0208107L)

//
// MessageId: DTS_E_TRUNCROWDISPMUSTBENOTUSED
//
// MessageText:
//
// The %1!s! must have its truncation row disposition value set to RD_NotUsed.
//
#define DTS_E_TRUNCROWDISPMUSTBENOTUSED  ((HRESULT)0xC0208108L)

//
// MessageId: DTS_E_TXAGG_INPUTNOTFOUNDFOROUTPUT
//
// MessageText:
//
// Cannot find input column with lineage ID %1!d! needed by output column with ID %2!d!.
//
#define DTS_E_TXAGG_INPUTNOTFOUNDFOROUTPUT ((HRESULT)0xC0208201L)

//
// MessageId: DTS_E_TXAGG_INVALIDOUTPUTDATATYPEFORAGGREGATE
//
// MessageText:
//
// Invalid output data type for aggregate type specified at output column ID %1!d!.
//
#define DTS_E_TXAGG_INVALIDOUTPUTDATATYPEFORAGGREGATE ((HRESULT)0xC0208202L)

//
// MessageId: DTS_E_TXAGG_INVALIDINPUTDATATYPEFORAGGREGATE
//
// MessageText:
//
// Invalid input data type for %1!s! used for the specified aggregate at %2!s!.
//
#define DTS_E_TXAGG_INVALIDINPUTDATATYPEFORAGGREGATE ((HRESULT)0xC0208203L)

//
// MessageId: DTS_E_TXAGG_INPUTOUTPUTDATATYPEMISMATCH
//
// MessageText:
//
// Data types of input column lineage ID %1!d! and output column ID %2!d! do not match.
//
#define DTS_E_TXAGG_INPUTOUTPUTDATATYPEMISMATCH ((HRESULT)0xC0208204L)

//
// MessageId: DTS_E_UNABLETOGETINPUTBUFFERHANDLE
//
// MessageText:
//
// Cannot get input buffer handle for input ID %1!d!.
//
#define DTS_E_UNABLETOGETINPUTBUFFERHANDLE ((HRESULT)0xC0208205L)

//
// MessageId: DTS_E_UNABLETOGETOUTPUTBUFFERHANDLE
//
// MessageText:
//
// Cannot get output buffer handle for output ID %1!d!.
//
#define DTS_E_UNABLETOGETOUTPUTBUFFERHANDLE ((HRESULT)0xC0208206L)

//
// MessageId: DTS_E_UNABLETOFINDCOLUMNHANDLEINOUTPUTBUFFER
//
// MessageText:
//
// Cannot find column with lineage ID %1!d! in output buffer.
//
#define DTS_E_UNABLETOFINDCOLUMNHANDLEINOUTPUTBUFFER ((HRESULT)0xC0208207L)

//
// MessageId: DTS_E_UNABLETOFINDCOLUMNHANDLEININPUTBUFFER
//
// MessageText:
//
// Cannot find column with lineage ID %1!d! in input buffer.
//
#define DTS_E_UNABLETOFINDCOLUMNHANDLEININPUTBUFFER ((HRESULT)0xC0208208L)

//
// MessageId: DTS_E_CANNOTHAVEZEROOUTPUTCOLUMNS
//
// MessageText:
//
// The number of output columns for %1!s! cannot be zero.
//
#define DTS_E_CANNOTHAVEZEROOUTPUTCOLUMNS ((HRESULT)0xC0208209L)

//
// MessageId: DTS_E_CONNECTIONMANAGERCOLUMNCOUNTMISMATCH
//
// MessageText:
//
// The number of columns in the flat file connection manager must be the same as the number of columns in the flat file adapter. The number of columns for the flat file connection manager is %1!d!, while the number of columns for the flat file adapter is %2!d!.
//
#define DTS_E_CONNECTIONMANAGERCOLUMNCOUNTMISMATCH ((HRESULT)0xC020820AL)

//
// MessageId: DTS_E_MISMATCHCONNECTIONMANAGERCOLUMN
//
// MessageText:
//
// The column "%1!s!" at index %2!d! in the flat file connection manager was not found at index %3!d! in the column collection of the flat file adapter.
//
#define DTS_E_MISMATCHCONNECTIONMANAGERCOLUMN ((HRESULT)0xC020820BL)

//
// MessageId: DTS_E_EXTERNALMETADATACOLUMNISALREADYMAPPED
//
// MessageText:
//
// The external metadata column with ID %1!d! has already been mapped to %2!s!.
//
#define DTS_E_EXTERNALMETADATACOLUMNISALREADYMAPPED ((HRESULT)0xC020820DL)

////////////////////////////////////////////////////////////////////////////
// A row given to the transform as a key was too large to convert or store.

//
// MessageId: DTS_E_TXAGG_STRING_TOO_LONG
//
// MessageText:
//
// The transform encountered a key column that was larger than %1!u! characters.
//
#define DTS_E_TXAGG_STRING_TOO_LONG      ((HRESULT)0xC020820EL)

//
// MessageId: DTS_E_DERIVEDRESULT_TOO_LONG
//
// MessageText:
//
// The transform encountered a result value that was longer than %1!u! bytes.
//
#define DTS_E_DERIVEDRESULT_TOO_LONG     ((HRESULT)0xC020820FL)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERROUTPUTDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERROUTPUTDESCRIPTORS ((HRESULT)0xC0208210L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRWORKSPACEDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRWORKSPACEDESCRIPTORS ((HRESULT)0xC0208211L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRSORTORDERDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRSORTORDERDESCRIPTORS ((HRESULT)0xC0208212L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRNUMERICDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRNUMERICDESCRIPTORS ((HRESULT)0xC0208213L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRCOUNTDISTINCTDESCRIPTOR
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRCOUNTDISTINCTDESCRIPTOR ((HRESULT)0xC0208214L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRWORKSPACESORTORDERDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRWORKSPACESORTORDERDESCRIPTORS ((HRESULT)0xC0208215L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRWORKSPACENUMERICDESCRIPTORS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRWORKSPACENUMERICDESCRIPTORS ((HRESULT)0xC0208216L)

//
// MessageId: DTS_E_TXAGG_MEMALLOCERRWORKSPACEBUFFCOLS
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXAGG_MEMALLOCERRWORKSPACEBUFFCOLS ((HRESULT)0xC0208217L)

//
// MessageId: DTS_E_UNREFERENCEDINPUTCOLUMN
//
// MessageText:
//
// The input column "%1!s!" is not referenced.
//
#define DTS_E_UNREFERENCEDINPUTCOLUMN    ((HRESULT)0xC0208218L)

////////////////////////////////////////////////////////////////////////////
// Not enough memory was available.

//
// MessageId: DTS_E_CANTBUILDTHREADPOOL
//
// MessageText:
//
// The Sort transformation could not create a thread pool with %1!d! threads. Not enough memory is available.
//
#define DTS_E_CANTBUILDTHREADPOOL        ((HRESULT)0xC0208219L)

////////////////////////////////////////////////////////////////////////////
// There isn't enough memory available.

//
// MessageId: DTS_E_QUEUEWORKITEMFAILED
//
// MessageText:
//
// The Sort transformation cannot queue a work item to its thread pool. There is not enough memory available.
//
#define DTS_E_QUEUEWORKITEMFAILED        ((HRESULT)0xC020821AL)

////////////////////////////////////////////////////////////////////////////
// A catastrophic error was encountered while sorting a buffer; that error should be repoted separately.

//
// MessageId: DTS_E_SORTTHREADSTOPPED
//
// MessageText:
//
// A worker thread in the Sort transformation stopped with error code 0x%1!8.8X!. A catastrophic error was encountered while sorting a buffer.
//
#define DTS_E_SORTTHREADSTOPPED          ((HRESULT)0xC020821BL)

////////////////////////////////////////////////////////////////////////////
// TxSort was told to use an unreasonable number of threads. The MaxThreads property was not valid.

//
// MessageId: DTS_E_SORTBADTHREADCOUNT
//
// MessageText:
//
// MaxThreads was %1!ld!, and should be between 1 and %2!ld!, inclusive or -1 to default to the number of CPUs.
//
#define DTS_E_SORTBADTHREADCOUNT         ((HRESULT)0xC020821EL)

//
// MessageId: DTS_E_DTPXMLLOADFAILURE
//
// MessageText:
//
// Unable to load from XML.
//
#define DTS_E_DTPXMLLOADFAILURE          ((HRESULT)0xC020821FL)

//
// MessageId: DTS_E_DTPXMLSAVEFAILURE
//
// MessageText:
//
// Unable to save to XML.
//
#define DTS_E_DTPXMLSAVEFAILURE          ((HRESULT)0xC0208220L)

//
// MessageId: DTS_E_DTPXMLINT32CONVERTERR
//
// MessageText:
//
// Unable to convert the value "%1!s!" to an integer.
//
#define DTS_E_DTPXMLINT32CONVERTERR      ((HRESULT)0xC0208221L)

//
// MessageId: DTS_E_DTPXMLBOOLCONVERTERR
//
// MessageText:
//
// Unable to convert the value "%1!s!" to a Boolean.
//
#define DTS_E_DTPXMLBOOLCONVERTERR       ((HRESULT)0xC0208222L)

////////////////////////////////////////////////////////////////////////////
// something went wrong when loading/setting an object of this ID in the xml file

//
// MessageId: DTS_E_DTPXMLPARSEERRORNEARID
//
// MessageText:
//
// Load error encountered near object with ID %1!d!.
//
#define DTS_E_DTPXMLPARSEERRORNEARID     ((HRESULT)0xC0208223L)

////////////////////////////////////////////////////////////////////////////
// encountered bad property datatype token value when loading xml

//
// MessageId: DTS_E_DTPXMLPROPERTYTYPEERR
//
// MessageText:
//
// The value "%1!s!" is not valid for the attribute "%2!s!".
//
#define DTS_E_DTPXMLPROPERTYTYPEERR      ((HRESULT)0xC0208226L)

////////////////////////////////////////////////////////////////////////////
// encountered bad usagetype token value when loading xml

//
// MessageId: DTS_E_DTPXMLSETUSAGETYPEERR
//
// MessageText:
//
// The value "%1!s!" is not valid for the attribute "%2!s!".
//
#define DTS_E_DTPXMLSETUSAGETYPEERR      ((HRESULT)0xC0208228L)

////////////////////////////////////////////////////////////////////////////
// encountered bad datatype token value when loading xml

//
// MessageId: DTS_E_DTPXMLDATATYPEERR
//
// MessageText:
//
// The value "%1!s!" is not valid for the attribute "%2!s!".
//
#define DTS_E_DTPXMLDATATYPEERR          ((HRESULT)0xC0208229L)

////////////////////////////////////////////////////////////////////////////
// Map it or remove it.

//
// MessageId: DTS_E_UNMAPPEDINPUTCOLUMN
//
// MessageText:
//
// The %1!s! is not mapped to an output column.
//
#define DTS_E_UNMAPPEDINPUTCOLUMN        ((HRESULT)0xC020822AL)

//
// MessageId: DTS_E_INPUTCOLUMNBADMAP
//
// MessageText:
//
// The %1!s! has a mapping that is not valid.  An output column with an ID of %2!ld! does not exist on this component.
//
#define DTS_E_INPUTCOLUMNBADMAP          ((HRESULT)0xC020822BL)

//
// MessageId: DTS_W_UNMAPPEDOUTPUTCOLUMN
//
// MessageText:
//
// The %1!s! has no input column mapped to it.
//
#define DTS_W_UNMAPPEDOUTPUTCOLUMN       ((HRESULT)0xC020822CL)

//
// MessageId: DTS_E_MULTIPLYMAPPEDOUTCOL
//
// MessageText:
//
// The %1!s! is mapped to an output column that already has a mapping on this input.
//
#define DTS_E_MULTIPLYMAPPEDOUTCOL       ((HRESULT)0xC020822DL)

//
// MessageId: DTS_E_TXAGG_STRINGPROMOTIONFAILED
//
// MessageText:
//
// Could not convert input column with Lineage ID %1!ld! to DT_WSTR due to error 0x%2!8.8X!.
//
#define DTS_E_TXAGG_STRINGPROMOTIONFAILED ((HRESULT)0xC020822EL)

////////////////////////////////////////////////////////////////////////////
// Can't find an object id in the layout, bad error when loading paths from the xml

//
// MessageId: DTS_E_DTPXMLIDLOOKUPERR
//
// MessageText:
//
// Referenced object with ID %1!d! not found in package.
//
#define DTS_E_DTPXMLIDLOOKUPERR          ((HRESULT)0xC0208230L)

////////////////////////////////////////////////////////////////////////////
// one of the properties required for the pipelinexml module was not provided by the pipeline, bad internal error

//
// MessageId: DTS_E_DTPXMLINVALIDXMLPERSISTPROPERTY
//
// MessageText:
//
// Cannot read a persistence property required for the pipelinexml module. The property was not provided by the pipeline.
//
#define DTS_E_DTPXMLINVALIDXMLPERSISTPROPERTY ((HRESULT)0xC0208231L)

////////////////////////////////////////////////////////////////////////////
// propertyState attribute of a property node has invalid value

//
// MessageId: DTS_E_DTPXMLPROPERTYSTATEERR
//
// MessageText:
//
// The value "%1!s!" is not valid for the attribute "%2!s!".
//
#define DTS_E_DTPXMLPROPERTYSTATEERR     ((HRESULT)0xC0208232L)

//
// MessageId: DTS_E_CANTGETCUSTOMPROPERTY
//
// MessageText:
//
// Cannot retrieve custom property "%1!s!".
//
#define DTS_E_CANTGETCUSTOMPROPERTY      ((HRESULT)0xC0208233L)

//
// MessageId: DTS_E_UNABLETOLOCATEINPUTCOLUMNID
//
// MessageText:
//
// An input column with the lineage ID %1!d!, referenced in the ParameterMap custom property with the parameter on position number %2!d!, cannot be found in the input columns collection.
//
#define DTS_E_UNABLETOLOCATEINPUTCOLUMNID ((HRESULT)0xC0208234L)

//
// MessageId: DTS_E_TXLOOKUP_UNABLETOLOCATEREFCOLUMN
//
// MessageText:
//
// Unable to locate reference column "%1!s!".
//
#define DTS_E_TXLOOKUP_UNABLETOLOCATEREFCOLUMN ((HRESULT)0xC0208235L)

//
// MessageId: DTS_E_TXLOOKUP_INCOMPATIBLEDATATYPES
//
// MessageText:
//
// %1!s! and reference column named "%2!s!" have incompatible data types.
//
#define DTS_E_TXLOOKUP_INCOMPATIBLEDATATYPES ((HRESULT)0xC0208236L)

//
// MessageId: DTS_E_TXLOOKUP_PARAMMETADATAMISMATCH
//
// MessageText:
//
// The parameterized SQL statement yields metadata which does not match the main SQL statement.
//
#define DTS_E_TXLOOKUP_PARAMMETADATAMISMATCH ((HRESULT)0xC0208237L)

//
// MessageId: DTS_E_TXLOOKUP_INCORRECTNUMOFPARAMETERS
//
// MessageText:
//
// The parameterized SQL statement contains an incorrect number of parameters. Expected %1!d!, but found %2!d!.
//
#define DTS_E_TXLOOKUP_INCORRECTNUMOFPARAMETERS ((HRESULT)0xC0208238L)

//
// MessageId: DTS_E_TXLOOKUP_INVALIDJOINTYPE
//
// MessageText:
//
// %1!s! has a datatype which cannot be joined on.
//
#define DTS_E_TXLOOKUP_INVALIDJOINTYPE   ((HRESULT)0xC0208239L)

//
// MessageId: DTS_E_TXLOOKUP_INVALIDCOPYTYPE
//
// MessageText:
//
// %1!s! has a datatype which cannot be copied.
//
#define DTS_E_TXLOOKUP_INVALIDCOPYTYPE   ((HRESULT)0xC020823AL)

////////////////////////////////////////////////////////////////////////////
// The specified column has a data type that is not supported here.

//
// MessageId: DTS_E_INSERTERINVALIDCOLUMNDATATYPE
//
// MessageText:
//
// The %1!s! has an unsupported datatype. It must be DT_STR or DT_WSTR.
//
#define DTS_E_INSERTERINVALIDCOLUMNDATATYPE ((HRESULT)0xC020823BL)

//
// MessageId: DTS_E_EXTRACTORINVALIDCOLUMNDATATYPE
//
// MessageText:
//
// The %1!s! has an unsupported datatype. It must be DT_STR, DT_WSTR, DT_TEXT, DT_NTEXT, or DT_IMAGE.
//
#define DTS_E_EXTRACTORINVALIDCOLUMNDATATYPE ((HRESULT)0xC020823CL)

//
// MessageId: DTS_E_TXCHARMAPINVALIDCOLUMNDATATYPE
//
// MessageText:
//
// The %1!s! has an unsupported datatype. It must be DT_STR, DT_WSTR, DT_TEXT, or DT_NTEXT.
//
#define DTS_E_TXCHARMAPINVALIDCOLUMNDATATYPE ((HRESULT)0xC020823DL)

////////////////////////////////////////////////////////////////////////////
// Not enough system handles are available to TxSort.

//
// MessageId: DTS_E_SORTCANTCREATEEVENT
//
// MessageText:
//
// The Sort transformation cannot create an event to communicate with its worker threads. Not enough system handles are available to the Sort transformation.
//
#define DTS_E_SORTCANTCREATEEVENT        ((HRESULT)0xC020823EL)

////////////////////////////////////////////////////////////////////////////
// Not enough memory is available to TxSort.

//
// MessageId: DTS_E_SORTCANTCREATETHREAD
//
// MessageText:
//
// The Sort transformation cannot create a worker thread. Not enough memory is available to Sort transformation.
//
#define DTS_E_SORTCANTCREATETHREAD       ((HRESULT)0xC020823FL)

////////////////////////////////////////////////////////////////////////////
// An internal error in TxSort -- comparison should never fail.

//
// MessageId: DTS_E_SORTCANTCOMPARE
//
// MessageText:
//
// The Sort transformation failed to compare row %1!d! in buffer ID %2!d! to row %3!d! in buffer ID %4!d!.
//
#define DTS_E_SORTCANTCOMPARE            ((HRESULT)0xC0208240L)

////////////////////////////////////////////////////////////////////////////
// Check the SQLCommand property, the select statement must yield at least one column.

//
// MessageId: DTS_E_TXLOOKUP_TOOFEWREFERENCECOLUMNS
//
// MessageText:
//
// The Lookup transformation reference metadata contains too few columns. Check the SQLCommand property. The SELECT statement must return at least one column.
//
#define DTS_E_TXLOOKUP_TOOFEWREFERENCECOLUMNS ((HRESULT)0xC0208242L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of ColumnInfo structs

//
// MessageId: DTS_E_TXLOOKUP_MALLOCERR_REFERENCECOLUMNINFO
//
// MessageText:
//
// Unable to allocate memory for an array of ColumnInfo structures.
//
#define DTS_E_TXLOOKUP_MALLOCERR_REFERENCECOLUMNINFO ((HRESULT)0xC0208243L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of ColumnPair structs

//
// MessageId: DTS_E_TXLOOKUP_MALLOCERR_REFERENCECOLUMNPAIR
//
// MessageText:
//
// Could not allocate memory for an array of ColumnPair structures.
//
#define DTS_E_TXLOOKUP_MALLOCERR_REFERENCECOLUMNPAIR ((HRESULT)0xC0208244L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of BUFFCOL structs for creation of main workspace

//
// MessageId: DTS_E_TXLOOKUP_MALLOCERR_BUFFCOL
//
// MessageText:
//
// Unable to allocate memory for an array of BUFFCOL structures for the creation of a main workspace.
//
#define DTS_E_TXLOOKUP_MALLOCERR_BUFFCOL ((HRESULT)0xC0208245L)

////////////////////////////////////////////////////////////////////////////
// Could not create main workspace buffer

//
// MessageId: DTS_E_TXLOOKUP_MAINWORKSPACE_CREATEERR
//
// MessageText:
//
// Unable to create a main workspace buffer.
//
#define DTS_E_TXLOOKUP_MAINWORKSPACE_CREATEERR ((HRESULT)0xC0208246L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for hash table

//
// MessageId: DTS_E_TXLOOKUP_HASHTABLE_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for hash table.
//
#define DTS_E_TXLOOKUP_HASHTABLE_MALLOCERR ((HRESULT)0xC0208247L)

////////////////////////////////////////////////////////////////////////////
// Could not create a heap for hash nodes.

//
// MessageId: DTS_E_TXLOOKUP_HASHNODEHEAP_CREATEERR
//
// MessageText:
//
// Unable to allocate memory to create a heap for hash nodes.
//
#define DTS_E_TXLOOKUP_HASHNODEHEAP_CREATEERR ((HRESULT)0xC0208248L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for hash node heap

//
// MessageId: DTS_E_TXLOOKUP_HASHNODEHEAP_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for a hash node heap.
//
#define DTS_E_TXLOOKUP_HASHNODEHEAP_MALLOCERR ((HRESULT)0xC0208249L)

////////////////////////////////////////////////////////////////////////////
// Could not create a heap for LRU nodes.

//
// MessageId: DTS_E_TXLOOKUP_LRUNODEHEAP_CREATEERR
//
// MessageText:
//
// Unable to create a heap for LRU nodes. An out-of-memory condition occurred.
//
#define DTS_E_TXLOOKUP_LRUNODEHEAP_CREATEERR ((HRESULT)0xC020824AL)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for LRU node heap

//
// MessageId: DTS_E_TXLOOKUP_LRUNODEHEAP_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for the LRU node heap. An out-of-memory condition occurred.
//
#define DTS_E_TXLOOKUP_LRUNODEHEAP_MALLOCERR ((HRESULT)0xC020824BL)

////////////////////////////////////////////////////////////////////////////
// Check SQLCommand and SqlCommandParam properties

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_LOADCOLUMNMETADATA
//
// MessageText:
//
// OLE DB error occurred while loading column metadata. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_LOADCOLUMNMETADATA ((HRESULT)0xC020824CL)

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_GETIROWSET
//
// MessageText:
//
// OLE DB error occurred while fetching rowset. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_GETIROWSET ((HRESULT)0xC020824DL)

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_FILLBUFFER
//
// MessageText:
//
// OLE DB error occurred while populating internal cache. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_FILLBUFFER ((HRESULT)0xC020824EL)

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_BINDPARAMETERS
//
// MessageText:
//
// OLE DB error occurred while binding parameters. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_BINDPARAMETERS ((HRESULT)0xC020824FL)

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_CREATEBINDING
//
// MessageText:
//
// OLE DB error occurred while creating bindings. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_CREATEBINDING ((HRESULT)0xC0208250L)

////////////////////////////////////////////////////////////////////////////
// This is a very bad error, we got an unexpected case in a switch statement

//
// MessageId: DTS_E_TXLOOKUP_INVALID_CASE
//
// MessageText:
//
// An invalid case was encountered in a switch statement during runtime.
//
#define DTS_E_TXLOOKUP_INVALID_CASE      ((HRESULT)0xC0208251L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate new row for main workspace buffer

//
// MessageId: DTS_E_TXLOOKUP_MAINWORKSPACE_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for a new row for the main workspace buffer. An out-of-memory condition occurred.
//
#define DTS_E_TXLOOKUP_MAINWORKSPACE_MALLOCERR ((HRESULT)0xC0208252L)

////////////////////////////////////////////////////////////////////////////
// Check SQLCommand and SqlCommandParam properties

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_GETPARAMIROWSET
//
// MessageText:
//
// OLE DB error occurred while fetching parameterized rowset. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_GETPARAMIROWSET ((HRESULT)0xC0208253L)

//
// MessageId: DTS_E_TXLOOKUP_OLEDBERR_GETPARAMSINGLEROW
//
// MessageText:
//
// OLE DB error occurred while fetching parameterized row. Check SQLCommand and SqlCommandParam properties.
//
#define DTS_E_TXLOOKUP_OLEDBERR_GETPARAMSINGLEROW ((HRESULT)0xC0208254L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate new row for main workspace buffer

//
// MessageId: DTS_E_TXAGG_MAINWORKSPACE_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for a new row for the main workspace buffer. An out-of-memory condition occurred.
//
#define DTS_E_TXAGG_MAINWORKSPACE_MALLOCERR ((HRESULT)0xC0208255L)

////////////////////////////////////////////////////////////////////////////
// Could not create main workspace buffer

//
// MessageId: DTS_E_TXAGG_MAINWORKSPACE_CREATEERR
//
// MessageText:
//
// Unable to create a main workspace buffer.
//
#define DTS_E_TXAGG_MAINWORKSPACE_CREATEERR ((HRESULT)0xC0208256L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for hash table

//
// MessageId: DTS_E_TXAGG_HASHTABLE_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for the hash table.
//
#define DTS_E_TXAGG_HASHTABLE_MALLOCERR  ((HRESULT)0xC0208257L)

////////////////////////////////////////////////////////////////////////////
// Could not create a heap for hash nodes.

//
// MessageId: DTS_E_TXAGG_HASHNODEHEAP_CREATEERR
//
// MessageText:
//
// Unable to allocate memory to create a heap for the hash nodes.
//
#define DTS_E_TXAGG_HASHNODEHEAP_CREATEERR ((HRESULT)0xC0208258L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for hash node heap

//
// MessageId: DTS_E_TXAGG_HASHNODEHEAP_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for the hash node heap.
//
#define DTS_E_TXAGG_HASHNODEHEAP_MALLOCERR ((HRESULT)0xC0208259L)

////////////////////////////////////////////////////////////////////////////
// Could not create a heap for Count Distinct nodes.

//
// MessageId: DTS_E_TXAGG_CDNODEHEAP_CREATEERR
//
// MessageText:
//
// Unable to allocate memory to create a heap for CountDistinct nodes.
//
#define DTS_E_TXAGG_CDNODEHEAP_CREATEERR ((HRESULT)0xC020825AL)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for Count Distinct node heap

//
// MessageId: DTS_E_TXAGG_CDNODEHEAP_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for CountDistinct node heap.
//
#define DTS_E_TXAGG_CDNODEHEAP_MALLOCERR ((HRESULT)0xC020825BL)

////////////////////////////////////////////////////////////////////////////
// Could not create a heap for Count Distinct chains .

//
// MessageId: DTS_E_TXAGG_CDCHAINHEAP_CREATEERR
//
// MessageText:
//
// Unable to allocate memory to create a heap for CountDistinct chains.
//
#define DTS_E_TXAGG_CDCHAINHEAP_CREATEERR ((HRESULT)0xC020825CL)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for count distinct hash table

//
// MessageId: DTS_E_TXAGG_CDHASHTABLE_CREATEERR
//
// MessageText:
//
// Unable to allocate memory for CountDistinct hash table.
//
#define DTS_E_TXAGG_CDHASHTABLE_CREATEERR ((HRESULT)0xC020825DL)

////////////////////////////////////////////////////////////////////////////
// Could not allocate new row for Count Distinct workspace buffer

//
// MessageId: DTS_E_TXAGG_CDWORKSPACE_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for a new row for the CountDistinct workspace buffer.
//
#define DTS_E_TXAGG_CDWORKSPACE_MALLOCERR ((HRESULT)0xC020825EL)

////////////////////////////////////////////////////////////////////////////
// Could not create Count Distinct workspace buffer

//
// MessageId: DTS_E_TXAGG_CDWORKSPACE_CREATEERR
//
// MessageText:
//
// Unable to create a CountDistinct workspace buffer.
//
#define DTS_E_TXAGG_CDWORKSPACE_CREATEERR ((HRESULT)0xC020825FL)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for Count Distinct Collapse array

//
// MessageId: DTS_E_TXAGG_CDCOLLASSEARRAY_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for CountDistinct Collapse array.
//
#define DTS_E_TXAGG_CDCOLLASSEARRAY_MALLOCERR ((HRESULT)0xC0208260L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate memory for Count Distinct chains .

//
// MessageId: DTS_E_TXAGG_CDCHAINHEAP_MALLOCERR
//
// MessageText:
//
// Unable to allocate memory for CountDistinct chains.
//
#define DTS_E_TXAGG_CDCHAINHEAP_MALLOCERR ((HRESULT)0xC0208261L)

////////////////////////////////////////////////////////////////////////////
// The input column mapped to an output column for copymap don't have the same metadata (datatype, precision, scale, length or codepage

//
// MessageId: DTS_E_TXCOPYMAP_MISMATCHED_COLUMN_METADATA
//
// MessageText:
//
// Columns with lineage IDs %1!d! and %2!d! have mismatched metadata. The input column that is mapped to an output column for copymap does not have the same metadata (datatype, precision, scale, length, or codepage).
//
#define DTS_E_TXCOPYMAP_MISMATCHED_COLUMN_METADATA ((HRESULT)0xC0208262L)

////////////////////////////////////////////////////////////////////////////
// The copyColumnID property of the output column is incorrect

//
// MessageId: DTS_E_TXCOPYMAP_INCORRECT_OUTPUT_COLUMN_MAPPING
//
// MessageText:
//
// The output column with lineage ID "%1!d!" is incorrectly mapped to an input column. The CopyColumnId property of the output column is not correct.
//
#define DTS_E_TXCOPYMAP_INCORRECT_OUTPUT_COLUMN_MAPPING ((HRESULT)0xC0208263L)

////////////////////////////////////////////////////////////////////////////
// Error should have been previously reported.]

//
// MessageId: DTS_E_CANTGETBLOBDATA
//
// MessageText:
//
// Failed to retrieve long data for column "%1!s!".
//
#define DTS_E_CANTGETBLOBDATA            ((HRESULT)0xC0208265L)

////////////////////////////////////////////////////////////////////////////
// Error should have been previously reported.

//
// MessageId: DTS_E_CANTADDBLOBDATA
//
// MessageText:
//
// Long data was retrieved for a column but cannot be added to the Data Flow task buffer.
//
#define DTS_E_CANTADDBLOBDATA            ((HRESULT)0xC0208266L)

////////////////////////////////////////////////////////////////////////////
// The package is bad -- the output columns should not be there.

//
// MessageId: DTS_E_MCASTOUTPUTCOLUMNS
//
// MessageText:
//
// Output "%1!s!" (%2!d!) has output columns, but multicast outputs do not declare columns. The package is damaged.
//
#define DTS_E_MCASTOUTPUTCOLUMNS         ((HRESULT)0xC0208267L)

////////////////////////////////////////////////////////////////////////////
// Check to see if the rll file is present

//
// MessageId: DTS_E_UNABLETOGETLOCALIZEDRESOURCE
//
// MessageText:
//
// Unable to load a localized resource ID %1!d!. Verify that the RLL file is present.
//
#define DTS_E_UNABLETOGETLOCALIZEDRESOURCE ((HRESULT)0xC0208273L)

////////////////////////////////////////////////////////////////////////////
// Invalid Events interface passed to the pipelinexml module

//
// MessageId: DTS_E_DTPXMLEVENTSCACHEERR
//
// MessageText:
//
// Cannot acquire Events Interface. An invalid Events interface was passed to the data flow module for persisting to XML.
//
#define DTS_E_DTPXMLEVENTSCACHEERR       ((HRESULT)0xC0208274L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting a path object during xml load

//
// MessageId: DTS_E_DTPXMLPATHLOADERR
//
// MessageText:
//
// An error occurred while setting a path object during XML load.
//
#define DTS_E_DTPXMLPATHLOADERR          ((HRESULT)0xC0208275L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting an input object during xml load

//
// MessageId: DTS_E_DTPXMLINPUTLOADERR
//
// MessageText:
//
// Error setting input object during XML load.
//
#define DTS_E_DTPXMLINPUTLOADERR         ((HRESULT)0xC0208276L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting an output object during xml load

//
// MessageId: DTS_E_DTPXMLOUTPUTLOADERR
//
// MessageText:
//
// Error setting output object during XML load.
//
#define DTS_E_DTPXMLOUTPUTLOADERR        ((HRESULT)0xC0208277L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting an input column object during xml load

//
// MessageId: DTS_E_DTPXMLINPUTCOLUMNLOADERR
//
// MessageText:
//
// Error setting input column object during XML load.
//
#define DTS_E_DTPXMLINPUTCOLUMNLOADERR   ((HRESULT)0xC0208278L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting an output column object during xml load

//
// MessageId: DTS_E_DTPXMLOUTPUTCOLUMNLOADERR
//
// MessageText:
//
// Error setting output column object during XML load.
//
#define DTS_E_DTPXMLOUTPUTCOLUMNLOADERR  ((HRESULT)0xC0208279L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting a property object during xml load

//
// MessageId: DTS_E_DTPXMLPROPERTYLOADERR
//
// MessageText:
//
// Error setting property object during XML load.
//
#define DTS_E_DTPXMLPROPERTYLOADERR      ((HRESULT)0xC0208280L)

////////////////////////////////////////////////////////////////////////////
// Something went wrong when setting a connection object during xml load

//
// MessageId: DTS_E_DTPXMLCONNECTIONLOADERR
//
// MessageText:
//
// Error setting connection object during XML load.
//
#define DTS_E_DTPXMLCONNECTIONLOADERR    ((HRESULT)0xC0208281L)

//
// MessageId: DTS_E_FG_MISSING_OUTPUT_COLUMNS
//
// MessageText:
//
// Special transformation-specific columns are either missing or have incorrect types.
//
#define DTS_E_FG_MISSING_OUTPUT_COLUMNS  ((HRESULT)0xC0208282L)

//
// MessageId: DTS_E_FG_PREPARE_TABLES_AND_ACCESSORS
//
// MessageText:
//
// Fuzzy Grouping transformation failed to create required tables and accessors.
//
#define DTS_E_FG_PREPARE_TABLES_AND_ACCESSORS ((HRESULT)0xC0208283L)

//
// MessageId: DTS_E_FG_COPY_INPUT
//
// MessageText:
//
// Fuzzy Grouping transformation failed to copy input.
//
#define DTS_E_FG_COPY_INPUT              ((HRESULT)0xC0208284L)

//
// MessageId: DTS_E_FG_GENERATE_GROUPS
//
// MessageText:
//
// Fuzzy Grouping transformation failed to generate groups.
//
#define DTS_E_FG_GENERATE_GROUPS         ((HRESULT)0xC0208285L)

//
// MessageId: DTS_E_FG_LEADING_TRAILING
//
// MessageText:
//
// An unexpected error occurred in Fuzzy Grouping when applying the settings of property '%1!s!'.
//
#define DTS_E_FG_LEADING_TRAILING        ((HRESULT)0xC0208286L)

//
// MessageId: DTS_E_FG_PICK_CANONICAL
//
// MessageText:
//
// The Fuzzy Grouping transformation failed to pick a canonical row of data to use in standardizing the data.
//
#define DTS_E_FG_PICK_CANONICAL          ((HRESULT)0xC0208287L)

//
// MessageId: DTS_E_FG_NOBLOBS
//
// MessageText:
//
// Fuzzy Grouping does not support input columns of type IMAGE, TEXT, or NTEXT.
//
#define DTS_E_FG_NOBLOBS                 ((HRESULT)0xC0208288L)

//
// MessageId: DTS_E_FG_FUZZY_MATCH_ON_NONSTRING
//
// MessageText:
//
// A fuzzy match is specified on column "%1!s!" (%2!d!) that is not a data type of DT_STR or DT_WSTR.
//
#define DTS_E_FG_FUZZY_MATCH_ON_NONSTRING ((HRESULT)0xC0208289L)

//
// MessageId: DTS_E_FUZZYGROUPINGINTERNALPIPELINEERROR
//
// MessageText:
//
// A Fuzzy Grouping transformation pipeline error occurred and returned error code 0x%1!8.8X!: "%2!s!".
//
#define DTS_E_FUZZYGROUPINGINTERNALPIPELINEERROR ((HRESULT)0xC020828AL)

////////////////////////////////////////////////////////////////////////////
// Generally, this arises because we need to persist DT_STR data to SQL and there is no easy way to map the given codepage to a SQL Collation

//
// MessageId: DTS_E_CODE_PAGE_NOT_SUPPORTED
//
// MessageText:
//
// The code page %1!d! specified on column "%2!s!" (%3!d!) is not supported.  You must first convert this column to DT_WSTR which can be done by inserting a Data Conversion Transform before this one.
//
#define DTS_E_CODE_PAGE_NOT_SUPPORTED    ((HRESULT)0xC020828BL)

//
// MessageId: DTS_E_SETEODFAILED
//
// MessageText:
//
// Failure encountered while setting end of data flag for the buffer driving output "%1!s!" (%2!d!).
//
#define DTS_E_SETEODFAILED               ((HRESULT)0xC0208294L)

////////////////////////////////////////////////////////////////////////////
// Out of memory or internal error. Internal error should have been previously reported.

//
// MessageId: DTS_E_CANTCLONE
//
// MessageText:
//
// The input buffer could not be cloned. An out-of-memory condition occurred or there was an internal error.
//
#define DTS_E_CANTCLONE                  ((HRESULT)0xC0208296L)

//
// MessageId: DTS_E_TXCHARMAP_CANTKATAKANAHIRAGANA
//
// MessageText:
//
// Column "%1!s!" requests that Katakana and Hiragana characters be produced at the same time.
//
#define DTS_E_TXCHARMAP_CANTKATAKANAHIRAGANA ((HRESULT)0xC02082F9L)

//
// MessageId: DTS_E_TXCHARMAP_CANTSIMPLECOMPLEX
//
// MessageText:
//
// Column "%1!s!" requests that Simple Chinese and Traditional Chinese characters be produced at the same time.
//
#define DTS_E_TXCHARMAP_CANTSIMPLECOMPLEX ((HRESULT)0xC02082FAL)

//
// MessageId: DTS_E_TXCHARMAP_CANTFULLHALF
//
// MessageText:
//
// Column "%1!s!" requests operations to generate both full width and half width characters.
//
#define DTS_E_TXCHARMAP_CANTFULLHALF     ((HRESULT)0xC02082FBL)

//
// MessageId: DTS_E_TXCHARMAP_CANTCHINAJAPAN
//
// MessageText:
//
// Column "%1!s!" combines operations on Japanese characters with operations for Chinese characters.
//
#define DTS_E_TXCHARMAP_CANTCHINAJAPAN   ((HRESULT)0xC02082FCL)

//
// MessageId: DTS_E_TXCHARMAP_CANTCASECHINESE
//
// MessageText:
//
// Column "%1!s!" combines operations on Chinese characters with uppercase and lowercase operations.
//
#define DTS_E_TXCHARMAP_CANTCASECHINESE  ((HRESULT)0xC02082FDL)

//
// MessageId: DTS_E_TXCHARMAP_CANTCASEJAPANESE
//
// MessageText:
//
// Column "%1!s!" combines operations on Japanese characters with uppercase and lowercase operations.
//
#define DTS_E_TXCHARMAP_CANTCASEJAPANESE ((HRESULT)0xC02082FEL)

//
// MessageId: DTS_E_TXCHARMAP_CANTBOTHCASE
//
// MessageText:
//
// Column "%1!s!" maps the column to both uppercase and lowercase.
//
#define DTS_E_TXCHARMAP_CANTBOTHCASE     ((HRESULT)0xC02082FFL)

//
// MessageId: DTS_E_TXCHARMAP_CANTLINGUISTIC
//
// MessageText:
//
// Column "%1!s!" combines flags other than uppercase and lowercase with the linguistic casing operation.
//
#define DTS_E_TXCHARMAP_CANTLINGUISTIC   ((HRESULT)0xC0208300L)

//
// MessageId: DTS_E_TXCHARMAP_INVALIDMAPFLAGANDDATATYPE
//
// MessageText:
//
// The data type of column "%1!s!" cannot be mapped as specified.
//
#define DTS_E_TXCHARMAP_INVALIDMAPFLAGANDDATATYPE ((HRESULT)0xC0208301L)

////////////////////////////////////////////////////////////////////////////
// Happens if the version persisted in the index metadata does not match that which the current code was built for.  Fix by rebuilding the index with the current version of the code.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_UNSUPPORTED_MATCH_INDEX_VERSION
//
// MessageText:
//
// The version (%1!s!) of the pre-existing match index "%2!s!" is not supported. The version expected is "%3!s!". This error occurs if the version persisted in the index metadata does not match the version which the current code was built for. Fix the error by rebuilding the index with the current version of the code.
//
#define DTS_E_TXFUZZYLOOKUP_UNSUPPORTED_MATCH_INDEX_VERSION ((HRESULT)0xC0208302L)

////////////////////////////////////////////////////////////////////////////
// Happens if we can't load the metadata record from the specified pre-built index

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INVALID_MATCH_INDEX
//
// MessageText:
//
// The table "%1!s!" does not appear to be a valid pre-built match index. This error occurs if the metadata record cannot be loaded from the specified pre-built index.
//
#define DTS_E_TXFUZZYLOOKUP_INVALID_MATCH_INDEX ((HRESULT)0xC0208303L)

////////////////////////////////////////////////////////////////////////////
// Happens if there is a failure when loading the index metadata via OLEDB

//
// MessageId: DTS_E_TXFUZZYLOOKUP_UNABLE_TO_READ_MATCH_INDEX
//
// MessageText:
//
// Unable to read specified pre-built match index "%1!s!".  OLEDB Error code: 0x%2!8.8X!.
//
#define DTS_E_TXFUZZYLOOKUP_UNABLE_TO_READ_MATCH_INDEX ((HRESULT)0xC0208304L)

////////////////////////////////////////////////////////////////////////////
// There were no input columns with valid joins to reference table columns.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_NO_JOIN_COLUMNS
//
// MessageText:
//
// There were no input columns with a valid join to a reference table column.  Make sure that there is at least one join defined using the input column properties JoinToReferenceColumn and JoinType.
//
#define DTS_E_TXFUZZYLOOKUP_NO_JOIN_COLUMNS ((HRESULT)0xC0208305L)

////////////////////////////////////////////////////////////////////////////
// Happens when the index was built with the column not being a fuzzy join column

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INDEX_DOES_NOT_CONTAIN_COLUMN
//
// MessageText:
//
// The specified pre-existing match index "%1!s!" was not originally built with fuzzy match information for column "%2!s!".  It must be rebuilt to include this information. This error occurs when the index was built with the column not being a fuzzy join column.
//
#define DTS_E_TXFUZZYLOOKUP_INDEX_DOES_NOT_CONTAIN_COLUMN ((HRESULT)0xC0208306L)

////////////////////////////////////////////////////////////////////////////
// Happens if the name for the property does not conform to the specs for a valid SQL identifier name

//
// MessageId: DTS_E_TXFUZZYLOOKUP_IDENTIFIER_PROPERTY
//
// MessageText:
//
// The name "%1!s!" given for property "%2!s!" is not a valid SQL identifier name. This error occurs if the name for the property does not conform to the specifications for a valid SQL identifier name.
//
#define DTS_E_TXFUZZYLOOKUP_IDENTIFIER_PROPERTY ((HRESULT)0xC0208307L)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_MINSIMILARITY_INVALID
//
// MessageText:
//
// The MinSimilarity threshold property on the Fuzzy Lookup transformation must be a value greater than or equal to 0.0 but less than 1.0.
//
#define DTS_E_TXFUZZYLOOKUP_MINSIMILARITY_INVALID ((HRESULT)0xC0208309L)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INVALID_PROPERTY_VALUE
//
// MessageText:
//
// The value "%1!s!" for property "%2!s!" is not valid.
//
#define DTS_E_TXFUZZYLOOKUP_INVALID_PROPERTY_VALUE ((HRESULT)0xC020830AL)

////////////////////////////////////////////////////////////////////////////
// Happens because we can only support fuzzy join between string columns

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_FUZZY_JOIN_DATATYPES
//
// MessageText:
//
// The fuzzy lookup specified between input column "%1!s!" and reference column "%2!s!" is not valid because fuzzy joins are only supported between string columns, types DT_STR and DT_WSTR.
//
#define DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_FUZZY_JOIN_DATATYPES ((HRESULT)0xC020830BL)

////////////////////////////////////////////////////////////////////////////
// Happens because we can only support exact join between columns with equal data types or a DT_STR/DT_WSTR combination

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_EXACT_JOIN_DATATYPES
//
// MessageText:
//
// The exact lookup columns, "%1!s!" and "%2!s!", do not have equal data types or are not comparable string types. Exact joins are supported between columns with equal data types or a DT_STR and DT_WSTR combination.
//
#define DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_EXACT_JOIN_DATATYPES ((HRESULT)0xC020830CL)

////////////////////////////////////////////////////////////////////////////
// Happens because we can only support copying from ref to output between columns with equal data types or a DT_STR/DT_WSTR combination

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_COPYCOLUMN_DATATYPES
//
// MessageText:
//
// The copy columns, "%1!s!" and "%2!s!", do not have equal data types or are not trivially convertible string types. This occurs because copying from reference to output between columns with equal data types, or a DT_STR and DT_WSTR combination, is supported, but other types are not.
//
#define DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_COPYCOLUMN_DATATYPES ((HRESULT)0xC020830DL)

////////////////////////////////////////////////////////////////////////////
// Happens because we can only support passthru from input to output between columns with equal data types

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_PASSTHRUCOLUMN_DATATYPES
//
// MessageText:
//
// The passthrough columns, "%1!s!" and "%2!s!", do not have equal data types. Only columns with equal data types are supported as passthrough columns from input to output.
//
#define DTS_E_TXFUZZYLOOKUP_INCOMPATIBLE_PASSTHRUCOLUMN_DATATYPES ((HRESULT)0xC020830EL)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_UNABLETOLOCATEREFCOLUMN
//
// MessageText:
//
// Cannot locate reference column "%1!s!".
//
#define DTS_E_TXFUZZYLOOKUP_UNABLETOLOCATEREFCOLUMN ((HRESULT)0xC020830FL)

////////////////////////////////////////////////////////////////////////////
// Happens when neither or both CopyColumn and PassThruColumn are set to non empty values

//
// MessageId: DTS_E_TXFUZZYLOOKUP_OUTPUT_COLUMN_MUST_BE_PASSTHRU_COLUMN_OR_A_COPY_COLUMN
//
// MessageText:
//
// An output column must have exactly one CopyColumn or PassThruColumn property specified. This error occurs when neither the CopyColumn or the PassThruColumn properties, or both the CopyColumn and PassThruColumn properties, are set to non-empty values.
//
#define DTS_E_TXFUZZYLOOKUP_OUTPUT_COLUMN_MUST_BE_PASSTHRU_COLUMN_OR_A_COPY_COLUMN ((HRESULT)0xC0208311L)

////////////////////////////////////////////////////////////////////////////
// Happens when the input column id specified on an output column as a passthru column is not found in the set of inputs

//
// MessageId: DTS_E_TXFUZZYLOOKUP_PASSTHRU_COLUMN_NOT_FOUND
//
// MessageText:
//
// The source lineage id '%1!d!' specified for property '%2!s!' on output column '%3!s!' was not found in the input column collection. This occurs when the input column id specified on an output column as a passthrough column is not found in the set of inputs.
//
#define DTS_E_TXFUZZYLOOKUP_PASSTHRU_COLUMN_NOT_FOUND ((HRESULT)0xC0208312L)

////////////////////////////////////////////////////////////////////////////
// Happens if the schema/query of the reference table has changed since the pre-existing match index was built.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INDEXED_COLUMN_NOT_FOUND_IN_REF_TABLE
//
// MessageText:
//
// The column "%1!s!" in the pre-built index "%2!s!" was not found in the reference table/query. This happens if the schema/query of the reference table has changed since the pre-existing match index was built.
//
#define DTS_E_TXFUZZYLOOKUP_INDEXED_COLUMN_NOT_FOUND_IN_REF_TABLE ((HRESULT)0xC0208313L)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_TOKEN_TOO_LONG
//
// MessageText:
//
// The component encountered a token that was larger than 2147483647 characters.
//
#define DTS_E_TXFUZZYLOOKUP_TOKEN_TOO_LONG ((HRESULT)0xC0208314L)

////////////////////////////////////////////////////////////////////////////
// The metadata for the named column doesn't match on datatype.

//
// MessageId: DTS_E_RAWMETADATAMISMATCHTYPE
//
// MessageText:
//
// The output file cannot be appended. Column "%1!s!" matches by name, but the column in the file has type %2!s! and the input column has type %3!s!. The metadata for the column does not match on data type.
//
#define DTS_E_RAWMETADATAMISMATCHTYPE    ((HRESULT)0xC0208315L)

////////////////////////////////////////////////////////////////////////////
// The metadata for the named column doesn't match in length.

//
// MessageId: DTS_E_RAWMETADATAMISMATCHSIZE
//
// MessageText:
//
// The output file cannot be appended. Column "%1!s!" matches by name, but the column in the file has maximum length %2!d! and the input column has maximum length %3!d!. The metadata for the column does not match in length.
//
#define DTS_E_RAWMETADATAMISMATCHSIZE    ((HRESULT)0xC0208316L)

////////////////////////////////////////////////////////////////////////////
// The metadata for the named column doesn't match on code page.

//
// MessageId: DTS_E_RAWMETADATAMISMATCHCODEPAGE
//
// MessageText:
//
// The output file cannot be appended. Column "%1!s!" matches by name, but the column in the file has code page %2!d! and the input column has code page %3!d!. The metadata for the named column does not match on code page.
//
#define DTS_E_RAWMETADATAMISMATCHCODEPAGE ((HRESULT)0xC0208317L)

////////////////////////////////////////////////////////////////////////////
// The metadata for the named column doesn't match on precision.

//
// MessageId: DTS_E_RAWMETADATAMISMATCHPRECISION
//
// MessageText:
//
// The output file cannot be appended. Column "%1!s!" matches by name, but the column in the file has precision %2!d! and the input column has precision %3!d!. The metadata for the named column does not match on precision.
//
#define DTS_E_RAWMETADATAMISMATCHPRECISION ((HRESULT)0xC0208318L)

////////////////////////////////////////////////////////////////////////////
// The metadata for the named column doesn't match on scale.

//
// MessageId: DTS_E_RAWMETADATAMISMATCHSCALE
//
// MessageText:
//
// The output file cannot be appended. Column "%1!s!" matches by name, but the column in the file has scale %2!d! and the input column has scale %3!d!.  The metadata for the named column does not match on scale.
//
#define DTS_E_RAWMETADATAMISMATCHSCALE   ((HRESULT)0xC0208319L)

////////////////////////////////////////////////////////////////////////////
// Happens if IDBProperties on the connection didn't give us back the information we needed to verify the DBMS name & version.

//
// MessageId: DTS_E_COULD_NOT_DETERMINE_DATASOURCE_DBMSNAME
//
// MessageText:
//
// Unable to determine the DBMS name and version on "%1!s!". This occurs if the IDBProperties on the connection did not return information needed to verify the DBMS name and version.
//
#define DTS_E_COULD_NOT_DETERMINE_DATASOURCE_DBMSNAME ((HRESULT)0xC020831AL)

////////////////////////////////////////////////////////////////////////////
// Happens if IDBProperties on the connection didn't return a the correct SQL version.

//
// MessageId: DTS_E_INCORRECT_SQL_SERVER_VERSION
//
// MessageText:
//
// The DBMS type or version of "%1!s!" is not supported.  A connection to Microsoft SQL Server version 8.0 or later is required. This occurs if IDBProperties on the connection did not return a the correct version.
//
#define DTS_E_INCORRECT_SQL_SERVER_VERSION ((HRESULT)0xC020831BL)

//
// MessageId: DTS_E_CANTDELETEERRORCOLUMNS
//
// MessageText:
//
// The %1!s! is a special error output column and cannot be deleted.
//
#define DTS_E_CANTDELETEERRORCOLUMNS     ((HRESULT)0xC020831DL)

////////////////////////////////////////////////////////////////////////////
// Unexpected column datatype.  There is likely another custom property on the column that is fixing the type to be a certain expected type.

//
// MessageId: DTS_E_UNEXPECTEDCOLUMNDATATYPE
//
// MessageText:
//
// The data type specified for column "%1!s!" is not the expected type "%2!s!".
//
#define DTS_E_UNEXPECTEDCOLUMNDATATYPE   ((HRESULT)0xC020831EL)

////////////////////////////////////////////////////////////////////////////
// The referenced input column was not found in the input column collection.

//
// MessageId: DTS_E_INPUTCOLUMNNOTFOUND
//
// MessageText:
//
// The input column lineage ID "%1!s!" referenced by property "%2!s!" on output column "%3!s!" could not be located in the input column collection.
//
#define DTS_E_INPUTCOLUMNNOTFOUND        ((HRESULT)0xC020831FL)

////////////////////////////////////////////////////////////////////////////
// The input column referenced by the output column is not a join column.

//
// MessageId: DTS_E_TXGROUPDUPS_INPUTCOLUMNNOTJOINED
//
// MessageText:
//
// The input column "%1!s!" referenced by the "%2!s!" property on output column "%3!s!" must have property ToBeCleaned=True and have a valid ExactFuzzy property value.
//
#define DTS_E_TXGROUPDUPS_INPUTCOLUMNNOTJOINED ((HRESULT)0xC0208320L)

////////////////////////////////////////////////////////////////////////////
// If CopyRefTable is false, the Reference Table must have a clustered index on an integer identity column.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_REF_TABLE_MISSING_IDENTITY_INDEX
//
// MessageText:
//
// The reference table '%1!s!' does not have a clustered index on an integer identity column, which is required if the property 'CopyRefTable' is set to FALSE. If CopyRefTable is false, the reference table must have a clustered index on an integer identity column.
//
#define DTS_E_TXFUZZYLOOKUP_REF_TABLE_MISSING_IDENTITY_INDEX ((HRESULT)0xC0208322L)

////////////////////////////////////////////////////////////////////////////
// Happens because when we make a copy of the reference table we need to add our own integer identity column to it - and only one identity column is allowed per table.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_REF_CONTAINS_NON_INTEGER_IDENT_COLUMN
//
// MessageText:
//
// The reference table '%1!s!' contains a non-integer type identity column which is not supported. Use a view of the table without the column '%2!s!'.  This error occurs  because when a copy is made of the reference table, an integer identity column is added, and only one identity column is allowed per table.
//
#define DTS_E_TXFUZZYLOOKUP_REF_CONTAINS_NON_INTEGER_IDENT_COLUMN ((HRESULT)0xC0208323L)

////////////////////////////////////////////////////////////////////////////
// Not allowed because they are both weighing factors for score

//
// MessageId: DTS_E_TXFUZZY_MATCHCONTRIBUTION_AND_HIERARCHY_SPECIFIED
//
// MessageText:
//
// Both MatchContribution and hierarchy information cannot be specified at the same time. This is not allowed because these properties are both weighing factors for scoring.
//
#define DTS_E_TXFUZZY_MATCHCONTRIBUTION_AND_HIERARCHY_SPECIFIED ((HRESULT)0xC0208324L)

////////////////////////////////////////////////////////////////////////////
// Overlaps and gaps are not allowed for simplicity.

//
// MessageId: DTS_E_TXFUZZY_HIERARCHY_INCORRECT
//
// MessageText:
//
// Levels in hierarchy should be unique numbers . Valid  level in hierarchy values are integers greater than or equal to 1. The smaller the number is, the lower the column is in the hierarchy. The default value is 0, indicating that the column is not part of a hierarchy. Overlaps and gaps are not allowed.
//
#define DTS_E_TXFUZZY_HIERARCHY_INCORRECT ((HRESULT)0xC0208325L)

////////////////////////////////////////////////////////////////////////////
// There must be at least one fuzzy join column defined.

//
// MessageId: DTS_E_TXFUZZYGROUPING_INSUFFICIENT_FUZZY_JOIN_COLUMNS
//
// MessageText:
//
// No columns to fuzzy group on were defined.  There must be at least one input column with column properties ToBeCleaned=true and ExactFuzzy=2.
//
#define DTS_E_TXFUZZYGROUPING_INSUFFICIENT_FUZZY_JOIN_COLUMNS ((HRESULT)0xC0208326L)

////////////////////////////////////////////////////////////////////////////
// pColumn->IsValid returned false

//
// MessageId: DTS_E_TXFUZZYLOOKUP_COLUMNINVALID
//
// MessageText:
//
// The column with ID '%1!d!' was not valid for an undetermined reason.
//
#define DTS_E_TXFUZZYLOOKUP_COLUMNINVALID ((HRESULT)0xC0208329L)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_UNSUPPORTEDDATATYPE
//
// MessageText:
//
// The data type of column '%1!s!' is not supported.
//
#define DTS_E_TXFUZZYLOOKUP_UNSUPPORTEDDATATYPE ((HRESULT)0xC020832AL)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_OUTPUTLENGTHMISMATCH
//
// MessageText:
//
// The length of output column '%1!s!' is less than that of its source column '%2!s!'.
//
#define DTS_E_TXFUZZYLOOKUP_OUTPUTLENGTHMISMATCH ((HRESULT)0xC020832CL)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTEXACTNUMBEROFINPUTCOLUMNS
//
// MessageText:
//
// There should be only one input column.
//
#define DTS_E_TERMEXTRACTION_INCORRECTEXACTNUMBEROFINPUTCOLUMNS ((HRESULT)0xC020832FL)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTEXACTNUMBEROFOUTPUTCOLUMNS
//
// MessageText:
//
// There should be exactly two output columns.
//
#define DTS_E_TERMEXTRACTION_INCORRECTEXACTNUMBEROFOUTPUTCOLUMNS ((HRESULT)0xC0208330L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFINPUTCOLUMN
//
// MessageText:
//
// The input column can only have DT_WSTR or DT_NTEXT as its data type.
//
#define DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFINPUTCOLUMN ((HRESULT)0xC0208331L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFOUTPUTCOLUMN
//
// MessageText:
//
// The output column [%1!d!] can only have '%2!s!' as its data type.
//
#define DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFOUTPUTCOLUMN ((HRESULT)0xC0208332L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFREFERENCECOLUMN
//
// MessageText:
//
// The reference column can only have DT_STR or DT_WSTR as its data type.
//
#define DTS_E_TERMEXTRACTION_INCORRECTDATATYPEOFREFERENCECOLUMN ((HRESULT)0xC0208333L)

//
// MessageId: DTS_E_TERMEXTRACTION_UNABLETOLOCATEREFCOLUMN
//
// MessageText:
//
// An error occurred while locating the reference column '%1!s!'.
//
#define DTS_E_TERMEXTRACTION_UNABLETOLOCATEREFCOLUMN ((HRESULT)0xC0208334L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTTERMTYPE
//
// MessageText:
//
// The Term Type of the transformation can only be WordOnly, PhraseOnly or WordPhrase.
//
#define DTS_E_TERMEXTRACTION_INCORRECTTERMTYPE ((HRESULT)0xC0208335L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTFREQUENCYTHRESHOLD
//
// MessageText:
//
// The value of Frequency Threshold should not be lower than '%1!d!'.
//
#define DTS_E_TERMEXTRACTION_INCORRECTFREQUENCYTHRESHOLD ((HRESULT)0xC0208336L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTMAXLENOFTERM
//
// MessageText:
//
// The value of Max Length of Term should not be lower than '%1!d!'.
//
#define DTS_E_TERMEXTRACTION_INCORRECTMAXLENOFTERM ((HRESULT)0xC0208337L)

//
// MessageId: DTS_E_TERMEXTRACTION_TOOFEWREFERENCECOLUMNS
//
// MessageText:
//
// Term Extraction reference metadata contains too few columns.
//
#define DTS_E_TERMEXTRACTION_TOOFEWREFERENCECOLUMNS ((HRESULT)0xC0208338L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of ColumnInfo structs

//
// MessageId: DTS_E_TERMEXTRACTION_MALLOCERR_REFERENCECOLUMNINFO
//
// MessageText:
//
// An error occurred while allocating memory.
//
#define DTS_E_TERMEXTRACTION_MALLOCERR_REFERENCECOLUMNINFO ((HRESULT)0xC0208339L)

////////////////////////////////////////////////////////////////////////////
// Could not create main workspace buffer

//
// MessageId: DTS_E_TERMEXTRACTION_MAINWORKSPACE_CREATEERR
//
// MessageText:
//
// An error occurred while creating a workspace buffer.
//
#define DTS_E_TERMEXTRACTION_MAINWORKSPACE_CREATEERR ((HRESULT)0xC020833AL)

//
// MessageId: DTS_E_TERMEXTRACTION_OLEDBERR_CREATEBINDING
//
// MessageText:
//
// An OLEDB error occurred while creating bindings.
//
#define DTS_E_TERMEXTRACTION_OLEDBERR_CREATEBINDING ((HRESULT)0xC020833BL)

//
// MessageId: DTS_E_TERMEXTRACTION_OLEDBERR_GETIROWSET
//
// MessageText:
//
// An OLEDB error occurred while fetching rowsets.
//
#define DTS_E_TERMEXTRACTION_OLEDBERR_GETIROWSET ((HRESULT)0xC020833CL)

//
// MessageId: DTS_E_TERMEXTRACTION_OLEDBERR_FILLBUFFER
//
// MessageText:
//
// An OLEDB error occurred while populating internal cache.
//
#define DTS_E_TERMEXTRACTION_OLEDBERR_FILLBUFFER ((HRESULT)0xC020833DL)

//
// MessageId: DTS_E_TERMEXTRACTION_PROCESSERR
//
// MessageText:
//
// An error occurred while extracting terms on row %1!ld!, column %2!ld!. The error code returned was 0x%3!8.8X!. Please remove it from the input as a work-around.
//
#define DTS_E_TERMEXTRACTION_PROCESSERR  ((HRESULT)0xC020833EL)

//
// MessageId: DTS_E_TERMEXTRACTIONORLOOKUP_PROCESSERR_DEPOSITFULL
//
// MessageText:
//
// The number of the term candidates exceeds its limit, 4G.
//
#define DTS_E_TERMEXTRACTIONORLOOKUP_PROCESSERR_DEPOSITFULL ((HRESULT)0xC020833FL)

//
// MessageId: DTS_E_TERMEXTRACTION_INVALIDOUTTERMTABLEORCOLUMN
//
// MessageText:
//
// The reference table, view, or column that is used for Exclusion Terms is not valid.
//
#define DTS_E_TERMEXTRACTION_INVALIDOUTTERMTABLEORCOLUMN ((HRESULT)0xC0208340L)

////////////////////////////////////////////////////////////////////////////
// A conversion from DT_STR to DT_WSTR is required and so DT_STR column must not be longer that 4000 characters.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_STRINGCOLUMNTOOLONG
//
// MessageText:
//
// The length of string column '%1!s!' exceeds 4000 characters.  A conversion from DT_STR to DT_WSTR is necessary, so a truncation would occur.  Either reduce the column width or use only DT_WSTR column types.
//
#define DTS_E_TXFUZZYLOOKUP_STRINGCOLUMNTOOLONG ((HRESULT)0xC0208341L)

//
// MessageId: DTS_E_TERMEXTRACTION_OUTTERMTABLEANDCOLUMNNOTSET
//
// MessageText:
//
// The reference table, view, or column to be used for an Exclusion Terms has not been set.
//
#define DTS_E_TERMEXTRACTION_OUTTERMTABLEANDCOLUMNNOTSET ((HRESULT)0xC0208342L)

//
// MessageId: DTS_E_TERMLOOKUP_TOOFEWOUTPUTCOLUMNS
//
// MessageText:
//
// Term Lookup contains too few output columns.
//
#define DTS_E_TERMLOOKUP_TOOFEWOUTPUTCOLUMNS ((HRESULT)0xC0208343L)

//
// MessageId: DTS_E_TERMLOOKUP_INCORRECTDATATYPEOFREFERENCECOLUMN
//
// MessageText:
//
// The reference column can only have DT_STR or DT_WSTR as its data type.
//
#define DTS_E_TERMLOOKUP_INCORRECTDATATYPEOFREFERENCECOLUMN ((HRESULT)0xC0208344L)

//
// MessageId: DTS_E_TERMLOOKUP_UNABLETOLOCATEREFCOLUMN
//
// MessageText:
//
// An error occurred while locating the reference column '%1!s!'.
//
#define DTS_E_TERMLOOKUP_UNABLETOLOCATEREFCOLUMN ((HRESULT)0xC0208345L)

//
// MessageId: DTS_E_TERMLOOKUP_TOOFEWREFERENCECOLUMNS
//
// MessageText:
//
// Term Lookup reference metadata contains too few columns.
//
#define DTS_E_TERMLOOKUP_TOOFEWREFERENCECOLUMNS ((HRESULT)0xC0208346L)

//
// MessageId: DTS_E_TERMEXTRACTIONORLOOKUP_TESTOFFSETERROR
//
// MessageText:
//
// An error occurred while normalizing words.
//
#define DTS_E_TERMEXTRACTIONORLOOKUP_TESTOFFSETERROR ((HRESULT)0xC0208347L)

////////////////////////////////////////////////////////////////////////////
// Could not create main workspace buffer

//
// MessageId: DTS_E_TERMLOOKUP_MAINWORKSPACE_CREATEERR
//
// MessageText:
//
// An error occurred while creating a workspace buffer.
//
#define DTS_E_TERMLOOKUP_MAINWORKSPACE_CREATEERR ((HRESULT)0xC0208348L)

//
// MessageId: DTS_E_TERMLOOKUP_OLEDBERR_CREATEBINDING
//
// MessageText:
//
// An OLEDB error occurred while creating bindings.
//
#define DTS_E_TERMLOOKUP_OLEDBERR_CREATEBINDING ((HRESULT)0xC0208349L)

//
// MessageId: DTS_E_TERMLOOKUP_OLEDBERR_GETIROWSET
//
// MessageText:
//
// An OLEDB error occurred while fetching rowsets.
//
#define DTS_E_TERMLOOKUP_OLEDBERR_GETIROWSET ((HRESULT)0xC020834AL)

//
// MessageId: DTS_E_TERMLOOKUP_OLEDBERR_FILLBUFFER
//
// MessageText:
//
// An OLEDB error occurred while populating internal cache.
//
#define DTS_E_TERMLOOKUP_OLEDBERR_FILLBUFFER ((HRESULT)0xC020834BL)

//
// MessageId: DTS_E_TERMLOOKUP_PROCESSERR
//
// MessageText:
//
// An error occurred while looking up terms on row %1!ld!, column %2!ld!. The error code returned was 0x%3!8.8X!. Please remove it from the input as a work-around.
//
#define DTS_E_TERMLOOKUP_PROCESSERR      ((HRESULT)0xC020834CL)

//
// MessageId: DTS_E_TERMLOOKUP_TEXTIDINPUTCOLUMNNOTMAPPEDWITHOUTPUTCOLUMN
//
// MessageText:
//
// At least one Passthrough column is not mapped to an output column.
//
#define DTS_E_TERMLOOKUP_TEXTIDINPUTCOLUMNNOTMAPPEDWITHOUTPUTCOLUMN ((HRESULT)0xC020834DL)

//
// MessageId: DTS_E_TERMLOOKUP_INCORRECTEXACTNUMBEROFTEXTCOLUMNS
//
// MessageText:
//
// There should be exactly one input column mapped to one reference column.
//
#define DTS_E_TERMLOOKUP_INCORRECTEXACTNUMBEROFTEXTCOLUMNS ((HRESULT)0xC020834EL)

//
// MessageId: DTS_E_TERMLOOKUP_TEXTINPUTCOLUMNHAVEINCORRECTDATATYPE
//
// MessageText:
//
// The input column mapped to a reference column can only have DT_NTXT or DT_WSTR as its data type.
//
#define DTS_E_TERMLOOKUP_TEXTINPUTCOLUMNHAVEINCORRECTDATATYPE ((HRESULT)0xC020834FL)

////////////////////////////////////////////////////////////////////////////
// Happens if we can't parse the table name from the input string.  There may be unquoted spaces in the name.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_INVALID_MATCH_INDEX_NAME
//
// MessageText:
//
// The reference table name "%1!s!" is not a valid SQL identifier. This error occurs if the table name cannot be parsed from the input string. There may be unquoted spaces in the name. Verify that the name is correctly quoted.
//
#define DTS_E_TXFUZZYLOOKUP_INVALID_MATCH_INDEX_NAME ((HRESULT)0xC0208354L)

//
// MessageId: DTS_E_TERMEXTRACTION_TERMFILTERSTARTITERATIONERROR
//
// MessageText:
//
// An error occurred while the Term Filter was starting its iteration.
//
#define DTS_E_TERMEXTRACTION_TERMFILTERSTARTITERATIONERROR ((HRESULT)0xC0208355L)

//
// MessageId: DTS_E_TERMEXTRACTION_EMPTYTERMRESULTERROR
//
// MessageText:
//
// An error occurred while reclaiming the buffer used for caching terms. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_EMPTYTERMRESULTERROR ((HRESULT)0xC0208356L)

//
// MessageId: DTS_E_TERMEXTRACTION_STDLENGTHERROR
//
// MessageText:
//
// An std::length_error occurred from the STL containers.
//
#define DTS_E_TERMEXTRACTION_STDLENGTHERROR ((HRESULT)0xC0208357L)

//
// MessageId: DTS_E_TERMLOOKUP_SAVEWORDWITHPUNCTERROR
//
// MessageText:
//
// An error occurred while saving words with punctuation characters. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_SAVEWORDWITHPUNCTERROR ((HRESULT)0xC0208358L)

//
// MessageId: DTS_E_TERMLOOKUP_ADDREFERENCETERM
//
// MessageText:
//
// An error occurred while processing the %1!ld!th reference term. The error code returned was 0x%2!8.8X!. Please remove the reference term from your reference table as a work-around.
//
#define DTS_E_TERMLOOKUP_ADDREFERENCETERM ((HRESULT)0xC0208359L)

//
// MessageId: DTS_E_TERMLOOKUP_SORREFERENCETERM
//
// MessageText:
//
// An error occurred while sorting reference terms. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_SORREFERENCETERM ((HRESULT)0xC020835AL)

//
// MessageId: DTS_E_TERMLOOKUP_COUNTTERM
//
// MessageText:
//
// An error occurred while counting term candidates. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_COUNTTERM       ((HRESULT)0xC020835BL)

////////////////////////////////////////////////////////////////////////////
// If Exhautive was set to true, the entire reference table must fit in main memory and/or the memory limit specified by MaxMemoryUsage.  We ran out of memory budget.

//
// MessageId: DTS_E_FUZZYLOOKUP_REFERENCECACHEFULL
//
// MessageText:
//
// Fuzzy Lookup was unable to load the entire reference table into main memory as is required when the Exhaustive property is enabled.  Either we ran out of system memory or a limit was specified for MaxMemoryUsage which was not sufficient to load the reference table.  Either set MaxMemoryUsage to 0 or increase it significantly.  Alternatively, disable Exhaustive.
//
#define DTS_E_FUZZYLOOKUP_REFERENCECACHEFULL ((HRESULT)0xC020835CL)

//
// MessageId: DTS_E_TERMLOOKUP_INITIALIZE
//
// MessageText:
//
// An error occurred while initializing the engine of Term Lookup. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_INITIALIZE      ((HRESULT)0xC020835DL)

//
// MessageId: DTS_E_TERMLOOKUP_PROCESSSENTENCE
//
// MessageText:
//
// An error occurred while processing sentences. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_PROCESSSENTENCE ((HRESULT)0xC020835EL)

//
// MessageId: DTS_E_TEXTMININGBASE_APPENDTOTEMPBUFFER
//
// MessageText:
//
// An error occurred while adding strings to an internal buffer. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TEXTMININGBASE_APPENDTOTEMPBUFFER ((HRESULT)0xC020835FL)

//
// MessageId: DTS_E_TERMEXTRACTION_SAVEPOSTAG
//
// MessageText:
//
// An error occurred while saving part-of-speech tags from an internal buffer. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_SAVEPOSTAG  ((HRESULT)0xC0208360L)

//
// MessageId: DTS_E_TERMEXTRACTION_COUNTTERM
//
// MessageText:
//
// An error occurred while counting term candidates. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_COUNTTERM   ((HRESULT)0xC0208361L)

//
// MessageId: DTS_E_TERMEXTRACTION_INITPOSPROCESSOR
//
// MessageText:
//
// An error occurred while initializing the part-of-speech processor. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_INITPOSPROCESSOR ((HRESULT)0xC0208362L)

//
// MessageId: DTS_E_TERMEXTRACTION_INITFSA
//
// MessageText:
//
// An error occurred while loading the finite state automata. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_INITFSA     ((HRESULT)0xC0208363L)

//
// MessageId: DTS_E_TERMEXTRACTION_INITIALIZE
//
// MessageText:
//
// An error occurred while initializing the engine of Term Extraction. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_INITIALIZE  ((HRESULT)0xC0208364L)

//
// MessageId: DTS_E_TERMEXTRACTION_PROCESSSENTENCE
//
// MessageText:
//
// An error occurred while processing within a sentence. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_PROCESSSENTENCE ((HRESULT)0xC0208365L)

//
// MessageId: DTS_E_TERMEXTRACTION_INITPOSTAGVECTOR
//
// MessageText:
//
// An error occurred while initializing the part-of-speech processor. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_INITPOSTAGVECTOR ((HRESULT)0xC0208366L)

//
// MessageId: DTS_E_TERMEXTRACTION_SAVEPTRSTRING
//
// MessageText:
//
// An error occurred while adding strings to an internal buffer. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_SAVEPTRSTRING ((HRESULT)0xC0208367L)

//
// MessageId: DTS_E_TERMEXTRACTION_ADDWORDTODECODER
//
// MessageText:
//
// An error occurred while adding words to a statistical decoder. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_ADDWORDTODECODER ((HRESULT)0xC0208368L)

//
// MessageId: DTS_E_TERMEXTRACTION_DECODE
//
// MessageText:
//
// An error occurred while decoding for a sentence. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_DECODE      ((HRESULT)0xC0208369L)

//
// MessageId: DTS_E_TERMEXTRACTION_SETEXCLUDEDTERM
//
// MessageText:
//
// An error occurred while setting exclusion terms. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_SETEXCLUDEDTERM ((HRESULT)0xC020836AL)

//
// MessageId: DTS_E_TERMEXTRACTION_PROCESSDOCUMENT
//
// MessageText:
//
// An error occurred while processing a document in the input. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMEXTRACTION_PROCESSDOCUMENT ((HRESULT)0xC020836BL)

//
// MessageId: DTS_E_TEXTMININGBASE_TESTPERIOD
//
// MessageText:
//
// An error occurred while testing whether a dot is a part of an acronym. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TEXTMININGBASE_TESTPERIOD  ((HRESULT)0xC020836CL)

//
// MessageId: DTS_E_TERMLOOKUP_ENGINEADDREFERENCETERM
//
// MessageText:
//
// An error occurred while setting reference terms. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_ENGINEADDREFERENCETERM ((HRESULT)0xC020836DL)

//
// MessageId: DTS_E_TERMLOOKUP_PROCESSDOCUMENT
//
// MessageText:
//
// An error occurred while processing a document in the input. The error code returned was 0x%1!8.8X!.
//
#define DTS_E_TERMLOOKUP_PROCESSDOCUMENT ((HRESULT)0xC020836EL)

//
// MessageId: DTS_E_INVALIDBULKINSERTPROPERTYVALUE
//
// MessageText:
//
// The value for the property %1!s! is %2!d!, which is not allowed.  The value must be greater than or equal to %3!d!.
//
#define DTS_E_INVALIDBULKINSERTPROPERTYVALUE ((HRESULT)0xC020836FL)

//
// MessageId: DTS_E_INVALIDBULKINSERTFIRSTROWLASTROWVALUES
//
// MessageText:
//
// The value for the property %1!s! is %2!d!, which must be less than or equal to the value of %3!d! for property %4!s!.
//
#define DTS_E_INVALIDBULKINSERTFIRSTROWLASTROWVALUES ((HRESULT)0xC0208370L)

//
// MessageId: DTS_E_FUZZYLOOKUPUNABLETODELETEEXISTINGMATCHINDEX
//
// MessageText:
//
// An error was encountered when trying to delete the existing fuzzy match index named "%1!s!". It is possible that this table was not created by Fuzzy Lookup (or this version of Fuzzy Lookup), it has been damaged, or there is another problem. Try manually deleting the table named "%2!s!" or specify a different name for the MatchIndexName property.
//
#define DTS_E_FUZZYLOOKUPUNABLETODELETEEXISTINGMATCHINDEX ((HRESULT)0xC0208371L)

//
// MessageId: DTS_E_TERMEXTRACTION_INCORRECTSCORETYPE
//
// MessageText:
//
// The Score Type of the transformation can only be Frequency or TFIDF.
//
#define DTS_E_TERMEXTRACTION_INCORRECTSCORETYPE ((HRESULT)0xC0208372L)

//
// MessageId: DTS_E_FUZZYLOOKUPREFTABLETOOBIG
//
// MessageText:
//
// The reference table specified has too many rows. Fuzzy Lookup only works with reference tables having less than 1 billion rows. Consider using a smaller view of your reference table.
//
#define DTS_E_FUZZYLOOKUPREFTABLETOOBIG  ((HRESULT)0xC0208373L)

//
// MessageId: DTS_E_FUZZYLOOKUPUNABLETODETERMINEREFERENCETABLESIZE
//
// MessageText:
//
// Unable to determine the size of the reference table '%1!s!'.  It is possible that this object is a view and not a table.  Fuzzy Lookup does not support views when CopyReferentaceTable=false.  Make sure that the table exists and that CopyReferenceTable=true.
//
#define DTS_E_FUZZYLOOKUPUNABLETODETERMINEREFERENCETABLESIZE ((HRESULT)0xC0208374L)

////////////////////////////////////////////////////////////////////////////
// The output column has an unsupported data type.

//
// MessageId: DTS_E_XMLSRCOUTPUTCOLUMNDATATYPENOTSUPPORTED
//
// MessageText:
//
// The SSIS Data Flow Task data type "%1!s!" on the %2!s! is not supported for the %3!s!.
//
#define DTS_E_XMLSRCOUTPUTCOLUMNDATATYPENOTSUPPORTED ((HRESULT)0xC0208377L)

////////////////////////////////////////////////////////////////////////////
// The attempt to set the data type properties of the specified output column failed. Either the output ID or the output column ID was invalid.

//
// MessageId: DTS_E_XMLSRCCANNOTFINDCOLUMNTOSETDATATYPE
//
// MessageText:
//
// Unable to set data type properties for the output column with ID %1!d! on the output with ID %2!d!. The output or column could not be found.
//
#define DTS_E_XMLSRCCANNOTFINDCOLUMNTOSETDATATYPE ((HRESULT)0xC0208378L)

////////////////////////////////////////////////////////////////////////////
// The property is read only.

//
// MessageId: DTS_E_CUSTOMPROPERTYISREADONLY
//
// MessageText:
//
// The value of custom property "%1!s!" on the %2!s! cannot be changed.
//
#define DTS_E_CUSTOMPROPERTYISREADONLY   ((HRESULT)0xC0208379L)

//
// MessageId: DTS_E_OUTPUTCOLUMNHASNOERRORCOLUMN
//
// MessageText:
//
// The %1!s! on the non-error output has no corresponding output column on the error output.
//
#define DTS_E_OUTPUTCOLUMNHASNOERRORCOLUMN ((HRESULT)0xC020837AL)

//
// MessageId: DTS_E_ERRORCOLUMNHASNOOUTPUTCOLUMN
//
// MessageText:
//
// The %1!s! on the error output has no corresponding output column on the non-error output.
//
#define DTS_E_ERRORCOLUMNHASNOOUTPUTCOLUMN ((HRESULT)0xC020837BL)

//
// MessageId: DTS_E_ERRORCOLUMNHASINCORRECTPROPERTIES
//
// MessageText:
//
// The %1!s! on the error output has properties that do not match the properties of its corresponding data source column.
//
#define DTS_E_ERRORCOLUMNHASINCORRECTPROPERTIES ((HRESULT)0xC020837CL)

////////////////////////////////////////////////////////////////////////////
// Output column types cannot be changed from the default that was chosen based on the source type, except for the special case of string columns.

//
// MessageId: DTS_E_ADOSRCOUTPUTCOLUMNDATATYPECANNOTBECHANGED
//
// MessageText:
//
// The data type of output columns on the %1!s! cannot be changed, except for DT_WSTR and DT_NTEXT columns.
//
#define DTS_E_ADOSRCOUTPUTCOLUMNDATATYPECANNOTBECHANGED ((HRESULT)0xC020837DL)

////////////////////////////////////////////////////////////////////////////
// The type of the output column does not match the type of the source column

//
// MessageId: DTS_E_ADOSRCDATATYPEMISMATCH
//
// MessageText:
//
// The data type of "%1!s!" does not match the data type "%2!s!" of the source column "%3!s!".
//
#define DTS_E_ADOSRCDATATYPEMISMATCH     ((HRESULT)0xC020837FL)

////////////////////////////////////////////////////////////////////////////
// The output column does not match any source column.

//
// MessageId: DTS_E_ADOSRCCOLUMNNOTINSCHEMAROWSET
//
// MessageText:
//
// The %1!s! does not have a matching source column in the schema.
//
#define DTS_E_ADOSRCCOLUMNNOTINSCHEMAROWSET ((HRESULT)0xC0208380L)

//
// MessageId: DTS_E_TERMLOOKUP_INVALIDREFERENCETERMTABLEORCOLUMN
//
// MessageText:
//
// The reference table/view or column used for the reference terms is invalid.
//
#define DTS_E_TERMLOOKUP_INVALIDREFERENCETERMTABLEORCOLUMN ((HRESULT)0xC0208381L)

//
// MessageId: DTS_E_TERMLOOKUP_REFERENCETERMTABLEANDCOLUMNNOTSET
//
// MessageText:
//
// The reference table/view or column used for the reference terms has not been set.
//
#define DTS_E_TERMLOOKUP_REFERENCETERMTABLEANDCOLUMNNOTSET ((HRESULT)0xC0208382L)

////////////////////////////////////////////////////////////////////////////
// This column is mapped to an external metadata column that already has another column mapped to it

//
// MessageId: DTS_E_COLUMNMAPPEDTOALREADYMAPPEDEXTERNALMETADATACOLUMN
//
// MessageText:
//
// The %1!s! is mapped to the external metadata column with ID %2!ld!, which is already mapped to another column.
//
#define DTS_E_COLUMNMAPPEDTOALREADYMAPPEDEXTERNALMETADATACOLUMN ((HRESULT)0xC0208383L)

////////////////////////////////////////////////////////////////////////////
// The specified multi-part SQL identifier has too many prefixes.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_TOOMANYPREFIXES
//
// MessageText:
//
// The SQL object name '%1!s!' specified for property '%2!s!' contains more than the maximum number of prefixes.  The maximum is 2.
//
#define DTS_E_TXFUZZYLOOKUP_TOOMANYPREFIXES ((HRESULT)0xC0208384L)

////////////////////////////////////////////////////////////////////////////
// The value was too large to fit in the type of the destination column.

//
// MessageId: DTS_E_MGDSRCSTATIC_OVERFLOW
//
// MessageText:
//
// The value was too large to fit in the column.
//
#define DTS_E_MGDSRCSTATIC_OVERFLOW      ((HRESULT)0xC0208385L)

//
// MessageId: DTS_E_DATAREADERDESTREADERISCLOSED
//
// MessageText:
//
// The SSIS IDataReader is closed.
//
#define DTS_E_DATAREADERDESTREADERISCLOSED ((HRESULT)0xC0208386L)

//
// MessageId: DTS_E_DATAREADERDESTREADERISATEND
//
// MessageText:
//
// The SSIS IDataReader is past the end of the result set.
//
#define DTS_E_DATAREADERDESTREADERISATEND ((HRESULT)0xC0208387L)

//
// MessageId: DTS_E_DATAREADERDESTINVALIDCOLUMNORDINAL
//
// MessageText:
//
// The ordinal position of the column is not valid.
//
#define DTS_E_DATAREADERDESTINVALIDCOLUMNORDINAL ((HRESULT)0xC0208388L)

//
// MessageId: DTS_E_DATAREADERDESTCANNOTCONVERT
//
// MessageText:
//
// Cannot convert the %1!s! from data type "%2!s!" to data type "%3!s!".
//
#define DTS_E_DATAREADERDESTCANNOTCONVERT ((HRESULT)0xC0208389L)

//
// MessageId: DTS_E_DATAREADERDESTINVALIDCODEPAGE
//
// MessageText:
//
// The %1!s! has unsupported code page %2!d!.
//
#define DTS_E_DATAREADERDESTINVALIDCODEPAGE ((HRESULT)0xC020838AL)

////////////////////////////////////////////////////////////////////////////
// There is an output column in the external metadata column collection that does not exist in the XML schema.

//
// MessageId: DTS_E_XMLSRCEXTERNALMETADATACOLUMNNOTINSCHEMA
//
// MessageText:
//
// The %1!s! has no mapping to the XML schema.
//
#define DTS_E_XMLSRCEXTERNALMETADATACOLUMNNOTINSCHEMA ((HRESULT)0xC020838BL)

////////////////////////////////////////////////////////////////////////////
// The input column mapped to an output column doesn't have the same metadata (datatype, precision, scale, length or codepage).

//
// MessageId: DTS_E_TXTERMLOOKUP_MISMATCHED_COLUMN_METADATA
//
// MessageText:
//
// Columns with lineage IDs %1!d! and %2!d! have mismatched metadata. The input column that is mapped to an output column does not have the same metadata (datatype, precision, scale, length, or codepage).
//
#define DTS_E_TXTERMLOOKUP_MISMATCHED_COLUMN_METADATA ((HRESULT)0xC020838DL)

////////////////////////////////////////////////////////////////////////////
// Read was not called before the time specified in the ReadTimeout property.

//
// MessageId: DTS_E_DATAREADERDESTREADERTIMEOUT
//
// MessageText:
//
// The SSIS IDataReader is closed. The read timeout has expired.
//
#define DTS_E_DATAREADERDESTREADERTIMEOUT ((HRESULT)0xC020838EL)

////////////////////////////////////////////////////////////////////////////
// The SQL command provided could not be executed.

//
// MessageId: DTS_E_ADOSRCINVALIDSQLCOMMAND
//
// MessageText:
//
// An error occurred executing the provided SQL command: "%1!s!". %2!s!
//
#define DTS_E_ADOSRCINVALIDSQLCOMMAND    ((HRESULT)0xC020838FL)

////////////////////////////////////////////////////////////////////////////
// When reusing a match index, the JoinType for the input column must be the same as the join type used when the match index was first created.

//
// MessageId: DTS_E_JOINTYPEDOESNTMATCHETI
//
// MessageText:
//
// The JoinType property specified for input column '%1!s!' differs from the JoinType specified for the corresponding reference table column when the Match Index was initially created.  Either rebuild the Match Index with the given JoinType or change the JoinType to match the type used when the Match Index was created.
//
#define DTS_E_JOINTYPEDOESNTMATCHETI     ((HRESULT)0xC0208390L)

////////////////////////////////////////////////////////////////////////////
// The column on the SQL Everywhere destination has an unsupported data type.

//
// MessageId: DTS_E_SQLCEDESTDATATYPENOTSUPPORTED
//
// MessageText:
//
// The data type "%1!s!" found on column "%2!s!" is not supported for the %3!s!.
//
#define DTS_E_SQLCEDESTDATATYPENOTSUPPORTED ((HRESULT)0xC0208392L)

////////////////////////////////////////////////////////////////////////////
// The column on the Data Reader destination has an unsupported data type.

//
// MessageId: DTS_E_DATAREADERDESTDATATYPENOTSUPPORTED
//
// MessageText:
//
// The data type "%1!s!" found on %2!s! is not supported for the %3!s!.
//
#define DTS_E_DATAREADERDESTDATATYPENOTSUPPORTED ((HRESULT)0xC0208393L)

////////////////////////////////////////////////////////////////////////////
// The column on the Record Set destination has an unsupported data type.

//
// MessageId: DTS_E_RECORDSETDESTDATATYPENOTSUPPORTED
//
// MessageText:
//
// The data type of the %1!s! is not supported for the %2!s!.
//
#define DTS_E_RECORDSETDESTDATATYPENOTSUPPORTED ((HRESULT)0xC0208394L)

////////////////////////////////////////////////////////////////////////////
// Unable to migrate a reference from a VSA TxScript to VSTA TxScript.

//
// MessageId: DTS_E_TXSCRIPTMIGRATIONCOULDNOTADDREFERENCE
//
// MessageText:
//
// Failed to add project reference "%1!s!" while migrating %2!s!. Migration might need to be completed manually.
//
#define DTS_E_TXSCRIPTMIGRATIONCOULDNOTADDREFERENCE ((HRESULT)0xC0208446L)

////////////////////////////////////////////////////////////////////////////
// The VSA TxScript being migrated has more than one entry point.

//
// MessageId: DTS_E_TXSCRIPTMIGRATIONMULTIPLEENTRYPOINTSFOUND
//
// MessageText:
//
// Multiple entry points with the name "%1!s!" were found during the migration of %2!s!. Migration might need to be completed manually.
//
#define DTS_E_TXSCRIPTMIGRATIONMULTIPLEENTRYPOINTSFOUND ((HRESULT)0xC0208447L)

////////////////////////////////////////////////////////////////////////////
// The VSA TxScript being migrated has no entry point.

//
// MessageId: DTS_E_TXSCRIPTMIGRATIONNOENTRYPOINTFOUND
//
// MessageText:
//
// No entry point was found during the migration of %1!s!. Migration might need to be completed manually.
//
#define DTS_E_TXSCRIPTMIGRATIONNOENTRYPOINTFOUND ((HRESULT)0xC0208448L)

//
// MessageId: DTS_E_ADOSOURCEFAILEDTOACQUIRECONNECTION
//
// MessageText:
//
// ADO NET Source has failed to acquire the connection %1!s! with the following error message: "%2!s!".
//
#define DTS_E_ADOSOURCEFAILEDTOACQUIRECONNECTION ((HRESULT)0xC0208449L)

//
// MessageId: DTS_E_ADODESTINSERTIONFAILURE
//
// MessageText:
//
// An exception has occurred during data insertion, the message returned from the provider is: %1!s!
//
#define DTS_E_ADODESTINSERTIONFAILURE    ((HRESULT)0xC020844BL)

//
// MessageId: DTS_E_ADODESTCONNECTIONTYPENOTSUPPORTED
//
// MessageText:
//
// Failed to retrieve the provider invariant name from %1!s!, it is currently not supported by ADO NET Destination component
//
#define DTS_E_ADODESTCONNECTIONTYPENOTSUPPORTED ((HRESULT)0xC020844CL)

////////////////////////////////////////////////////////////////////////////
// .NET command cannot infer provider specific  data type from .NET framework  type

//
// MessageId: DTS_E_ADODESTARGUMENTEXCEPTION
//
// MessageText:
//
// An argument exception has occurred while data provider tried to insert data to destination. The returned message is : %1!s!
//
#define DTS_E_ADODESTARGUMENTEXCEPTION   ((HRESULT)0xC020844DL)

//
// MessageId: DTS_E_ADODESTWRONGBATCHSIZE
//
// MessageText:
//
// The BatchSize property must be a non-negative integer
//
#define DTS_E_ADODESTWRONGBATCHSIZE      ((HRESULT)0xC020844EL)

//
// MessageId: DTS_E_ADODESTERRORUPDATEROW
//
// MessageText:
//
// An error has occurred while sending this row to destination data source.
//
#define DTS_E_ADODESTERRORUPDATEROW      ((HRESULT)0xC020844FL)

//
// MessageId: DTS_E_ADODESTEXECUTEREADEREXCEPTION
//
// MessageText:
//
// Executing tSQL command throws an exception, the message is :  %1!s!
//
#define DTS_E_ADODESTEXECUTEREADEREXCEPTION ((HRESULT)0xC0208450L)

////////////////////////////////////////////////////////////////////////////
// The external column on the ADO.NET Destination has an unsupported data type.

//
// MessageId: DTS_E_ADODESTDATATYPENOTSUPPORTED
//
// MessageText:
//
// The data type "%1!s!" found on column "%2!s!" is not supported for the %3!s!.
//
#define DTS_E_ADODESTDATATYPENOTSUPPORTED ((HRESULT)0xC0208451L)

//
// MessageId: DTS_E_ADODESTFAILEDTOACQUIRECONNECTION
//
// MessageText:
//
// ADO NET Destination has failed to acquire the connection %1!s! with the following error message: "%2!s!".
//
#define DTS_E_ADODESTFAILEDTOACQUIRECONNECTION ((HRESULT)0xC0208452L)

//
// MessageId: DTS_E_ADODESTNOTMANAGEDCONNECTION
//
// MessageText:
//
// The specified connection %1!s! is not managed, please use managed connection for ADO NET destination.
//
#define DTS_E_ADODESTNOTMANAGEDCONNECTION ((HRESULT)0xC0208453L)

//
// MessageId: DTS_E_ADODESTNOERROROUTPUT
//
// MessageText:
//
// The destination component does not have an error output. It may have been corrupted.
//
#define DTS_E_ADODESTNOERROROUTPUT       ((HRESULT)0xC0208454L)

////////////////////////////////////////////////////////////////////////////
// buffer manager cannot find the lineageID associated with the external column

//
// MessageId: DTS_E_ADODESTNOLINEAGEID
//
// MessageText:
//
// The lineageID %1!s! associated with external column %2!s! does not exist at run time.
//
#define DTS_E_ADODESTNOLINEAGEID         ((HRESULT)0xC0208455L)

//
// MessageId: DTS_E_ADODESTEXTERNALCOLNOTEXIST
//
// MessageText:
//
// The %1!s! does not exist in the database. It may have been removed or renamed.
//
#define DTS_E_ADODESTEXTERNALCOLNOTEXIST ((HRESULT)0xC0208456L)

//
// MessageId: DTS_E_ADODESTGETSCHEMATABLEFAILED
//
// MessageText:
//
// Failed to get properties of external columns. The table name you entered may not exist, or you do not have SELECT permission on the table object and an alternative attempt to get column properties through connection has failed. Detailed error messages are: %1!s!
//
#define DTS_E_ADODESTGETSCHEMATABLEFAILED ((HRESULT)0xC0208457L)

//
// MessageId: DTS_E_ADODESTCOLUMNERRORDISPNOTSUPPORTED
//
// MessageText:
//
// Input column error disposition is not supported by ADO NET Destination component.
//
#define DTS_E_ADODESTCOLUMNERRORDISPNOTSUPPORTED ((HRESULT)0xC0208458L)

//
// MessageId: DTS_E_ADODESTCOLUMNTRUNDISPNOTSUPPORTED
//
// MessageText:
//
// Input column truncation disposition is not supported by ADO NET Destination component.
//
#define DTS_E_ADODESTCOLUMNTRUNDISPNOTSUPPORTED ((HRESULT)0xC0208459L)

//
// MessageId: DTS_E_ADODESTINPUTTRUNDISPNOTSUPPORTED
//
// MessageText:
//
// Input  truncation row disposition is not supported by ADO NET Destination component.
//
#define DTS_E_ADODESTINPUTTRUNDISPNOTSUPPORTED ((HRESULT)0xC020845AL)

//
// MessageId: DTS_E_ADODESTTABLENAMEERROR
//
// MessageText:
//
// The Table or View name is not expected. \n\t If you are quoting the table name, please use the prefix %1!s! and the suffix %2!s! of your selected data provider for quotation. \n\t If you are using multipart name, please use at most three parts for the table name.
//
#define DTS_E_ADODESTTABLENAMEERROR      ((HRESULT)0xC020845BL)

//
// MessageId: DTS_E_ADODESTSQLBULKCOPYCREATIONEXCEPTION
//
// MessageText:
//
// An exception occurred while initializing the SqlBulkCopy interface. Disable SqlBulkCopy by setting the UseBulkInsertWhenPossible property to false. The exception message is: %1!s!
//
#define DTS_E_ADODESTSQLBULKCOPYCREATIONEXCEPTION ((HRESULT)0xC020845DL)

//
// MessageId: DTS_E_FAILEDTOFINDCOLUMNINBUFFER
//
// MessageText:
//
// Failed to find column "%1!s!" with lineage ID %2!d! in the buffer. The buffer manager returned error code 0x%3!8.8X!.
//
#define DTS_E_FAILEDTOFINDCOLUMNINBUFFER ((HRESULT)0xC0209001L)

//
// MessageId: DTS_E_FAILEDTOGETCOLUMNINFOFROMBUFFER
//
// MessageText:
//
// Failed to get information for column "%1!s!" (%2!d!) from the buffer. The error code returned was 0x%3!8.8X!.
//
#define DTS_E_FAILEDTOGETCOLUMNINFOFROMBUFFER ((HRESULT)0xC0209002L)

//
// MessageId: DTS_E_TXAGG_ARITHMETICOVERFLOW
//
// MessageText:
//
// Arithmetic overflow encountered while aggregating "%1!s!".
//
#define DTS_E_TXAGG_ARITHMETICOVERFLOW   ((HRESULT)0xC0209011L)

//
// MessageId: DTS_E_FAILEDTOGETCOLINFO
//
// MessageText:
//
// Failed to get information for row %1!ld!, column %2!ld! from the buffer. The error code returned was 0x%3!8.8X!.
//
#define DTS_E_FAILEDTOGETCOLINFO         ((HRESULT)0xC0209012L)

//
// MessageId: DTS_E_FAILEDTOSETCOLINFO
//
// MessageText:
//
// Failed to set information for row %1!ld!, column %2!ld! into the buffer. The error code returned was 0x%3!8.8X!.
//
#define DTS_E_FAILEDTOSETCOLINFO         ((HRESULT)0xC0209013L)

//
// MessageId: DTS_E_REQUIREDBUFFERISNOTAVAILBLE
//
// MessageText:
//
// A required buffer is not available.
//
#define DTS_E_REQUIREDBUFFERISNOTAVAILBLE ((HRESULT)0xC0209015L)

//
// MessageId: DTS_E_FAILEDTOGETBUFFERBOUNDARYINFO
//
// MessageText:
//
// The attempt to get buffer boundary information failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOGETBUFFERBOUNDARYINFO ((HRESULT)0xC0209016L)

//
// MessageId: DTS_E_FAILEDTOSETBUFFERENDOFROWSET
//
// MessageText:
//
// Setting the end of rowset for the buffer failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOSETBUFFERENDOFROWSET ((HRESULT)0xC0209017L)

//
// MessageId: DTS_E_FAILEDTOGETDATAFORERROROUTPUTBUFFER
//
// MessageText:
//
// Failed to get data for the error output buffer.
//
#define DTS_E_FAILEDTOGETDATAFORERROROUTPUTBUFFER ((HRESULT)0xC0209018L)

//
// MessageId: DTS_E_FAILEDTOREMOVEROWFROMBUFFER
//
// MessageText:
//
// Removing a row from the buffer failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOREMOVEROWFROMBUFFER ((HRESULT)0xC0209019L)

//
// MessageId: DTS_E_FAILEDTOSETBUFFERERRORINFO
//
// MessageText:
//
// The attempt to set buffer error information failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOSETBUFFERERRORINFO ((HRESULT)0xC020901BL)

//
// MessageId: DTS_E_COLUMNSTATUSERROR
//
// MessageText:
//
// There was an error with %1!s! on %2!s!. The column status returned was: "%3!s!".
//
#define DTS_E_COLUMNSTATUSERROR          ((HRESULT)0xC020901CL)

//
// MessageId: DTS_E_TXLOOKUP_METADATAXMLCACHEERR
//
// MessageText:
//
// Unable to cache reference metadata.
//
#define DTS_E_TXLOOKUP_METADATAXMLCACHEERR ((HRESULT)0xC020901DL)

//
// MessageId: DTS_E_TXLOOKUP_ROWLOOKUPERROR
//
// MessageText:
//
// Row yielded no match during lookup.
//
#define DTS_E_TXLOOKUP_ROWLOOKUPERROR    ((HRESULT)0xC020901EL)

//
// MessageId: DTS_E_INVALIDERRORDISPOSITION
//
// MessageText:
//
// The %1!s! has an invalid error or truncation row disposition.
//
#define DTS_E_INVALIDERRORDISPOSITION    ((HRESULT)0xC020901FL)

//
// MessageId: DTS_E_FAILEDTODIRECTERRORROW
//
// MessageText:
//
// Directing the row to the error output failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTODIRECTERRORROW     ((HRESULT)0xC0209022L)

//
// MessageId: DTS_E_FAILEDTOPREPARECOLUMNSTATUSESFORINSERT
//
// MessageText:
//
// Preparing column statuses for insert failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOPREPARECOLUMNSTATUSESFORINSERT ((HRESULT)0xC0209023L)

//
// MessageId: DTS_E_FAILEDTOFINDCOLUMNBYLINEAGEID
//
// MessageText:
//
// An attempt to find %1!s! with lineage ID %2!d! in the Data Flow Task buffer failed with error code 0x%3!8.8X!.
//
#define DTS_E_FAILEDTOFINDCOLUMNBYLINEAGEID ((HRESULT)0xC0209024L)

//
// MessageId: DTS_E_FAILEDTOFINDNONSPECIALERRORCOLUMN
//
// MessageText:
//
// Failed to find any non-special error column in %1!s!.
//
#define DTS_E_FAILEDTOFINDNONSPECIALERRORCOLUMN ((HRESULT)0xC0209025L)

////////////////////////////////////////////////////////////////////////////
// An error occurred on the specified object of the specified component.  That object's error row disposition directed the component to fail on error.

//
// MessageId: DTS_E_INDUCEDTRANSFORMFAILUREONERROR
//
// MessageText:
//
// SSIS Error Code DTS_E_INDUCEDTRANSFORMFAILUREONERROR.  The "%1!s!" failed because error code 0x%2!8.8X! occurred, and the error row disposition on "%3!s!" specifies failure on error. An error occurred on the specified object of the specified component.  There may be error messages posted before this with more information about the failure.
//
#define DTS_E_INDUCEDTRANSFORMFAILUREONERROR ((HRESULT)0xC0209029L)

////////////////////////////////////////////////////////////////////////////
// A truncation error occurred on the specified object of the specified component.  That object's truncation row disposition directed the component to fail on a truncation error.

//
// MessageId: DTS_E_INDUCEDTRANSFORMFAILUREONTRUNCATION
//
// MessageText:
//
// The "%1!s!" failed because truncation occurred, and the truncation row disposition on "%2!s!" specifies failure on truncation. A truncation error occurred on the specified object of the specified component.
//
#define DTS_E_INDUCEDTRANSFORMFAILUREONTRUNCATION ((HRESULT)0xC020902AL)

////////////////////////////////////////////////////////////////////////////
// Expression results must be Boolean for Conditional Split.  A NULL expression result is an error.

//
// MessageId: DTS_E_TXSPLITEXPRESSIONEVALUATEDTONULL
//
// MessageText:
//
// The expression "%1!s!" on "%2!s!" evaluated to NULL, but the "%3!s!" requires a Boolean results. Modify the error row disposition on the output to treat this result as False (Ignore Failure) or to redirect this row to the error output (Redirect Row).  The expression results must be Boolean for a Conditional Split.  A NULL expression result is an error.
//
#define DTS_E_TXSPLITEXPRESSIONEVALUATEDTONULL ((HRESULT)0xC020902BL)

//
// MessageId: DTS_E_TXSPLITSTATIC_EXPRESSIONEVALUATEDTONULL
//
// MessageText:
//
// The expression evaluated to NULL, but a Boolean result is required. Modify the error row disposition on the output to treat this result as False (Ignore Failure) or to redirect this row to the error output (Redirect Row). The expression results must be Boolean for a Conditional Split.  A NULL expression result is an error.
//
#define DTS_E_TXSPLITSTATIC_EXPRESSIONEVALUATEDTONULL ((HRESULT)0xC020902CL)

////////////////////////////////////////////////////////////////////////////
// Only UTF-16 little endian format is supported.

//
// MessageId: DTS_E_UTF16BIGENDIANFORMATNOTSUPPORTED
//
// MessageText:
//
// The file format of UTF-16 big endian is not supported.  Only UTF-16 little endian format is supported.
//
#define DTS_E_UTF16BIGENDIANFORMATNOTSUPPORTED ((HRESULT)0xC020902DL)

//
// MessageId: DTS_E_UTF8FORMATNOTSUPPORTEDASUNICODE
//
// MessageText:
//
// The file format of UTF-8 is not supported as Unicode.
//
#define DTS_E_UTF8FORMATNOTSUPPORTEDASUNICODE ((HRESULT)0xC020902EL)

//
// MessageId: DTS_E_DTPXMLCANTREADIDATTR
//
// MessageText:
//
// Cannot read ID attribute.
//
#define DTS_E_DTPXMLCANTREADIDATTR       ((HRESULT)0xC020902FL)

////////////////////////////////////////////////////////////////////////////
// Index column is joined more than once

//
// MessageId: DTS_E_TXLOOKUP_INDEXCOLUMNREUSED
//
// MessageText:
//
// The cache index column %1!s! is referenced by more than one lookup input column.
//
#define DTS_E_TXLOOKUP_INDEXCOLUMNREUSED ((HRESULT)0xC020903EL)

////////////////////////////////////////////////////////////////////////////
// Not all cache index columns are used by lookup

//
// MessageId: DTS_E_TXLOOKUP_INDEXCOLUMNSMISMATCH
//
// MessageText:
//
// Lookup does not reference all cache connection manager index columns. Number of joined columns in lookup: %1!d!. Number of index columns: %2!d!.
//
#define DTS_E_TXLOOKUP_INDEXCOLUMNSMISMATCH ((HRESULT)0xC020903FL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_CANTCONVERTVALUE
//
// MessageText:
//
// The data value cannot be converted for reasons other than sign mismatch or data overflow.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_CANTCONVERTVALUE ((HRESULT)0xC0209069L)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_SCHEMAVIOLATION
//
// MessageText:
//
// The data value violated the schema constraint.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_SCHEMAVIOLATION ((HRESULT)0xC020906AL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_TRUNCATED
//
// MessageText:
//
// The data was truncated.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_TRUNCATED ((HRESULT)0xC020906BL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_SIGNMISMATCH
//
// MessageText:
//
// Conversion failed because the data value was signed and the type used by the provider was unsigned.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_SIGNMISMATCH ((HRESULT)0xC020906CL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_DATAOVERFLOW
//
// MessageText:
//
// Conversion failed because the data value overflowed the type used by the provider.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_DATAOVERFLOW ((HRESULT)0xC020906DL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_UNAVAILABLE
//
// MessageText:
//
// No status is available.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_UNAVAILABLE ((HRESULT)0xC020906EL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_PERMISSIONDENIED
//
// MessageText:
//
// The user did not have the correct permissions to write to the column.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_PERMISSIONDENIED ((HRESULT)0xC020906FL)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_INTEGRITYVIOLATION
//
// MessageText:
//
// The data value violated the integrity constraints for the column.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_INTEGRITYVIOLATION ((HRESULT)0xC0209070L)

//
// MessageId: DTS_E_OLEDBSOURCEADAPTERSTATIC_UNAVAILABLE
//
// MessageText:
//
// No status is available.
//
#define DTS_E_OLEDBSOURCEADAPTERSTATIC_UNAVAILABLE ((HRESULT)0xC0209071L)

//
// MessageId: DTS_E_OLEDBSOURCEADAPTERSTATIC_CANTCONVERTVALUE
//
// MessageText:
//
// The data value cannot be converted for reasons other than sign mismatch or data overflow.
//
#define DTS_E_OLEDBSOURCEADAPTERSTATIC_CANTCONVERTVALUE ((HRESULT)0xC0209072L)

//
// MessageId: DTS_E_OLEDBSOURCEADAPTERSTATIC_TRUNCATED
//
// MessageText:
//
// The data was truncated.
//
#define DTS_E_OLEDBSOURCEADAPTERSTATIC_TRUNCATED ((HRESULT)0xC0209073L)

//
// MessageId: DTS_E_OLEDBSOURCEADAPTERSTATIC_SIGNMISMATCH
//
// MessageText:
//
// Conversion failed because the data value was signed and the type used by the provider was unsigned.
//
#define DTS_E_OLEDBSOURCEADAPTERSTATIC_SIGNMISMATCH ((HRESULT)0xC0209074L)

//
// MessageId: DTS_E_OLEDBSOURCEADAPTERSTATIC_DATAOVERFLOW
//
// MessageText:
//
// Conversion failed because the data value overflowed the type used by the provider.
//
#define DTS_E_OLEDBSOURCEADAPTERSTATIC_DATAOVERFLOW ((HRESULT)0xC0209075L)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_SCHEMAVIOLATION
//
// MessageText:
//
// The data value violated the schema constraint.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_SCHEMAVIOLATION ((HRESULT)0xC0209076L)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_CANTCONVERTVALUE
//
// MessageText:
//
// The data value cannot be converted for reasons other than sign mismatch or data overflow.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_CANTCONVERTVALUE ((HRESULT)0xC0209077L)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_TRUNCATED
//
// MessageText:
//
// The data was truncated.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_TRUNCATED ((HRESULT)0xC0209078L)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_SIGNMISMATCH
//
// MessageText:
//
// Conversion failed because the data value was signed and the type used by the provider was unsigned.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_SIGNMISMATCH ((HRESULT)0xC0209079L)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_DATAOVERFLOW
//
// MessageText:
//
// Conversion failed because the data value overflowed the type used by the provider.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_DATAOVERFLOW ((HRESULT)0xC020907AL)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_UNAVAILABLE
//
// MessageText:
//
// No status is available.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_UNAVAILABLE ((HRESULT)0xC020907BL)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_PERMISSIONDENIED
//
// MessageText:
//
// The user did not have the correct permissions to write to the column.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_PERMISSIONDENIED ((HRESULT)0xC020907CL)

//
// MessageId: DTS_E_OLEDBDESTINATIONADAPTERSTATIC_INTEGRITYVIOLATION
//
// MessageText:
//
// The data value violates integrity constraints.
//
#define DTS_E_OLEDBDESTINATIONADAPTERSTATIC_INTEGRITYVIOLATION ((HRESULT)0xC020907DL)

//
// MessageId: DTS_E_TXDATACONVERTSTATIC_CANTCONVERTVALUE
//
// MessageText:
//
// The data value cannot be converted for reasons other than sign mismatch or data overflow.
//
#define DTS_E_TXDATACONVERTSTATIC_CANTCONVERTVALUE ((HRESULT)0xC020907FL)

//
// MessageId: DTS_E_TXDATACONVERTSTATIC_TRUNCATED
//
// MessageText:
//
// The data was truncated.
//
#define DTS_E_TXDATACONVERTSTATIC_TRUNCATED ((HRESULT)0xC0209080L)

//
// MessageId: DTS_E_TXDATACONVERTSTATIC_SIGNMISMATCH
//
// MessageText:
//
// Conversion failed because the data value was signed and the type used by the provider was unsigned.
//
#define DTS_E_TXDATACONVERTSTATIC_SIGNMISMATCH ((HRESULT)0xC0209081L)

//
// MessageId: DTS_E_TXDATACONVERTSTATIC_DATAOVERFLOW
//
// MessageText:
//
// Conversion failed because the data value overflowed the type used by the data conversion transform.
//
#define DTS_E_TXDATACONVERTSTATIC_DATAOVERFLOW ((HRESULT)0xC0209082L)

//
// MessageId: DTS_E_FLATFILESOURCEADAPTERSTATIC_UNAVAILABLE
//
// MessageText:
//
// No status is available.
//
#define DTS_E_FLATFILESOURCEADAPTERSTATIC_UNAVAILABLE ((HRESULT)0xC0209083L)

//
// MessageId: DTS_E_FLATFILESOURCEADAPTERSTATIC_CANTCONVERTVALUE
//
// MessageText:
//
// The data value cannot be converted for reasons other than sign mismatch or data overflow.
//
#define DTS_E_FLATFILESOURCEADAPTERSTATIC_CANTCONVERTVALUE ((HRESULT)0xC0209084L)

//
// MessageId: DTS_E_FLATFILESOURCEADAPTERSTATIC_TRUNCATED
//
// MessageText:
//
// The data was truncated.
//
#define DTS_E_FLATFILESOURCEADAPTERSTATIC_TRUNCATED ((HRESULT)0xC0209085L)

//
// MessageId: DTS_E_FLATFILESOURCEADAPTERSTATIC_SIGNMISMATCH
//
// MessageText:
//
// Conversion failed because the data value was signed and the type used by the flat file source adapter was unsigned.
//
#define DTS_E_FLATFILESOURCEADAPTERSTATIC_SIGNMISMATCH ((HRESULT)0xC0209086L)

//
// MessageId: DTS_E_FLATFILESOURCEADAPTERSTATIC_DATAOVERFLOW
//
// MessageText:
//
// Conversion failed because the data value overflowed the type used by the flat file source adapter.
//
#define DTS_E_FLATFILESOURCEADAPTERSTATIC_DATAOVERFLOW ((HRESULT)0xC0209087L)

//
// MessageId: DTS_E_TXDATACONVERTSTATIC_UNAVAILABLE
//
// MessageText:
//
// No status is available.
//
#define DTS_E_TXDATACONVERTSTATIC_UNAVAILABLE ((HRESULT)0xC020908EL)

////////////////////////////////////////////////////////////////////////////
// The error code was previously reported.

//
// MessageId: DTS_E_FILEOPENERR_FORREAD
//
// MessageText:
//
// Opening the file "%1!s!" for reading failed with error code 0x%2!8.8X!.
//
#define DTS_E_FILEOPENERR_FORREAD        ((HRESULT)0xC0209090L)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD
//
// MessageText:
//
// Failed to open file for reading.
//
#define DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD ((HRESULT)0xC0209091L)

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed with error code 0x%2!8.8X!.
//
#define DTS_E_FILEOPENERR_FORWRITE       ((HRESULT)0xC0209092L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE
//
// MessageText:
//
// Failed to open file for writing.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE ((HRESULT)0xC0209093L)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_INSERTERCANTREAD
//
// MessageText:
//
// Failed to read from file.
//
#define DTS_E_TXFILEINSERTERSTATIC_INSERTERCANTREAD ((HRESULT)0xC0209094L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_EXTRACTORCANTWRITE
//
// MessageText:
//
// Failed to write to file.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_EXTRACTORCANTWRITE ((HRESULT)0xC0209095L)

//
// MessageId: DTS_E_DTPXMLINVALIDPROPERTYARRAYTOOMANYVALUES
//
// MessageText:
//
// Too many array elements were found when parsing a property of type array. The elementCount is less than the number of array elements found.
//
#define DTS_E_DTPXMLINVALIDPROPERTYARRAYTOOMANYVALUES ((HRESULT)0xC0209099L)

//
// MessageId: DTS_E_DTPXMLINVALIDPROPERTYARRAYNOTENOUGHVALUES
//
// MessageText:
//
// Too few array elements were found when parsing a property of type array. The elementCount is more than the number of array elements found.
//
#define DTS_E_DTPXMLINVALIDPROPERTYARRAYNOTENOUGHVALUES ((HRESULT)0xC020909AL)

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE_FILENOTFOUND
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed. The file cannot be found.
//
#define DTS_E_FILEOPENERR_FORWRITE_FILENOTFOUND ((HRESULT)0xC020909EL)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_FILENOTFOUND
//
// MessageText:
//
// Opening the file for writing failed. The file cannot be found.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_FILENOTFOUND ((HRESULT)0xC020909FL)

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE_PATHNOTFOUND
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed. The path cannot be found.
//
#define DTS_E_FILEOPENERR_FORWRITE_PATHNOTFOUND ((HRESULT)0xC02090A0L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_PATHNOTFOUND
//
// MessageText:
//
// Opening the file for writing failed. The path cannot be found.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_PATHNOTFOUND ((HRESULT)0xC02090A1L)

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE_TOOMANYOPENFILES
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed. There are too many files open.
//
#define DTS_E_FILEOPENERR_FORWRITE_TOOMANYOPENFILES ((HRESULT)0xC02090A2L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_TOOMANYOPENFILES
//
// MessageText:
//
// Opening the file for writing failed. There are too many files open.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_TOOMANYOPENFILES ((HRESULT)0xC02090A3L)

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE_ACCESSDENIED
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed. You do not have the correct permissions.
//
#define DTS_E_FILEOPENERR_FORWRITE_ACCESSDENIED ((HRESULT)0xC02090A4L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_ACCESSDENIED
//
// MessageText:
//
// Opening the file for writing failed. You do not have the correct permissions.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_ACCESSDENIED ((HRESULT)0xC02090A5L)

////////////////////////////////////////////////////////////////////////////
// If AllowAppend and ForceTruncate are both false, an existing file will cause this failure.

//
// MessageId: DTS_E_FILEOPENERR_FORWRITE_FILEEXISTS
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed. The file exists and cannot be overwritten. If the AllowAppend property is FALSE and the ForceTruncate property is set to FALSE, the existence of the file will cause this failure.
//
#define DTS_E_FILEOPENERR_FORWRITE_FILEEXISTS ((HRESULT)0xC02090A6L)

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_FILEEXISTS
//
// MessageText:
//
// Opening a file for writing failed. The file already exists and cannot be overwritten. If both the AllowAppend property and the ForceTruncate property are set to FALSE, the existence of the file will cause this failure.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEOPENERR_FORWRITE_FILEEXISTS ((HRESULT)0xC02090A7L)

//
// MessageId: DTS_E_INCORRECTCUSTOMPROPERTYVALUEFOROBJECT
//
// MessageText:
//
// The value for custom property "%1!s!" on %2!s! is incorrect.
//
#define DTS_E_INCORRECTCUSTOMPROPERTYVALUEFOROBJECT ((HRESULT)0xC02090A8L)

//
// MessageId: DTS_E_COLUMNSHAVEINCOMPATIBLEMETADATA
//
// MessageText:
//
// Columns "%1!s!" and "%2!s!" have incompatible metadata.
//
#define DTS_E_COLUMNSHAVEINCOMPATIBLEMETADATA ((HRESULT)0xC02090A9L)

////////////////////////////////////////////////////////////////////////////
// There was not enough disk space available to write the specified file.

//
// MessageId: DTS_E_FILEWRITEERR_DISKFULL
//
// MessageText:
//
// Opening the file "%1!s!" for writing failed because the disk is full. There is not sufficient disk space to save this file.
//
#define DTS_E_FILEWRITEERR_DISKFULL      ((HRESULT)0xC02090ADL)

////////////////////////////////////////////////////////////////////////////
// There was not enough disk space available to write the file.

//
// MessageId: DTS_E_TXFILEEXTRACTORSTATIC_FILEWRITEERR_DISKFULL
//
// MessageText:
//
// Attempting to open the file for writing failed because the disk is full.
//
#define DTS_E_TXFILEEXTRACTORSTATIC_FILEWRITEERR_DISKFULL ((HRESULT)0xC02090AEL)

////////////////////////////////////////////////////////////////////////////
// ComparisonFlags are enabled, and generating sortkey with LCMapString failed with this specific error code.

//
// MessageId: DTS_E_TXAGG_SORTKEYGENFAILED
//
// MessageText:
//
// Generating a sort key failed with error 0x%1!8.8X!. The ComparisonFlags are enabled, and generating a sortkey with LCMapString failed.
//
#define DTS_E_TXAGG_SORTKEYGENFAILED     ((HRESULT)0xC02090B9L)

////////////////////////////////////////////////////////////////////////////
// LCMapString failed with this specific error code.

//
// MessageId: DTS_E_TXCHARMAPLCMAPFAILED
//
// MessageText:
//
// Transform failed to map string and returned error 0x%1!8.8X!. The LCMapString failed.
//
#define DTS_E_TXCHARMAPLCMAPFAILED       ((HRESULT)0xC02090BAL)

//
// MessageId: DTS_E_FILEOPENERR_FORREAD_FILENOTFOUND
//
// MessageText:
//
// Opening the file "%1!s!" for reading failed. The file was not found.
//
#define DTS_E_FILEOPENERR_FORREAD_FILENOTFOUND ((HRESULT)0xC02090BBL)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_FILENOTFOUND
//
// MessageText:
//
// Opening a file for reading failed. The file was not found.
//
#define DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_FILENOTFOUND ((HRESULT)0xC02090BCL)

//
// MessageId: DTS_E_FILEOPENERR_FORREAD_PATHNOTFOUND
//
// MessageText:
//
// Opening the file "%1!s!" for reading failed. The path cannot be found.
//
#define DTS_E_FILEOPENERR_FORREAD_PATHNOTFOUND ((HRESULT)0xC02090BDL)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_PATHNOTFOUND
//
// MessageText:
//
// Opening a file for reading failed. The path was not found.
//
#define DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_PATHNOTFOUND ((HRESULT)0xC02090BEL)

//
// MessageId: DTS_E_FILEOPENERR_FORREAD_TOOMANYOPENFILES
//
// MessageText:
//
// Opening the file "%1!s!" for reading failed. There are too many files open.
//
#define DTS_E_FILEOPENERR_FORREAD_TOOMANYOPENFILES ((HRESULT)0xC02090BFL)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_TOOMANYOPENFILES
//
// MessageText:
//
// Opening the file for reading failed. There are too many files open.
//
#define DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_TOOMANYOPENFILES ((HRESULT)0xC02090C0L)

//
// MessageId: DTS_E_FILEOPENERR_FORREAD_ACCESSDENIED
//
// MessageText:
//
// Attempting to open the file "%1!s!" for reading failed. Access is denied.
//
#define DTS_E_FILEOPENERR_FORREAD_ACCESSDENIED ((HRESULT)0xC02090C1L)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_ACCESSDENIED
//
// MessageText:
//
// Opening the file for reading failed. You do not have the correct permissions.
//
#define DTS_E_TXFILEINSERTERSTATIC_FILEOPENERR_FORREAD_ACCESSDENIED ((HRESULT)0xC02090C2L)

////////////////////////////////////////////////////////////////////////////
// The ExpectBOM property was set for this file, but the BOM value in the file is missing or invalid.

//
// MessageId: DTS_E_INSERTERINVALIDBOM
//
// MessageText:
//
// The byte order mark (BOM) value for the file "%1!s!" is 0x%2!4.4X!, but the expected value is 0x%3!4.4X!. The ExpectBOM property was set for this file, but the BOM value in the file is missing or not valid.
//
#define DTS_E_INSERTERINVALIDBOM         ((HRESULT)0xC02090C3L)

//
// MessageId: DTS_E_TXFILEINSERTERSTATIC_INSERTERINVALIDBOM
//
// MessageText:
//
// The byte order mark (BOM) value for the file is not valid. The ExpectBOM property was set for this file, but the BOM value in the file is missing or not valid.
//
#define DTS_E_TXFILEINSERTERSTATIC_INSERTERINVALIDBOM ((HRESULT)0xC02090C4L)

//
// MessageId: DTS_E_NOCOMPONENTATTACHED
//
// MessageText:
//
// The %1!s! is not attached to a component.  It is required that a component be attached.
//
#define DTS_E_NOCOMPONENTATTACHED        ((HRESULT)0xC02090C5L)

//
// MessageId: DTS_E_TXLOOKUP_INVALIDMAXMEMORYPROP
//
// MessageText:
//
// The value for custom property %1!s! is incorrect.  It should be a number between %2!d! and %3!I64d!.
//
#define DTS_E_TXLOOKUP_INVALIDMAXMEMORYPROP ((HRESULT)0xC02090C9L)

////////////////////////////////////////////////////////////////////////////
// The comparison flags custom property can only be specified for group by and count distinct aggregation types

//
// MessageId: DTS_E_TXAGG_COMPFLAGS_BADAGGREGATIONTYPE
//
// MessageText:
//
// The custom property "%1!s!" cannot be specified for the aggregation type selected for this column. The comparison flags custom property can only be specified for group by and count distinct aggregation types.
//
#define DTS_E_TXAGG_COMPFLAGS_BADAGGREGATIONTYPE ((HRESULT)0xC02090CAL)

////////////////////////////////////////////////////////////////////////////
// The comparison flags custom property can only be specified for columns with datatype DT_STR or DT_WSTR

//
// MessageId: DTS_E_TXAGG_COMPFLAGS_BADDATATYPE
//
// MessageText:
//
// The comparison flags custom property "%1!s!" can only be specified for columns of with datatype DT_STR or DT_WSTR.
//
#define DTS_E_TXAGG_COMPFLAGS_BADDATATYPE ((HRESULT)0xC02090CBL)

//
// MessageId: DTS_E_TXAGG_AGGREGATION_FAILURE
//
// MessageText:
//
// Aggregation on %1!s! failed with error code 0x%2!8.8X!.
//
#define DTS_E_TXAGG_AGGREGATION_FAILURE  ((HRESULT)0xC02090CDL)

//
// MessageId: DTS_E_MAPPINGSETUPERROR
//
// MessageText:
//
// There was an error setting up the mapping. %1!s!
//
#define DTS_E_MAPPINGSETUPERROR          ((HRESULT)0xC02090CFL)

////////////////////////////////////////////////////////////////////////////
// The file name or variable that should point to the XML data might be invalid.

//
// MessageId: DTS_E_XMLSRCUNABLETOREADXMLDATA
//
// MessageText:
//
// The %1!s! was unable to read the XML data.
//
#define DTS_E_XMLSRCUNABLETOREADXMLDATA  ((HRESULT)0xC02090D0L)

////////////////////////////////////////////////////////////////////////////
// The variable specified by the custom property was invalid or could not be locked for read.

//
// MessageId: DTS_E_XMLSRCUNABLETOGETXMLDATAVARIABLE
//
// MessageText:
//
// The %1!s! was unable to get the variable specified by the "%2!s!" property.
//
#define DTS_E_XMLSRCUNABLETOGETXMLDATAVARIABLE ((HRESULT)0xC02090D1L)

//
// MessageId: DTS_E_NODATATABLEMATCHROWID
//
// MessageText:
//
// The %1!s! contains a RowsetID with a value of %2!s! that does not reference a data table in the schema.
//
#define DTS_E_NODATATABLEMATCHROWID      ((HRESULT)0xC02090D2L)

////////////////////////////////////////////////////////////////////////////
// Keys or CountDistinctKeys property has a invalid value, it should be a number between 0 and ULONG_MAX, inclusive, or not set at all

//
// MessageId: DTS_E_TXAGG_BADKEYSVALUE
//
// MessageText:
//
// The property %1!s! must either be empty, or a number between %2!u! and %3!u!. The Keys or CountDistinctKeys property has a invalid value. The property should be a number between 0 and ULONG_MAX, inclusive, or not be set.
//
#define DTS_E_TXAGG_BADKEYSVALUE         ((HRESULT)0xC02090D6L)

////////////////////////////////////////////////////////////////////////////
// We saw more than ULONG_MAX distinct key values in the main workspace

//
// MessageId: DTS_E_TXAGG_TOOMANYKEYS
//
// MessageText:
//
// The aggregate component encountered too many distinct key combinations. It cannot accommodate more than %1!u! distinct key values. There are more than ULONG_MAX distinct key values in the main workspace.
//
#define DTS_E_TXAGG_TOOMANYKEYS          ((HRESULT)0xC02090D7L)

////////////////////////////////////////////////////////////////////////////
// We saw more than ULONG_MAX distinct values while calculating the count distinct aggregation

//
// MessageId: DTS_E_TXAGG_TOOMANYCOUNTDISTINCTVALUES
//
// MessageText:
//
// The aggregate component encountered too many distinct values while calculating the count distinct aggregate. It cannot accommodate more than %1!u! distinct values. There were more than ULONG_MAX distinct values while calculating the count distinct aggregation.
//
#define DTS_E_TXAGG_TOOMANYCOUNTDISTINCTVALUES ((HRESULT)0xC02090D8L)

//
// MessageId: DTS_E_FAILEDTOWRITETOTHEFILENAMECOLUMN
//
// MessageText:
//
// The attempt to write to the filename column failed with error code 0x%1!8.8X!.
//
#define DTS_E_FAILEDTOWRITETOTHEFILENAMECOLUMN ((HRESULT)0xC02090D9L)

//
// MessageId: DTS_E_FAILEDTOFINDERRORCOLUMN
//
// MessageText:
//
// An error occurred, but the column that caused the error cannot be determined.
//
#define DTS_E_FAILEDTOFINDERRORCOLUMN    ((HRESULT)0xC02090DCL)

////////////////////////////////////////////////////////////////////////////
// Lookup transform was unable to upgrade metadata from the existing version number in a call to PerformUpgrade().

//
// MessageId: DTS_E_TXLOOKUP_FAILEDUPGRADE_BAD_VERSION
//
// MessageText:
//
// Unable to upgrade lookup metadata from version %1!d! to %2!d!. The Lookup transform was unable to upgrade metadata from the existing version number in a call to PerformUpgrade().
//
#define DTS_E_TXLOOKUP_FAILEDUPGRADE_BAD_VERSION ((HRESULT)0xC02090E3L)

//
// MessageId: DTS_E_TERMEXTRACTIONORLOOKUP_NTEXTSPLITED
//
// MessageText:
//
// Failed to locate the ending boundary of a sentence.
//
#define DTS_E_TERMEXTRACTIONORLOOKUP_NTEXTSPLITED ((HRESULT)0xC02090E5L)

////////////////////////////////////////////////////////////////////////////
// The sentence is segmented into several sentences.

//
// MessageId: DTS_E_TERMEXTRACTION_EXCEED_MAXWORDNUM
//
// MessageText:
//
// The Term Extraction transformation is unable to process the input text because a sentence from the input text is too long. The sentence is segmented into several sentences.
//
#define DTS_E_TERMEXTRACTION_EXCEED_MAXWORDNUM ((HRESULT)0xC02090E6L)

//
// MessageId: DTS_E_XMLSRCFAILEDTOCREATEREADER
//
// MessageText:
//
// The %1!s! was unable to read the XML data. %2!s!
//
#define DTS_E_XMLSRCFAILEDTOCREATEREADER ((HRESULT)0xC02090E7L)

////////////////////////////////////////////////////////////////////////////
// More detailed errors have already been posted .

//
// MessageId: DTS_E_TXLOOKUP_REINITMETADATAFAILED
//
// MessageText:
//
// The call to Lookup transform method, ReinitializeMetadata, failed.
//
#define DTS_E_TXLOOKUP_REINITMETADATAFAILED ((HRESULT)0xC02090F0L)

////////////////////////////////////////////////////////////////////////////
// The user must specify at least one join column.

//
// MessageId: DTS_E_TXLOOKUP_NOJOINS
//
// MessageText:
//
// The lookup transform must contain at least one input column joined to a reference column, and none were specified. You must specify at least one join column.
//
#define DTS_E_TXLOOKUP_NOJOINS           ((HRESULT)0xC02090F1L)

////////////////////////////////////////////////////////////////////////////
// Internal Error: Message string that was being posted by the managed error infrastructure contains bad format specification.

//
// MessageId: DTS_E_MANAGEDERR_BADFORMATSPECIFICATION
//
// MessageText:
//
// The message string being posted by the managed error infrastructure contains a bad format specification. This is an internal error.
//
#define DTS_E_MANAGEDERR_BADFORMATSPECIFICATION ((HRESULT)0xC02090F2L)

////////////////////////////////////////////////////////////////////////////
// Internal Error: While formatting a message string via the managed error infrastructure, we saw a variant type that we don't support formatting.

//
// MessageId: DTS_E_MANAGEDERR_UNSUPPORTEDTYPE
//
// MessageText:
//
// While formatting a message string using the managed error infrastructure, there was a variant type that does not have formatting support. This is an internal error.
//
#define DTS_E_MANAGEDERR_UNSUPPORTEDTYPE ((HRESULT)0xC02090F3L)

////////////////////////////////////////////////////////////////////////////
// An error occurred reading the data.

//
// MessageId: DTS_E_DATAREADERSRCUNABLETOPROCESSDATA
//
// MessageText:
//
// The %1!s! was unable to process the data. %2!s!
//
#define DTS_E_DATAREADERSRCUNABLETOPROCESSDATA ((HRESULT)0xC02090F5L)

////////////////////////////////////////////////////////////////////////////
// The value for the property was empty, but a non-empty string was expected.

//
// MessageId: DTS_E_XMLSRCEMPTYPROPERTY
//
// MessageText:
//
// The property "%1!s!" on the %2!s! was empty.
//
#define DTS_E_XMLSRCEMPTYPROPERTY        ((HRESULT)0xC02090F6L)

////////////////////////////////////////////////////////////////////////////
// The name does not conform to the naming conventions for output names. It might contain invalid characters.

//
// MessageId: DTS_E_XMLSRCINVALIDOUTPUTNAME
//
// MessageText:
//
// Attempting to create an output with the name "%1!s!" for the XML table with the path "%2!s!" failed because the name is invalid.
//
#define DTS_E_XMLSRCINVALIDOUTPUTNAME    ((HRESULT)0xC02090F7L)

////////////////////////////////////////////////////////////////////////////
// The value was too large to fit in the type of the destination column.

//
// MessageId: DTS_E_MGDSRC_OVERFLOW
//
// MessageText:
//
// The value was too large to fit in the %1!s!.
//
#define DTS_E_MGDSRC_OVERFLOW            ((HRESULT)0xC02090F8L)

//
// MessageId: DTS_E_DATAREADERDESTUNABLETOPROCESSDATA
//
// MessageText:
//
// The %1!s! was unable to process the data.
//
#define DTS_E_DATAREADERDESTUNABLETOPROCESSDATA ((HRESULT)0xC02090F9L)

////////////////////////////////////////////////////////////////////////////
// A truncation error occurred on the specified object of the specified component.  That object's truncation row disposition directed the component to fail on a truncation error.

//
// MessageId: DTS_E_XMLSRC_INDUCEDTRANSFORMFAILUREONTRUNCATION
//
// MessageText:
//
// The "%1!s!" failed because truncation occurred, and the truncation row disposition on "%2!s!"  at "%3!s!" specifies failure on truncation. A truncation error occurred on the specified object of the specified component.
//
#define DTS_E_XMLSRC_INDUCEDTRANSFORMFAILUREONTRUNCATION ((HRESULT)0xC02090FAL)

////////////////////////////////////////////////////////////////////////////
// An error occurred on the specified object of the specified component.  That object's error row disposition directed the component to fail on error.

//
// MessageId: DTS_E_XMLSRC_INDUCEDTRANSFORMFAILUREONERROR
//
// MessageText:
//
// The "%1!s!" failed because error code 0x%2!8.8X! occurred, and the error row disposition on "%3!s!" at "%4!s!" specifies failure on error. An error occurred on the specified object of the specified component.
//
#define DTS_E_XMLSRC_INDUCEDTRANSFORMFAILUREONERROR ((HRESULT)0xC02090FBL)

//
// MessageId: DTS_E_SQLCEDESTSTATIC_FAILEDTOSETVALUES
//
// MessageText:
//
// The SQLCE destination could not set the column values for the row.
//
#define DTS_E_SQLCEDESTSTATIC_FAILEDTOSETVALUES ((HRESULT)0xC0209291L)

//
// MessageId: DTS_E_SQLCEDESTSTATIC_FAILEDTOINSERT
//
// MessageText:
//
// The SQLCE destination could not insert the row.
//
#define DTS_E_SQLCEDESTSTATIC_FAILEDTOINSERT ((HRESULT)0xC0209292L)

//
// MessageId: DTS_E_TXFUZZYLOOKUP_OLEDBERR_LOADCOLUMNMETADATA
//
// MessageText:
//
// Encountered OLEDB error while loading column metadata.
//
#define DTS_E_TXFUZZYLOOKUP_OLEDBERR_LOADCOLUMNMETADATA ((HRESULT)0xC0209293L)

////////////////////////////////////////////////////////////////////////////
// Check the SQLCommand property, the select statement must yield at least one column.

//
// MessageId: DTS_E_TXFUZZYLOOKUP_TOOFEWREFERENCECOLUMNS
//
// MessageText:
//
// Lookup reference metadata contains too few columns.
//
#define DTS_E_TXFUZZYLOOKUP_TOOFEWREFERENCECOLUMNS ((HRESULT)0xC0209294L)

//
// MessageId: DTS_E_TXSCD_OLEDBERR_LOADCOLUMNMETADATA
//
// MessageText:
//
// Encountered OLEDB error while loading column metadata.
//
#define DTS_E_TXSCD_OLEDBERR_LOADCOLUMNMETADATA ((HRESULT)0xC0209295L)

////////////////////////////////////////////////////////////////////////////
// Check the SQLCommand property, the select statement must yield at least one column.

//
// MessageId: DTS_E_TXSCD_TOOFEWREFERENCECOLUMNS
//
// MessageText:
//
// Lookup reference metadata contains too few columns.
//
#define DTS_E_TXSCD_TOOFEWREFERENCECOLUMNS ((HRESULT)0xC0209296L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of ColumnInfo structs

//
// MessageId: DTS_E_TXSCD_MALLOCERR_REFERENCECOLUMNINFO
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXSCD_MALLOCERR_REFERENCECOLUMNINFO ((HRESULT)0xC0209297L)

////////////////////////////////////////////////////////////////////////////
// Could not allocate an array of BUFFCOL structs for creation of main workspace

//
// MessageId: DTS_E_TXSCD_MALLOCERR_BUFFCOL
//
// MessageText:
//
// Unable to allocate memory.
//
#define DTS_E_TXSCD_MALLOCERR_BUFFCOL    ((HRESULT)0xC0209298L)

////////////////////////////////////////////////////////////////////////////
// Could not create main workspace buffer

//
// MessageId: DTS_E_TXSCD_MAINWORKSPACE_CREATEERR
//
// MessageText:
//
// Unable to create workspace buffer.
//
#define DTS_E_TXSCD_MAINWORKSPACE_CREATEERR ((HRESULT)0xC0209299L)

//
// MessageId: DTS_E_DTPXMLDOMCREATEERROR
//
// MessageText:
//
// Unable to instantiate XML DOM document, please verify that MSXML binaries are properly installed and registered.
//
#define DTS_E_DTPXMLDOMCREATEERROR       ((HRESULT)0xC020929AL)

////////////////////////////////////////////////////////////////////////////
// Internal error, this will happen if the runtime is giving the pipeline xml module bad/malformed XML to load from.

//
// MessageId: DTS_E_DTPXMLDOMLOADERROR
//
// MessageText:
//
// Unable to load XML data into a local DOM for processing.
//
#define DTS_E_DTPXMLDOMLOADERROR         ((HRESULT)0xC020929BL)

////////////////////////////////////////////////////////////////////////////
// The runtime variable must be of type Object

//
// MessageId: DTS_E_RSTDESTBADVARIABLETYPE
//
// MessageText:
//
// The type of the runtime variable "%1!s!" is incorrect. The runtime variable type must be Object.
//
#define DTS_E_RSTDESTBADVARIABLETYPE     ((HRESULT)0xC020929CL)

////////////////////////////////////////////////////////////////////////////
// The XML source contains multiple inline schema nodes.

//
// MessageId: DTS_E_XMLDATAREADERMULTIPLEINLINEXMLSCHEMASNOTSUPPORTED
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data. Multiple inline schemas are not supported.
//
#define DTS_E_XMLDATAREADERMULTIPLEINLINEXMLSCHEMASNOTSUPPORTED ((HRESULT)0xC020929EL)

////////////////////////////////////////////////////////////////////////////
// The XSD specified uses 'anyType', which is not supported and should be changed to a specific type that is supported.

//
// MessageId: DTS_E_XMLDATAREADERANYTYPENOTSUPPORTED
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data. The content of an element can not be declared as anyType.
//
#define DTS_E_XMLDATAREADERANYTYPENOTSUPPORTED ((HRESULT)0xC020929FL)

//
// MessageId: DTS_E_XMLDATAREADERGROUPREFNOTSUPPORTED
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data. The content of an element can not contain a reference (ref) to a group.
//
#define DTS_E_XMLDATAREADERGROUPREFNOTSUPPORTED ((HRESULT)0xC02092A0L)

//
// MessageId: DTS_E_XMLDATAREADERMIXEDCONTENTFORCOMPLEXTYPESNOTSUPPORTED
//
// MessageText:
//
// The XML Source Adapter does not support mixed content model on Complex Types.
//
#define DTS_E_XMLDATAREADERMIXEDCONTENTFORCOMPLEXTYPESNOTSUPPORTED ((HRESULT)0xC02092A1L)

////////////////////////////////////////////////////////////////////////////
// The XML source contains an inline schema that is not the first child node.

//
// MessageId: DTS_E_XMLDATAREADERINLINESCHEMAFOUNDINSOURCEXML
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data. An inline schema must be the first child node in the source Xml.
//
#define DTS_E_XMLDATAREADERINLINESCHEMAFOUNDINSOURCEXML ((HRESULT)0xC02092A2L)

////////////////////////////////////////////////////////////////////////////
// The XML source does not contain an inline schema, but an inline schema was expected.

//
// MessageId: DTS_E_XMLDATAREADERNOINLINESCHEMAFOUND
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data. No inline schema was found in the source XML, but the "UseInlineSchema" property was set to true.
//
#define DTS_E_XMLDATAREADERNOINLINESCHEMAFOUND ((HRESULT)0xC02092A3L)

//
// MessageId: DTS_E_CONNECTIONMANAGERTRANSACTEDANDRETAINEDINBULKINSERT
//
// MessageText:
//
// The component cannot use a connection manager that retains its connection in a transaction with fastload or bulk insert.
//
#define DTS_E_CONNECTIONMANAGERTRANSACTEDANDRETAINEDINBULKINSERT ((HRESULT)0xC02092A4L)

//
// MessageId: DTS_E_OUTPUTREDIRECTINTRANSACTIONNOTALLOWED
//
// MessageText:
//
// The %1!s! cannot be set to redirect on error using a connection in a transaction.
//
#define DTS_E_OUTPUTREDIRECTINTRANSACTIONNOTALLOWED ((HRESULT)0xC02092A5L)

////////////////////////////////////////////////////////////////////////////
// No input or output column was found with an external metadata column ID corresponding to an external metadata column.

//
// MessageId: DTS_E_FOUNDORPHANEDEXTERNALMETADATACOLUMN
//
// MessageText:
//
// The %1!s! does not have a corresponding input or output column.
//
#define DTS_E_FOUNDORPHANEDEXTERNALMETADATACOLUMN ((HRESULT)0xC02092A6L)

////////////////////////////////////////////////////////////////////////////
// No columns are selected or mapped

//
// MessageId: DTS_E_RAWDESTNOINPUTCOLUMNS
//
// MessageText:
//
// There is no selected column to be written to the file.
//
#define DTS_E_RAWDESTNOINPUTCOLUMNS      ((HRESULT)0xC02092A9L)

////////////////////////////////////////////////////////////////////////////
// Blob data type used

//
// MessageId: DTS_E_RAWDESTBLOBDATATYPE
//
// MessageText:
//
// The %1!s! has an invalid data type. Columns with data types DT_IMAGE, DT_TEXT and DT_NTEXT cannot be written to raw files.
//
#define DTS_E_RAWDESTBLOBDATATYPE        ((HRESULT)0xC02092AAL)

////////////////////////////////////////////////////////////////////////////
// Write Option and IsUsed flag mismatch

//
// MessageId: DTS_E_RAWDESTWRONGEXTERNALMETADATAUSAGE
//
// MessageText:
//
// The external metadata collection is improperly used by this component. The component should use external metadata when appending or truncating an existing file. Otherwise, the external metadata is not needed.
//
#define DTS_E_RAWDESTWRONGEXTERNALMETADATAUSAGE ((HRESULT)0xC02092ABL)

////////////////////////////////////////////////////////////////////////////
// Mapped input column when Write Option is  Create Always

//
// MessageId: DTS_E_RAWDESTMAPPEDINPUTCOLUMN
//
// MessageText:
//
// The %1!s! is mapped to an external metadata column with the id %2!d!. Input columns should not be mapped to external metadata columns when selected Write Option value is Create Always.
//
#define DTS_E_RAWDESTMAPPEDINPUTCOLUMN   ((HRESULT)0xC02092ACL)

////////////////////////////////////////////////////////////////////////////
// The file cannot be opened for reading the metadata.

//
// MessageId: DTS_E_RAWFILECANTOPENFORMETADATA
//
// MessageText:
//
// The file  cannot be opened for reading the metadata. If the file does not exist, and the component has already defined external metadata, you can set the "ValidateExternalMetadata" property to "false" and the file will be created at the runtime.
//
#define DTS_E_RAWFILECANTOPENFORMETADATA ((HRESULT)0xC02092ADL)

////////////////////////////////////////////////////////////////////////////
// Failed to access LOB data from a column in the data flow buffer.

//
// MessageId: DTS_E_FAILEDTOACCESSLOBCOLUMN
//
// MessageText:
//
// Failed to access LOB data from the data flow buffer for data source column "%1!s!" with error code 0x%2!8.8X!.
//
#define DTS_E_FAILEDTOACCESSLOBCOLUMN    ((HRESULT)0xC02092AEL)

////////////////////////////////////////////////////////////////////////////
// An error occurred parsing the XML data or the XSD.

//
// MessageId: DTS_E_XMLSRCUNABLETOPROCESSXMLDATA
//
// MessageText:
//
// The %1!s! was unable to process the XML data. %2!s!
//
#define DTS_E_XMLSRCUNABLETOPROCESSXMLDATA ((HRESULT)0xC02092AFL)

//
// MessageId: DTS_E_XMLSRCSTATIC_UNABLETOPROCESSXMLDATA
//
// MessageText:
//
// The XML Source Adapter was unable to process the XML data.
//
#define DTS_E_XMLSRCSTATIC_UNABLETOPROCESSXMLDATA ((HRESULT)0xC02092B0L)

////////////////////////////////////////////////////////////////////////////
// Invalid access mode

//
// MessageId: DTS_E_RAWINVALIDACCESSMODE
//
// MessageText:
//
// The value %1!d! is not recognized as a valid access mode.
//
#define DTS_E_RAWINVALIDACCESSMODE       ((HRESULT)0xC02092B1L)

////////////////////////////////////////////////////////////////////////////
// There are columns that do not exist in the data source or created with missing metadata.

//
// MessageId: DTS_E_INCOMPLETEDATASOURCECOLUMNFOUND
//
// MessageText:
//
// Complete metadata information for the data source column "%1!s!" is not available.  Make sure the column is correctly defined in the data source.
//
#define DTS_E_INCOMPLETEDATASOURCECOLUMNFOUND ((HRESULT)0xC02092B2L)

////////////////////////////////////////////////////////////////////////////
// SetOutputColumnDataTypeProperties was called to change something other than the length for the four audit columns : User Name, Package Name, Task Name and Machine Name.

//
// MessageId: DTS_E_TXAUDIT_ONLYSTRINGLENGTHCHANGEALLOWED
//
// MessageText:
//
// Only lengths of User Name column, Package Name column, Task Name column and Machine Name column can be changed.  All other audit column datatype information is read only.
//
#define DTS_E_TXAUDIT_ONLYSTRINGLENGTHCHANGEALLOWED ((HRESULT)0xC02092B3L)

////////////////////////////////////////////////////////////////////////////
// The OLE DB provider did not return a rowset after executing a SQL command.

//
// MessageId: DTS_E_ROWSETUNAVAILABLE
//
// MessageText:
//
// A rowset based on the SQL command was not returned by the OLE DB provider.
//
#define DTS_E_ROWSETUNAVAILABLE          ((HRESULT)0xC02092B4L)

//
// MessageId: DTS_E_COMMITFAILED
//
// MessageText:
//
// A commit failed.
//
#define DTS_E_COMMITFAILED               ((HRESULT)0xC02092B5L)

//
// MessageId: DTS_E_USEBINARYFORMATREQUIRESANSIFILE
//
// MessageText:
//
// The custom property "%1!s!" on %2!s! can only be used with ANSI files.
//
#define DTS_E_USEBINARYFORMATREQUIRESANSIFILE ((HRESULT)0xC02092B6L)

//
// MessageId: DTS_E_USEBINARYFORMATREQUIRESBYTES
//
// MessageText:
//
// The custom property "%1!s!" on %2!s! can only be used with DT_BYTES.
//
#define DTS_E_USEBINARYFORMATREQUIRESBYTES ((HRESULT)0xC02092B7L)

//
// MessageId: DTS_E_OLEDB_NOPROVIDER_ERROR
//
// MessageText:
//
// The requested OLE DB provider %2!s! is not registered. If the 32-bit driver is not installed, run the package in 64-bit mode. Error code: 0x%1!8.8X!.
//
#define DTS_E_OLEDB_NOPROVIDER_ERROR     ((HRESULT)0xC0209302L)

//
// MessageId: DTS_E_OLEDB_NOPROVIDER_64BIT_ERROR
//
// MessageText:
//
// The requested OLE DB provider %2!s! is not registered. If the 64-bit driver is not installed, run the package in 32-bit mode. Error code: 0x%1!8.8X!.
//
#define DTS_E_OLEDB_NOPROVIDER_64BIT_ERROR ((HRESULT)0xC0209303L)

////////////////////////////////////////////////////////////////////////////
// More than one mapping was made to the same cache column

//
// MessageId: DTS_E_MULTICACHECOLMAPPINGS
//
// MessageText:
//
// The cache column, "%1!s!", is mapped to more than one column. Remove the duplicate column mappings.
//
#define DTS_E_MULTICACHECOLMAPPINGS      ((HRESULT)0xC0209306L)

//
// MessageId: DTS_E_COLNOTMAPPEDTOCACHECOL
//
// MessageText:
//
// The %1!s! is not mapped to valid cache column.
//
#define DTS_E_COLNOTMAPPEDTOCACHECOL     ((HRESULT)0xC0209307L)

//
// MessageId: DTS_E_CACHECOLDATATYPEINCOMPAT
//
// MessageText:
//
// Cannot map the input column, "%1!s!", and the cache column, "%2!s!", because the data types do not match.
//
#define DTS_E_CACHECOLDATATYPEINCOMPAT   ((HRESULT)0xC0209308L)

//
// MessageId: DTS_E_INCORRECTINPUTCACHECOLCOUNT
//
// MessageText:
//
// The number of input columns does not match the number of cache columns.
//
#define DTS_E_INCORRECTINPUTCACHECOLCOUNT ((HRESULT)0xC0209309L)

//
// MessageId: DTS_E_INVALIDCACHEFILENAME
//
// MessageText:
//
// The cache file name is either not provided or is not valid. Provide a valid cache file name.
//
#define DTS_E_INVALIDCACHEFILENAME       ((HRESULT)0xC020930AL)

////////////////////////////////////////////////////////////////////////////
// The index position of a column in cache file does not match that of connection manager

//
// MessageId: DTS_E_CACHECOLINDEXPOSMISMATCH
//
// MessageText:
//
// The index position of column, "%1!s!", is different from index position of Cache connection manager column, "%2!s!".
//
#define DTS_E_CACHECOLINDEXPOSMISMATCH   ((HRESULT)0xC020930BL)

////////////////////////////////////////////////////////////////////////////
// Failed to load cache

//
// MessageId: DTS_E_FAILEDTOLOADCACHE
//
// MessageText:
//
// Failed to load the cache from file, "%1!s!".
//
#define DTS_E_FAILEDTOLOADCACHE          ((HRESULT)0xC020930CL)

////////////////////////////////////////////////////////////////////////////
// Cache reference column is not an index column

//
// MessageId: DTS_E_TXLOOKUP_REFCOLUMNISNOTINDEX
//
// MessageText:
//
// The lookup input column %1!s! references non-index cache column %2!s!.
//
#define DTS_E_TXLOOKUP_REFCOLUMNISNOTINDEX ((HRESULT)0xC020930DL)

//
// MessageId: DTS_E_FAILEDTOGETCONNECTIONSTRING
//
// MessageText:
//
// Failed to get the connection string.
//
#define DTS_E_FAILEDTOGETCONNECTIONSTRING ((HRESULT)0xC020930EL)

//
// MessageId: DTS_E_CACHECOLDATATYPEPROPINCOMPAT
//
// MessageText:
//
// Cannot map the input column, "%1!s!", and the cache column, "%2!s!", because one or more data type properties do not match.
//
#define DTS_E_CACHECOLDATATYPEPROPINCOMPAT ((HRESULT)0xC020930FL)

////////////////////////////////////////////////////////////////////////////
// A cache column was not found

//
// MessageId: DTS_E_CACHECOLUMNOTFOUND
//
// MessageText:
//
// Cache column "%1!s!" was not found in the cache.
//
#define DTS_E_CACHECOLUMNOTFOUND         ((HRESULT)0xC0209311L)

////////////////////////////////////////////////////////////////////////////
// Cannot map to a cache column

//
// MessageId: DTS_E_CACHECOLUMNMAPPINGFAILED
//
// MessageText:
//
// Failed to map %1!s! to a cache column. The hresult is 0x%2!8.8X!.
//
#define DTS_E_CACHECOLUMNMAPPINGFAILED   ((HRESULT)0xC0209312L)

////////////////////////////////////////////////////////////////////////////
// Cache destination cannot write to file, because it is already loaded from file

//
// MessageId: DTS_E_CACHELOADEDFROMFILE
//
// MessageText:
//
// The %1!s! cannot write to the cache because the cache has been loaded from a file by %2!s!.
//
#define DTS_E_CACHELOADEDFROMFILE        ((HRESULT)0xC0209313L)

////////////////////////////////////////////////////////////////////////////
// The cache is being reloaded from a different file.

//
// MessageId: DTS_E_CACHERELOADEDDIFFERENTFILES
//
// MessageText:
//
// The %1!s! cannot load the cache from file "%2!s!" because the cache has already been loaded from file "%3!s!".
//
#define DTS_E_CACHERELOADEDDIFFERENTFILES ((HRESULT)0xC0209314L)

////////////////////////////////////////////////////////////////////////////
// The component has unused output

//
// MessageId: DTS_E_OUTPUTNOTUSED
//
// MessageText:
//
// The output with ID %1!d! of Aggregate component is not used by any component. Please either remove it or associate it with an input of some component.
//
#define DTS_E_OUTPUTNOTUSED              ((HRESULT)0xC0209316L)

//
// MessageId: DTS_E_CACHEFILEWRITEFAILED
//
// MessageText:
//
// The %1!s! failed to write the cache to file "%2!s!". The hresult is 0x%3!8.8X!.
//
#define DTS_E_CACHEFILEWRITEFAILED       ((HRESULT)0xC0209317L)

////////////////////////////////////////////////////////////////////////////
// The datatype of this XML element or attribute as represented in the XML schema has changed since the last time the XML schema was mapped to SSIS outputs.

//
// MessageId: DTS_E_XMLDATATYPECHANGED
//
// MessageText:
//
// The XML schema data type information for "%1!s!" on  element "%2!s!" has changed.  Please re-initialize the metadata for this component and review column mappings.
//
#define DTS_E_XMLDATATYPECHANGED         ((HRESULT)0xC0209318L)

//
// MessageId: DTS_E_TXLOOKUP_UNUSEDINPUTCOLUMN
//
// MessageText:
//
// %1!s! not used in join or copy. Please remove the unused column from the input column list.
//
#define DTS_E_TXLOOKUP_UNUSEDINPUTCOLUMN ((HRESULT)0xC0209319L)

//
// MessageId: DTS_E_SORTSTACKOVERFLOW
//
// MessageText:
//
// The sort failed due to a stack overflow while sorting an incoming buffer.  Please reduce the DefaultBufferMaxRows property on the Data Flow Task.
//
#define DTS_E_SORTSTACKOVERFLOW          ((HRESULT)0xC020931AL)

////////////////////////////////////////////////////////////////////////////
// Class Not Registered error when trying to connect to a well know older OLEDB provider

//
// MessageId: DTS_E_OLEDB_OLDPROVIDER_ERROR
//
// MessageText:
//
// Consider changing the PROVIDER in the connection string to %1!s! or visit http://www.microsoft.com/downloads to find and install support for %2!s!.
//
#define DTS_E_OLEDB_OLDPROVIDER_ERROR    ((HRESULT)0xC020F42AL)

////////////////////////////////////////////////////////////////////////////
// File is not found

//
// MessageId: DTS_E_XMLSRCFILENOTFOUND
//
// MessageText:
//
// The file "%1!s!" was not found. Please verify the file path and try again.
//
#define DTS_E_XMLSRCFILENOTFOUND         ((HRESULT)0xC020F440L)

////////////////////////////////////////////////////////////////////////////
// User has not provided a table/view name or sql command

//
// MessageId: DTS_E_LOOKUPEMPTYSQLCOMMAND
//
// MessageText:
//
// Select a table or view that contains the reference dataset, or specify a SQL statement to generate the reference dataset
//
#define DTS_E_LOOKUPEMPTYSQLCOMMAND      ((HRESULT)0xC020F441L)

////////////////////////////////////////////////////////////////////////////
// Duplicate rows in the reference data set.

//
// MessageId: DTS_E_TXLOOKUP_DUPLICATE_KEYS
//
// MessageText:
//
// The %1!s! encountered duplicate reference key values when caching reference data. This error occurs in Full Cache mode only. Either remove the duplicate key values, or change the cache mode to PARTIAL or NO_CACHE.
//
#define DTS_E_TXLOOKUP_DUPLICATE_KEYS    ((HRESULT)0xC020F442L)

////////////////////////////////////////////////////////////////////////////
// Null values in the inferred indicator column.

//
// MessageId: DTS_E_TXSCD_INFERREDINDICATORNULL
//
// MessageText:
//
// Inferred indicator column "%1!s!" contains a null value. Inferred indicator columns should be Boolean columns without null values.
//
#define DTS_E_TXSCD_INFERREDINDICATORNULL ((HRESULT)0xC020F443L)

////////////////////////////////////////////////////////////////////////////
// Error in column-level processing.

//
// MessageId: DTS_E_MGDSRC_ERROR
//
// MessageText:
//
// The error "%1!s!" occurred while processing "%2!s!".
//
#define DTS_E_MGDSRC_ERROR               ((HRESULT)0xC020F444L)

////////////////////////////////////////////////////////////////////////////
// Arithmetic overflow when calculating the size of a hash table.

//
// MessageId: DTS_E_HASHTABLE_SIZEOVERFLOW
//
// MessageText:
//
// A hashtable with %1!lu! entries could not be created.
//
#define DTS_E_HASHTABLE_SIZEOVERFLOW     ((HRESULT)0xC020F445L)

////////////////////////////////////////////////////////////////////////////
// An expected attribute is missing from the pipeline xml.

//
// MessageId: DTS_E_DTPMISSINGATTRIBUTE
//
// MessageText:
//
// An expected attribute "%1!s!" was not found.
//
#define DTS_E_DTPMISSINGATTRIBUTE        ((HRESULT)0xC020F44CL)

////////////////////////////////////////////////////////////////////////////
// An expected element is missing from the pipeline xml.

//
// MessageId: DTS_E_DTPMISSINGELEMENT
//
// MessageText:
//
// An expected element "%1!s!" was not found.
//
#define DTS_E_DTPMISSINGELEMENT          ((HRESULT)0xC020F44DL)

////////////////////////////////////////////////////////////////////////////
// Corrupt file or we really have zero columns and therefore no data.

//
// MessageId: DTS_I_RAWSOURCENOCOLUMNS
//
// MessageText:
//
// The raw source adapter opened a file, but the file contains no columns. The adapter will not produce data. This could indicate a damaged file, or that there are zero columns and, therefore, no data.
//
#define DTS_I_RAWSOURCENOCOLUMNS         ((HRESULT)0x4020206DL)

//
// MessageId: DTS_I_OLEDBINFORMATIONALMESSAGE
//
// MessageText:
//
// An OLE DB informational message is available.
//
#define DTS_I_OLEDBINFORMATIONALMESSAGE  ((HRESULT)0x402020DAL)

//
// MessageId: DTS_I_TXFUZZYLOOKUP_EXACT_MATCH_PERF_COLLATIONS_DONT_MATCH
//
// MessageText:
//
// Fuzzy match performance can be improved if the exact join FuzzyComparisonFlags on the input column "%1!s!" are set to match with the default SQL collation for reference table column "%2!s!".  It is also necessary that no fold flags are set in FuzzyComparisonFlagsEx.
//
#define DTS_I_TXFUZZYLOOKUP_EXACT_MATCH_PERF_COLLATIONS_DONT_MATCH ((HRESULT)0x40208327L)

//
// MessageId: DTS_I_TXFUZZYLOOKUP_EXACT_MATCH_PERF_INDEX_MISSING
//
// MessageText:
//
// Fuzzy match performance can be improved if an index is created upon the reference table across all of the specified exact match columns.
//
#define DTS_I_TXFUZZYLOOKUP_EXACT_MATCH_PERF_INDEX_MISSING ((HRESULT)0x40208328L)

////////////////////////////////////////////////////////////////////////////
// There is more than one error output and there are one or more dispositions set to redirect

//
// MessageId: DTS_I_DISPSNOTREVIEWED
//
// MessageText:
//
// Error and truncation dispositions were not reviewed. Make sure this component is configured to redirect rows to error outputs, if you wish to further transform those rows.
//
#define DTS_I_DISPSNOTREVIEWED           ((HRESULT)0x40208387L)

//
// MessageId: DTS_I_TXAGG_WORKSPACE_REHASH
//
// MessageText:
//
// The Aggregate transformation has encountered %1!d! key combinations. It has to re-hash data because the number of key combinations is more than expected. The component can be configured to avoid data re-hash by adjusting the Keys, KeyScale, and AutoExtendFactor properties.
//
#define DTS_I_TXAGG_WORKSPACE_REHASH     ((HRESULT)0x402090DAL)

//
// MessageId: DTS_I_TXAGG_COUNTDISTINCT_REHASH
//
// MessageText:
//
// The Aggregate transformation has encountered %1!d! distinct values while performing a "count distinct" aggregation on "%2!s!". The transformation will re-hash data because the number of distinct values is more than expected. The component can be configured to avoid data re-hash by adjusting the CountDistinctKeys, CountDistinctKeyScale, and AutoExtendFactor properties.
//
#define DTS_I_TXAGG_COUNTDISTINCT_REHASH ((HRESULT)0x402090DBL)

//
// MessageId: DTS_I_STARTPROCESSINGFILE
//
// MessageText:
//
// The processing of file "%1!s!" has started.
//
#define DTS_I_STARTPROCESSINGFILE        ((HRESULT)0x402090DCL)

//
// MessageId: DTS_I_FINISHPROCESSINGFILE
//
// MessageText:
//
// The processing of file "%1!s!" has ended.
//
#define DTS_I_FINISHPROCESSINGFILE       ((HRESULT)0x402090DDL)

//
// MessageId: DTS_I_TOTALDATAROWSPROCESSEDFORFILE
//
// MessageText:
//
// The total number of data rows processed for file "%1!s!" is %2!I64d!.
//
#define DTS_I_TOTALDATAROWSPROCESSEDFORFILE ((HRESULT)0x402090DEL)

//
// MessageId: DTS_I_FINALCOMMITSTARTED
//
// MessageText:
//
// The final commit for the data insertion in "%1!s!" has started.
//
#define DTS_I_FINALCOMMITSTARTED         ((HRESULT)0x402090DFL)

//
// MessageId: DTS_I_FINALCOMMITENDED
//
// MessageText:
//
// The final commit for the data insertion  in "%1!s!" has ended.
//
#define DTS_I_FINALCOMMITENDED           ((HRESULT)0x402090E0L)

//
// MessageId: DTS_I_BEGINHASHINGCACHE
//
// MessageText:
//
// %1!u! rows are added to the cache. The system is processing the rows.
//
#define DTS_I_BEGINHASHINGCACHE          ((HRESULT)0x402090E1L)

//
// MessageId: DTS_I_SUCCEEDEDHASHINGCACHE
//
// MessageText:
//
// The %1!s! processed %2!u! rows in the cache. The processing time was %3!s! seconds. The cache used %4!I64u! bytes of memory.
//
#define DTS_I_SUCCEEDEDHASHINGCACHE      ((HRESULT)0x402090E2L)

//
// MessageId: DTS_I_FAILEDHASHINGCACHE
//
// MessageText:
//
// The %1!s! failed to process the rows in the cache.  The processing time was %2!s! second(s).
//
#define DTS_I_FAILEDHASHINGCACHE         ((HRESULT)0x402090E3L)

//
// MessageId: DTS_I_SUCCEEDEDPREPARINGCACHE
//
// MessageText:
//
// The %1!s! succeeded in preparing the cache. The preparation time was %2!s! seconds.
//
#define DTS_I_SUCCEEDEDPREPARINGCACHE    ((HRESULT)0x402090E4L)

////////////////////////////////////////////////////////////////////////////
// Lookup in partial mode diagnostics

//
// MessageId: DTS_I_TXLOOKUP_PARTIALPERF
//
// MessageText:
//
// The %1!s! has performed the following operations: processed %2!I64u! rows, issued %3!I64u! database commands to the reference database, and performed %4!I64u! lookups using partial cache.
//
#define DTS_I_TXLOOKUP_PARTIALPERF       ((HRESULT)0x40209314L)

////////////////////////////////////////////////////////////////////////////
// Lookup in partial mode with miss cache diagnostics

//
// MessageId: DTS_I_TXLOOKUP_PARTIALPERF2
//
// MessageText:
//
// The %1!s! has performed the following operations: processed %2!I64u! rows, issued %3!I64u! database commands to the reference database, performed %4!I64u! lookups using partial cache and %5!I64u! lookups using the cache for rows with no matching entries in the initial lookup.
//
#define DTS_I_TXLOOKUP_PARTIALPERF2      ((HRESULT)0x40209315L)

//
// MessageId: DTS_I_CACHEFILEWRITESTARTED
//
// MessageText:
//
// The %1!s! is writing the cache to file "%2!s!".
//
#define DTS_I_CACHEFILEWRITESTARTED      ((HRESULT)0x40209316L)

//
// MessageId: DTS_I_CACHEFILEWRITESUCCEEDED
//
// MessageText:
//
// The %1!s! has written the cache to file "%2!s!".
//
#define DTS_I_CACHEFILEWRITESUCCEEDED    ((HRESULT)0x40209317L)

//
// MessageId: DTS_I_PIVOTUNMATCHEDKEYS
//
// MessageText:
//
// Un-matched Pivot Key Values:
//
#define DTS_I_PIVOTUNMATCHEDKEYS         ((HRESULT)0x40209322L)

//
// MessageId: DTS_I_ROWSADDEDTOCACHE
//
// MessageText:
//
// The number of unique rows added to the cache is %1!u!.
//
#define DTS_I_ROWSADDEDTOCACHE           ((HRESULT)0x40209340L)

////////////////////////////////////////////////////////////////////////////
// Maximum insert commit size is set to 0 in an OLE DB Destination component.

//
// MessageId: DTS_I_OLEDBDESTZEROMAXCOMMITSIZE
//
// MessageText:
//
// The Maximum insert commit size property of the OLE DB destination "%1!s!" is set to 0. This property setting can cause the running package to stop responding. For more information, see the F1 Help topic for OLE DB Destination Editor (Connection Manager Page).
//
#define DTS_I_OLEDBDESTZEROMAXCOMMITSIZE ((HRESULT)0x4020F42CL)

////////////////////////////////////////////////////////////////////////////
// Trucation occurred at some point during the evaluation of the expression, including, possibly, at an intermediate step.

//
// MessageId: DTS_S_EXPREVALTRUNCATIONOCCURRED
//
// MessageText:
//
// A truncation occurred during evaluation of the expression. The truncation occurred during evaluation, which may include any point in an intermediate step.
//
#define DTS_S_EXPREVALTRUNCATIONOCCURRED ((HRESULT)0x00200001L)

//
// MessageId: DTS_W_PARTIALROWFOUNDATENDOFFILE
//
// MessageText:
//
// There is a partial row at the end of the file.
//
#define DTS_W_PARTIALROWFOUNDATENDOFFILE ((HRESULT)0x8020200FL)

////////////////////////////////////////////////////////////////////////////
// Make sure the header row delimiter and the number of header rows to skip are correct.

//
// MessageId: DTS_W_ENDOFFILEREACHWHILEREADINGHEADERROWS
//
// MessageText:
//
// The end of the data file was reached while reading header rows. Make sure the header row delimiter and the number of header rows to skip are correct.
//
#define DTS_W_ENDOFFILEREACHWHILEREADINGHEADERROWS ((HRESULT)0x8020202BL)

////////////////////////////////////////////////////////////////////////////
// The raw files have different sort orders

//
// MessageId: DTS_W_RAWSORTORDERMISMATCH
//
// MessageText:
//
// The sort key position or comparison flag values for the "%1!s!" column in the appended data do not match the corresponding values for the"%1!s!" column in the existing file. Appending the data to the existing file will change the sort order information.
//
#define DTS_W_RAWSORTORDERMISMATCH       ((HRESULT)0x80202063L)

//
// MessageId: DTS_W_CANTRETRIEVECODEPAGEFROMOLEDBPROVIDER
//
// MessageText:
//
// Cannot retrieve the column code page info from the OLE DB provider.  If the component supports the "%1!s!" property, the code page from that property will be used.  Change the value of the property if the current string code page values are incorrect.  If the component does not support the property, the code page from the component's locale ID will be used.
//
#define DTS_W_CANTRETRIEVECODEPAGEFROMOLEDBPROVIDER ((HRESULT)0x80202066L)

//
// MessageId: DTS_W_TXSORTSORTISTHESAME
//
// MessageText:
//
// The data is already sorted as specified so the transform can be removed.
//
#define DTS_W_TXSORTSORTISTHESAME        ((HRESULT)0x802020F7L)

//
// MessageId: DTS_W_NOPIPELINEDATATYPEMAPPINGAVAILABLE
//
// MessageText:
//
// The %1!s! references an external data type that cannot be mapped to a Data Flow task data type. The Data Flow task data type DT_WSTR will be used instead.
//
#define DTS_W_NOPIPELINEDATATYPEMAPPINGAVAILABLE ((HRESULT)0x8020400DL)

////////////////////////////////////////////////////////////////////////////
// The expression contains a static truncation (truncation of a fixed value).

//
// MessageId: DTS_W_STATICTRUNCATIONINEXPRESSION
//
// MessageText:
//
// The expression "%1!s!" will always result in a truncation of data. The expression contains a static truncation (the truncation of a fixed value).
//
#define DTS_W_STATICTRUNCATIONINEXPRESSION ((HRESULT)0x802070CCL)

//
// MessageId: DTS_W_UNMAPPEDINPUTCOLUMN
//
// MessageText:
//
// The input column "%1!s!" with ID %2!d! at index %3!d! is unmapped. The lineage ID for the column is zero.
//
#define DTS_W_UNMAPPEDINPUTCOLUMN        ((HRESULT)0x8020820CL)

////////////////////////////////////////////////////////////////////////////
// Happens when the delimiters used to tokenize fields don't match - this can have unknown effects on the matching behavior/results.

//
// MessageId: DTS_W_TXFUZZYLOOKUP_DELIMITERS_DONT_MATCH
//
// MessageText:
//
// The specified delimiters do not match the delimiters used to build the pre-existing match index "%1!s!". This error occurs when the delimiters used to tokenize fields do not match. This can have unknown effects on the matching behavior or results.
//
#define DTS_W_TXFUZZYLOOKUP_DELIMITERS_DONT_MATCH ((HRESULT)0x80208305L)

//
// MessageId: DTS_W_TXFUZZYLOOKUP_MAXRESULTS_IS_ZERO
//
// MessageText:
//
// The MaxOutputMatchesPerInput property on the Fuzzy Lookup transformation is zero. No results will be produced.
//
#define DTS_W_TXFUZZYLOOKUP_MAXRESULTS_IS_ZERO ((HRESULT)0x80208308L)

////////////////////////////////////////////////////////////////////////////
// Either there are no joins specified or all joins are of type 'Exact'.

//
// MessageId: DTS_W_TXFUZZYLOOKUP_NO_FUZZY_JOIN_COLUMNS
//
// MessageText:
//
// There were no valid input columns with JoinType column property set to Fuzzy.  Performance on Exact joins may be improved by using the Lookup transform instead of FuzzyLookup.
//
#define DTS_W_TXFUZZYLOOKUP_NO_FUZZY_JOIN_COLUMNS ((HRESULT)0x80208310L)

////////////////////////////////////////////////////////////////////////////
// Happens because timestamps are rather variable database fields with semantics that might cause the user to expect certain behavior.

//
// MessageId: DTS_W_TXFUZZYLOOKUP_TIMESTAMPCAVEAT
//
// MessageText:
//
// The reference column "%1!s!" may be a SQL timestamp column. When the fuzzy match index is built, and a copy of the reference table is made, all reference table timestamps will reflect the current state of the table at the time of the copy. Unexpected behavior may occur if the CopyReferenceTable is set to false.
//
#define DTS_W_TXFUZZYLOOKUP_TIMESTAMPCAVEAT ((HRESULT)0x8020831CL)

//
// MessageId: DTS_W_MATCHINDEXALREADYEXISTS
//
// MessageText:
//
// A table with the name '%1!s!' given for MatchIndexName already exists and DropExistingMatchIndex is set to FALSE.  Transform execution will fail unless this table is dropped, a different name is specified, or DropExisitingMatchIndex is set to TRUE.
//
#define DTS_W_MATCHINDEXALREADYEXISTS    ((HRESULT)0x80208321L)

//
// MessageId: DTS_W_TXFUZZYLOOKUP_JOINLENGTHMISMATCH
//
// MessageText:
//
// The length of input column '%1!s!' is not equal to the length of the reference column '%2!s!' that it is being matched against.
//
#define DTS_W_TXFUZZYLOOKUP_JOINLENGTHMISMATCH ((HRESULT)0x8020832BL)

//
// MessageId: DTS_W_TXFUZZYLOOKUP_CODEPAGE_MISMATCH
//
// MessageText:
//
// The code pages of the DT_STR source column "%1!s!" and the DT_STR dest column "%2!s!" do not match.  This may cause unexpected results.
//
#define DTS_W_TXFUZZYLOOKUP_CODEPAGE_MISMATCH ((HRESULT)0x8020832DL)

////////////////////////////////////////////////////////////////////////////
// SQL has a limit of 16 columns per index, so we will revert back to using the inverted index for all lookups

//
// MessageId: DTS_W_FUZZYLOOKUP_TOOMANYEXACTMATCHCOLUMNS
//
// MessageText:
//
// There are more than 16 exact match joins, so performance may not be optimal. Reduce the number of exact match joins to improve performance. SQL Server has a limit of 16 columns per index, the inverted index will be used for all lookups.
//
#define DTS_W_FUZZYLOOKUP_TOOMANYEXACTMATCHCOLUMNS ((HRESULT)0x8020832EL)

////////////////////////////////////////////////////////////////////////////
// If Exhaustive property is true, then we require that the entire reference table fit in memory.  Since a memory limit was specified, we may run out of memory.

//
// MessageId: DTS_W_FUZZYLOOKUP_MEMLIMITANDEXHAUSTIVESPECIFIED
//
// MessageText:
//
// The Exhaustive option requires that the entire reference be loaded into main memory.  Since a memory limit has been specified for the MaxMemoryUsage property, it is possible that the entire reference table will not fit within this bound and that the match operation will fail at runtime.
//
#define DTS_W_FUZZYLOOKUP_MEMLIMITANDEXHAUSTIVESPECIFIED ((HRESULT)0x80208350L)

//
// MessageId: DTS_W_FUZZYLOOKUP_EXACTMATCHCOLUMNSEXCEEDBYTELIMIT
//
// MessageText:
//
// The cumulative lengths of the columns specified in the exact match joins exceeds the 900 byte limit for index keys.  Fuzzy Lookup creates an index on the exact match columns to increase lookup performance and there is a possibility that creation of this index may fail and the lookup will fall back to an alternative, possibly slower, method of finding matches. If performance is a problem, try removing some exact match join columns or reduce the maximum lengths of variable length exact match columns.
//
#define DTS_W_FUZZYLOOKUP_EXACTMATCHCOLUMNSEXCEEDBYTELIMIT ((HRESULT)0x80208351L)

//
// MessageId: DTS_W_FUZZYLOOKUP_EXACTMATCHINDEXCREATIONFAILED
//
// MessageText:
//
// Failed to create an index for exact match columns. Reverting to alternative fuzzy lookup method.
//
#define DTS_W_FUZZYLOOKUP_EXACTMATCHINDEXCREATIONFAILED ((HRESULT)0x80208352L)

//
// MessageId: DTS_W_FUZZYGROUPINGINTERNALPIPELINEWARNING
//
// MessageText:
//
// The following Fuzzy Grouping internal pipeline warning occurred with warning code 0x%1!8.8X!: "%2!s!".
//
#define DTS_W_FUZZYGROUPINGINTERNALPIPELINEWARNING ((HRESULT)0x80208353L)

////////////////////////////////////////////////////////////////////////////
// The XSD did not specify a length for the column, so a default value is being used.

//
// MessageId: DTS_W_XMLSRCOUTPUTCOLUMNLENGTHSETTODEFAULT
//
// MessageText:
//
// No maximum length was specified for the %1!s! with external data type %2!s!. The SSIS Data Flow Task data type "%3!s!" with a length of %4!d! will be used.
//
#define DTS_W_XMLSRCOUTPUTCOLUMNLENGTHSETTODEFAULT ((HRESULT)0x80208375L)

////////////////////////////////////////////////////////////////////////////
// The XSD specified an unrecognized type. The column type will be set to string by default.

//
// MessageId: DTS_W_XMLSRCOUTPUTCOLUMNDATATYPEMAPPEDTOSTRING
//
// MessageText:
//
// The %1!s! references external data type %2!s!, which cannot be mapped to a SSIS Data Flow Task data type.  The SSIS Data Flow Task data type DT_WSTR with a length of %3!d! will be used instead.
//
#define DTS_W_XMLSRCOUTPUTCOLUMNDATATYPEMAPPEDTOSTRING ((HRESULT)0x80208376L)

////////////////////////////////////////////////////////////////////////////
// The external data type was not recognized, so the column has been mapped to DT_NTEXT. The data will be converted to string.

//
// MessageId: DTS_E_ADOSRCUNKNOWNTYPEMAPPEDTONTEXT
//
// MessageText:
//
// The data type "%1!s!" found on column "%2!s!" is not supported for the %3!s!. This column will be converted to  DT_NTEXT.
//
#define DTS_E_ADOSRCUNKNOWNTYPEMAPPEDTONTEXT ((HRESULT)0x8020837EL)

////////////////////////////////////////////////////////////////////////////
// A component had an attached error output but didn't specify any dispositions to redirect

//
// MessageId: DTS_W_NOREDIRECTWITHATTACHEDERROROUTPUTS
//
// MessageText:
//
// No rows will be sent to error output(s). Configure error or truncation dispositions to redirect rows to the error output(s), or delete data flow transformations or destinations that are attached to the error output(s).
//
#define DTS_W_NOREDIRECTWITHATTACHEDERROROUTPUTS ((HRESULT)0x80208385L)

////////////////////////////////////////////////////////////////////////////
// Redirect dispositions were specified but no error outputs are attached

//
// MessageId: DTS_W_REDIRECTWITHNOATTACHEDERROROUTPUTS
//
// MessageText:
//
// Rows sent to the error output(s) will be lost. Add new data flow transformations or destinations to receive error rows, or reconfigure the component to stop redirecting rows to the error output(s).
//
#define DTS_W_REDIRECTWITHNOATTACHEDERROROUTPUTS ((HRESULT)0x80208386L)

////////////////////////////////////////////////////////////////////////////
// There is no column in the external metadata column collection for a column in the XML schema.

//
// MessageId: DTS_E_XMLSRCSCHEMACOLUMNNOTINEXTERNALMETADATA
//
// MessageText:
//
// The column %1!s! in table %2!s! in the XML schema does not have a mapping in the external metadata columns.
//
#define DTS_E_XMLSRCSCHEMACOLUMNNOTINEXTERNALMETADATA ((HRESULT)0x8020838CL)

////////////////////////////////////////////////////////////////////////////
// The XSD specified a length greater than the maximum allowed column length.

//
// MessageId: DTS_W_XMLSRCOUTPUTCOLUMNLENGTHSETTOMAXIMUM
//
// MessageText:
//
// For the %1!s! with external data type %2!s!, the XML schema specified a maxLength constraint of %3!d!, which exceeds the maximum allowed column length of %4!d!. The SSIS Data Flow Task data type "%5!s!" with a length of %6!d! will be used.
//
#define DTS_W_XMLSRCOUTPUTCOLUMNLENGTHSETTOMAXIMUM ((HRESULT)0x80208391L)

////////////////////////////////////////////////////////////////////////////
// Lookup found duplicate key values when caching metadata in PreExecute.  Can only happen in Full Cache mode.

//
// MessageId: DTS_W_TXLOOKUP_DUPLICATE_KEYS
//
// MessageText:
//
// The %1!s! encountered duplicate reference key values when caching reference data. This error occurs in Full Cache mode only. Either remove the duplicate key values, or change the cache mode to PARTIAL or NO_CACHE.
//
#define DTS_W_TXLOOKUP_DUPLICATE_KEYS    ((HRESULT)0x802090E4L)

////////////////////////////////////////////////////////////////////////////
// Data insertion is attempted for a column that has a wider length in the data flow than in the database.

//
// MessageId: DTS_W_POTENTIALTRUNCATIONFROMDATAINSERTION
//
// MessageText:
//
// Truncation may occur due to inserting data from data flow column "%1!s!" with a length of %2!d! to database column "%3!s!" with a length of %4!d!.
//
#define DTS_W_POTENTIALTRUNCATIONFROMDATAINSERTION ((HRESULT)0x802092A7L)

////////////////////////////////////////////////////////////////////////////
// Data retrieval is attempted for a column that has a wider length in the database than in the data flow.

//
// MessageId: DTS_W_POTENTIALTRUNCATIONFROMDATARETRIEVAL
//
// MessageText:
//
// Truncation may occur due to retrieving data from database column "%1!s!" with a length of %2!d! to data flow column "%3!s!" with a length of %4!d!.
//
#define DTS_W_POTENTIALTRUNCATIONFROMDATARETRIEVAL ((HRESULT)0x802092A8L)

//
// MessageId: DTS_W_ADODESTBATCHNOTSUPPORTEDFORERRORDISPOSITION
//
// MessageText:
//
// Batch mode is not currently supported when error row disposition is used. The BatchSize property will be set to 1.
//
#define DTS_W_ADODESTBATCHNOTSUPPORTEDFORERRORDISPOSITION ((HRESULT)0x802092AAL)

//
// MessageId: DTS_W_ADODESTNOROWSINSERTED
//
// MessageText:
//
// No rows were successfully inserted into the destination. This may be due to a data type mismatch between columns, or due to the use of a datatype that is unsupported by your ADO.NET provider. Since the error disposition for this component is not "Fail component", error messages are not shown here; set the error disposition to "Fail component" to see error messages here.
//
#define DTS_W_ADODESTNOROWSINSERTED      ((HRESULT)0x802092ABL)

//
// MessageId: DTS_W_ADODESTPOTENTIALDATALOSS
//
// MessageText:
//
// Potential data loss may occur due to inserting data from input column "%1!s!" with data type "%2!s!" to external column "%3!s!" with data type "%4!s!". If this is intended, an alternative way to do conversion is using a Data Conversion component before ADO NET destination component.
//
#define DTS_W_ADODESTPOTENTIALDATALOSS   ((HRESULT)0x802092ACL)

////////////////////////////////////////////////////////////////////////////
// Destination database may have been changed since user created the component

//
// MessageId: DTS_W_ADODESTEXTERNALCOLNOTMATCHSCHEMACOL
//
// MessageText:
//
// The %1!s! has been out of synchronization with the database column.  The latest column has %2!s!. Use advanced editor to refresh  available destination columns if needed.
//
#define DTS_W_ADODESTEXTERNALCOLNOTMATCHSCHEMACOL ((HRESULT)0x802092ADL)

//
// MessageId: DTS_W_ADODESTEXTERNALCOLNOTEXIST
//
// MessageText:
//
// The %1!s! does not exist in the database. It may have been removed or renamed. Use Advanced Editor to refresh the available destination columns if needed.
//
#define DTS_W_ADODESTEXTERNALCOLNOTEXIST ((HRESULT)0x802092AEL)

//
// MessageId: DTS_W_ADODESTNEWEXTCOL
//
// MessageText:
//
// A new column with name %1!s! has been added to the external database table. Use advanced editor to refresh available destination columns if needed.
//
#define DTS_W_ADODESTNEWEXTCOL           ((HRESULT)0x802092AFL)

////////////////////////////////////////////////////////////////////////////
// The user connected no-match output of lookup component, but it would not receive any data due to value of NoMatchBehavior property

//
// MessageId: DTS_W_NOMATCHOUTPUTGETSNOROWS
//
// MessageText:
//
// No rows will be sent to the no match output. Configure the transformation to redirect rows with no matching entries to the no match output, or delete the data flow transformations or destinations that are attached to the no match output.
//
#define DTS_W_NOMATCHOUTPUTGETSNOROWS    ((HRESULT)0x8020930CL)

//
// MessageId: DTS_W_ADODESTINVARIANTEXCEPTION
//
// MessageText:
//
// Exception received while enumerating ADO.Net providers. The invariant was "%1!s!". The exception message is: "%2!s!"
//
#define DTS_W_ADODESTINVARIANTEXCEPTION  ((HRESULT)0x8020931BL)

////////////////////////////////////////////////////////////////////////////
// The database has a data type such as sql_variant that does not have a mapping pipeline buffer type

//
// MessageId: DTS_W_ADONETDESTNOTSUPPORTEDTYPECONVERTTONTEXT
//
// MessageText:
//
// The external column "%1!s!" of "%2!s!" has a data type that cannot be mapped to a Data Flow task data type. The Data Flow task data type DT_NTEXT will be used instead.
//
#define DTS_W_ADONETDESTNOTSUPPORTEDTYPECONVERTTONTEXT ((HRESULT)0x80209321L)

////////////////////////////////////////////////////////////////////////////
// No 64-bit Excel (Jet) OLE DB provider exists.

//
// MessageId: DTS_E_OLEDB_EXCEL_NOT_SUPPORTED
//
// MessageText:
//
// SSIS Error Code DTS_E_OLEDB_EXCEL_NOT_SUPPORTED: The Excel Connection Manager is not supported in the 64-bit version of SSIS, as no OLE DB provider is available.
//
#define DTS_E_OLEDB_EXCEL_NOT_SUPPORTED  ((HRESULT)0xC00F9304L)

////////////////////////////////////////////////////////////////////////////
// The cache file is damaged, or the file was not created by using the Cache connection manager.

//
// MessageId: DTS_E_CACHEBADHEADER
//
// MessageText:
//
// The cache file is damaged, or the file was not created by using the Cache connection manager.  Provide a valid cache file.
//
#define DTS_E_CACHEBADHEADER             ((HRESULT)0xC00F9310L)

////////////////////////////////////////////////////////////////////////////
// Unregistered PipelineXML.dll

//
// MessageId: DTS_E_UNREGISTEREDPIPELINEXML_LOAD
//
// MessageText:
//
// Data Flow objects cannot be loaded. Check if Microsoft.SqlServer.PipelineXml.dll is properly registered.
//
#define DTS_E_UNREGISTEREDPIPELINEXML_LOAD ((HRESULT)0xC0040019L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the cache of the input column was not set. This could happen if the information could not be retrieved when the package is loaded or could not be kept in sync.

//
// MessageId: DTS_E_INVALIDINPUTCOLUMNCACHE
//
// MessageText:
//
// Column %1!s! does not have a valid cache
//
#define DTS_E_INVALIDINPUTCOLUMNCACHE    ((HRESULT)0xC004001AL)

////////////////////////////////////////////////////////////////////////////
// This happens when UpdateCacheOnInputColumns() is called on the MainPipe and EnableCacheUpdate is true

//
// MessageId: DTS_E_CANNOTUPDATECACHEONINPUTCOLUMNS
//
// MessageText:
//
// Cannot update cache on input columns when the EnableCacheUpdate is false on the pipeline
//
#define DTS_E_CANNOTUPDATECACHEONINPUTCOLUMNS ((HRESULT)0xC004001BL)

////////////////////////////////////////////////////////////////////////////
// Unregistered PipelineXML.dll

//
// MessageId: DTS_E_UNREGISTEREDPIPELINEXML_SAVE
//
// MessageText:
//
// Data Flow objects cannot be saved. Check if Microsoft.SqlServer.PipelineXml.dll is properly registered.
//
#define DTS_E_UNREGISTEREDPIPELINEXML_SAVE ((HRESULT)0xC0040020L)

//
// MessageId: DTS_E_PIPELINE_SAVE
//
// MessageText:
//
// Failed to save Data Flow objects.
//
#define DTS_E_PIPELINE_SAVE              ((HRESULT)0xC0040040L)

//
// MessageId: DTS_E_PIPELINE_LOAD
//
// MessageText:
//
// Failed to load Data Flow objects
//
#define DTS_E_PIPELINE_LOAD              ((HRESULT)0xC0040041L)

//
// MessageId: DTS_E_SAVE_PERSTFORMAT
//
// MessageText:
//
// Failed to save Data Flow objects. The specified format is not supported.
//
#define DTS_E_SAVE_PERSTFORMAT           ((HRESULT)0xC0040042L)

//
// MessageId: DTS_E_LOAD_PERSTFORMAT
//
// MessageText:
//
// Failed to load Data Flow objects. The specified format is not supported.
//
#define DTS_E_LOAD_PERSTFORMAT           ((HRESULT)0xC0040043L)

//
// MessageId: DTS_E_SETPERSIST_PROPEVENTS
//
// MessageText:
//
// Failed to set the XML persistence events property for the Data Flow objects.
//
#define DTS_E_SETPERSIST_PROPEVENTS      ((HRESULT)0xC0040044L)

//
// MessageId: DTS_E_SETPERSIST_XMLDOM
//
// MessageText:
//
// Failed to set the persistence XML DOM property for the Data Flow objects.
//
#define DTS_E_SETPERSIST_XMLDOM          ((HRESULT)0xC0040045L)

//
// MessageId: DTS_E_SETPERSIST_XMLNODE
//
// MessageText:
//
// Failed to set the persistence XML ELEMENT property for the Data Flow objects.
//
#define DTS_E_SETPERSIST_XMLNODE         ((HRESULT)0xC0040046L)

//
// MessageId: DTS_E_SETPERSISTPROP_FAILED
//
// MessageText:
//
// Failed to set xml persistence properties for the Data Flow objects.
//
#define DTS_E_SETPERSISTPROP_FAILED      ((HRESULT)0xC0040047L)

//
// MessageId: DTS_E_NOCUSTOMPROPCOL
//
// MessageText:
//
// Failed to get custom property collection for Data Flow components.
//
#define DTS_E_NOCUSTOMPROPCOL            ((HRESULT)0xC0040048L)

//
// MessageId: DTS_E_CYCLEINEXECUTIONTREE
//
// MessageText:
//
// An execution tree contains a cycle.
//
#define DTS_E_CYCLEINEXECUTIONTREE       ((HRESULT)0xC0047000L)

//
// MessageId: DTS_E_DISCONNECTEDOBJECT
//
// MessageText:
//
// The %1!s! object "%2!s!" (%3!d!) is disconnected from the layout.
//
#define DTS_E_DISCONNECTEDOBJECT         ((HRESULT)0xC0047001L)

//
// MessageId: DTS_E_INVALIDOBJECTID
//
// MessageText:
//
// The ID for the layout object is not valid.
//
#define DTS_E_INVALIDOBJECTID            ((HRESULT)0xC0047002L)

//
// MessageId: DTS_E_INPUTWITHOUTPATHS
//
// MessageText:
//
// A required input object is not connected to a path object.
//
#define DTS_E_INPUTWITHOUTPATHS          ((HRESULT)0xC0047003L)

////////////////////////////////////////////////////////////////////////////
// The package xml could be corrupted.

//
// MessageId: DTS_E_DISCONNECTEDPATH
//
// MessageText:
//
// Path '%1!s!' does not have a valid end point.
//
#define DTS_E_DISCONNECTEDPATH           ((HRESULT)0xC0047004L)

//
// MessageId: DTS_E_INVALIDSYNCHRONOUSINPUT
//
// MessageText:
//
// %1!s! has an invalid synchronous input ID %2!d!.
//
#define DTS_E_INVALIDSYNCHRONOUSINPUT    ((HRESULT)0xC0047005L)

//
// MessageId: DTS_E_INVALIDOUTPUTLINEAGEID
//
// MessageText:
//
// %1!s! has lineage ID %2!d!, but should have had %3!d!.
//
#define DTS_E_INVALIDOUTPUTLINEAGEID     ((HRESULT)0xC0047006L)

//
// MessageId: DTS_E_DUPLICATENAMESINCOLLECTION
//
// MessageText:
//
// The package contains two objects with the duplicate name of "%1!s!" and "%2!s!".
//
#define DTS_E_DUPLICATENAMESINCOLLECTION ((HRESULT)0xC0047008L)

//
// MessageId: DTS_E_INVALIDEXCLUSIONGROUP
//
// MessageText:
//
// The "%1!s!" and the "%2!s!" are in the same exclusion group, but they do not have the same synchronous input.
//
#define DTS_E_INVALIDEXCLUSIONGROUP      ((HRESULT)0xC0047009L)

//
// MessageId: DTS_E_DUPLICATELINEAGEIDSINCOLLECTION
//
// MessageText:
//
// Two objects in the same collection have a duplicate lineage ID of %1!d!. The objects are %2!s! and %3!s!.
//
#define DTS_E_DUPLICATELINEAGEIDSINCOLLECTION ((HRESULT)0xC004700AL)

//
// MessageId: DTS_E_VALIDATIONFAILEDONLAYOUT
//
// MessageText:
//
// The layout failed validation.
//
#define DTS_E_VALIDATIONFAILEDONLAYOUT   ((HRESULT)0xC004700BL)

//
// MessageId: DTS_E_VALIDATIONFAILEDONCOMPONENTS
//
// MessageText:
//
// One or more component failed validation.
//
#define DTS_E_VALIDATIONFAILEDONCOMPONENTS ((HRESULT)0xC004700CL)

//
// MessageId: DTS_E_VALIDATIONFAILED
//
// MessageText:
//
// The layout and one or more components failed validation.
//
#define DTS_E_VALIDATIONFAILED           ((HRESULT)0xC004700DL)

//
// MessageId: DTS_E_THREADSTARTUPFAILED
//
// MessageText:
//
// The Data Flow task engine failed at startup because it cannot create one or more required threads.
//
#define DTS_E_THREADSTARTUPFAILED        ((HRESULT)0xC004700EL)

//
// MessageId: DTS_E_CANTGETMUTEX
//
// MessageText:
//
// A thread failed to create a mutex at initialization.
//
#define DTS_E_CANTGETMUTEX               ((HRESULT)0xC004700FL)

//
// MessageId: DTS_E_CANTGETSEMAPHORE
//
// MessageText:
//
// A thread failed to create a semaphore at initialization.
//
#define DTS_E_CANTGETSEMAPHORE           ((HRESULT)0xC0047010L)

//
// MessageId: DTS_E_BUFFERFAILUREDETAILS
//
// MessageText:
//
// The system reports %1!d! percent memory load. There are %2!s! bytes of physical memory with %3!s! bytes free. There are %4!s! bytes of virtual memory with %5!s! bytes free. The paging file has %6!s! bytes with %7!s! bytes free.
//
#define DTS_E_BUFFERFAILUREDETAILS       ((HRESULT)0xC0047011L)

//
// MessageId: DTS_E_BUFFERALLOCFAILED
//
// MessageText:
//
// A buffer failed while allocating %1!d! bytes.
//
#define DTS_E_BUFFERALLOCFAILED          ((HRESULT)0xC0047012L)

////////////////////////////////////////////////////////////////////////////
// This is an unexpected internal error; we couldn't create a required COM object.

//
// MessageId: DTS_E_CANTCREATEBUFFERMANAGER
//
// MessageText:
//
// The Buffer Manager could not be created.
//
#define DTS_E_CANTCREATEBUFFERMANAGER    ((HRESULT)0xC0047013L)

////////////////////////////////////////////////////////////////////////////
// The size was too large or too small.

//
// MessageId: DTS_E_BUFFERBADSIZE
//
// MessageText:
//
// Buffer Type %1!d! had a size of %2!I64d! bytes.
//
#define DTS_E_BUFFERBADSIZE              ((HRESULT)0xC0047015L)

//
// MessageId: DTS_E_DANGLINGWITHPATH
//
// MessageText:
//
// %1!s! is marked as dangling, but has a path attached to it.
//
#define DTS_E_DANGLINGWITHPATH           ((HRESULT)0xC0047016L)

//
// MessageId: DTS_E_INDIVIDUALVALIDATIONFAILED
//
// MessageText:
//
// %1!s! failed validation and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALVALIDATIONFAILED ((HRESULT)0xC0047017L)

//
// MessageId: DTS_E_INDIVIDUALPOSTEXECUTEFAILED
//
// MessageText:
//
// %1!s! failed the post-execute phase and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPOSTEXECUTEFAILED ((HRESULT)0xC0047018L)

//
// MessageId: DTS_E_INDIVIDUALPREPAREFAILED
//
// MessageText:
//
// %1!s! failed the prepare phase and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPREPAREFAILED    ((HRESULT)0xC0047019L)

//
// MessageId: DTS_E_INDIVIDUALPREEXECUTEFAILED
//
// MessageText:
//
// %1!s! failed the pre-execute phase and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPREEXECUTEFAILED ((HRESULT)0xC004701AL)

//
// MessageId: DTS_E_INDIVIDUALCLEANUPFAILED
//
// MessageText:
//
// %1!s! failed the cleanup phase and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALCLEANUPFAILED    ((HRESULT)0xC004701BL)

//
// MessageId: DTS_E_INVALIDINPUTLINEAGEID
//
// MessageText:
//
// %1!s! has lineage ID %2!d! that was not previously used in the Data Flow task.
//
#define DTS_E_INVALIDINPUTLINEAGEID      ((HRESULT)0xC004701CL)

//
// MessageId: DTS_E_EXECUTIONTREECYCLE
//
// MessageText:
//
// Cannot connect %1!s! to %2!s! because a cycle would be created.
//
#define DTS_E_EXECUTIONTREECYCLE         ((HRESULT)0xC004701EL)

////////////////////////////////////////////////////////////////////////////
// Comparison of that data type is not supported, so it cannot be sorted or used as a key.

//
// MessageId: DTS_E_CANTCOMPARE
//
// MessageText:
//
// The data type "%1!s!" cannot be compared. Comparison of that data type is not supported, so it cannot be sorted or used as a key.
//
#define DTS_E_CANTCOMPARE                ((HRESULT)0xC004701FL)

//
// MessageId: DTS_E_REFUSEDFORSHUTDOWN
//
// MessageText:
//
// This thread has shut down and is not accepting buffers for input.
//
#define DTS_E_REFUSEDFORSHUTDOWN         ((HRESULT)0xC0047020L)

//
// MessageId: DTS_E_THREADFAILED
//
// MessageText:
//
// SSIS Error Code DTS_E_THREADFAILED.  Thread "%1!s!" has exited with error code 0x%2!8.8X!.  There may be error messages posted before this with more information on why the thread has exited.
//
#define DTS_E_THREADFAILED               ((HRESULT)0xC0047021L)

////////////////////////////////////////////////////////////////////////////
// The identified component returned an error from its ProcessInput method. The meaning of the error is specific to the component, but it is fatal and will cause the Data Flow Task to stop execution.

//
// MessageId: DTS_E_PROCESSINPUTFAILED
//
// MessageText:
//
// SSIS Error Code DTS_E_PROCESSINPUTFAILED.  The ProcessInput method on component "%1!s!" (%2!d!) failed with error code 0x%3!8.8X! while processing input "%4!s!" (%5!d!). The identified component returned an error from the ProcessInput method. The error is specific to the component, but the error is fatal and will cause the Data Flow task to stop running.  There may be error messages posted before this with more information about the failure.
//
#define DTS_E_PROCESSINPUTFAILED         ((HRESULT)0xC0047022L)

//
// MessageId: DTS_E_CANTREALIZEVIRTUALBUFFERS
//
// MessageText:
//
// A set of virtual buffers cannot be realized.
//
#define DTS_E_CANTREALIZEVIRTUALBUFFERS  ((HRESULT)0xC0047023L)

////////////////////////////////////////////////////////////////////////////
// The pipeline requires too many threads as configured. There are either too many asynchronous outputs, or EngineThreads is too high.

//
// MessageId: DTS_E_PIPELINETOOCOMPLEX
//
// MessageText:
//
// The number of threads required for this pipeline is %1!d!, which is more than the system limit of %2!d!. The pipeline requires too many threads as configured. There are either too many asynchronous outputs, or EngineThreads property is set too high. Split the pipeline into multiple packages, or reduce the value of the EngineThreads property.
//
#define DTS_E_PIPELINETOOCOMPLEX         ((HRESULT)0xC0047024L)

////////////////////////////////////////////////////////////////////////////
// Data flow engine failed to tap a buffer.

//
// MessageId: DTS_E_DATATAPFAILED
//
// MessageText:
//
// The data tap on path "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_DATATAPFAILED              ((HRESULT)0xC0047025L)

////////////////////////////////////////////////////////////////////////////
// The data flow engine failed to create the specified file.

//
// MessageId: DTS_E_DATATAP_CREATEFILEFAILURE
//
// MessageText:
//
// The data flow engine failed to create the data tap file "%1!s!" with error code 0x%2!8.8X!.
//
#define DTS_E_DATATAP_CREATEFILEFAILURE  ((HRESULT)0xC0047026L)

//
// MessageId: DTS_E_SCHEDULERCOULDNOTCOUNTSOURCES
//
// MessageText:
//
// The Data Flow engine scheduler cannot obtain a count of the sources in the layout.
//
#define DTS_E_SCHEDULERCOULDNOTCOUNTSOURCES ((HRESULT)0xC0047028L)

//
// MessageId: DTS_E_SCHEDULERCOULDNOTCOUNTDESTINATIONS
//
// MessageText:
//
// The Data Flow engine scheduler cannot obtain a count of the destinations in the layout.
//
#define DTS_E_SCHEDULERCOULDNOTCOUNTDESTINATIONS ((HRESULT)0xC0047029L)

////////////////////////////////////////////////////////////////////////////
// Make sure the component view has been created.

//
// MessageId: DTS_E_COMPONENTVIEWISUNAVAILABLE
//
// MessageText:
//
// The component view is unavailable. Make sure the component view has been created.
//
#define DTS_E_COMPONENTVIEWISUNAVAILABLE ((HRESULT)0xC004702AL)

////////////////////////////////////////////////////////////////////////////
// The component view may be out of synch.  Try releasing the component view and recreating it.

//
// MessageId: DTS_E_INCORRECTCOMPONENTVIEWID
//
// MessageText:
//
// The component view ID is incorrect. The component view may be out of synchronization. Try releasing the component view and recreating it.
//
#define DTS_E_INCORRECTCOMPONENTVIEWID   ((HRESULT)0xC004702BL)

//
// MessageId: DTS_E_BUFFERNOTLOCKED
//
// MessageText:
//
// This buffer is not locked and cannot be manipulated.
//
#define DTS_E_BUFFERNOTLOCKED            ((HRESULT)0xC004702CL)

//
// MessageId: DTS_E_CANTBUILDBUFFERTYPE
//
// MessageText:
//
// The Data Flow task cannot allocate memory to build a buffer definition. The buffer definition had %1!d! columns.
//
#define DTS_E_CANTBUILDBUFFERTYPE        ((HRESULT)0xC004702DL)

//
// MessageId: DTS_E_CANTREGISTERBUFFERTYPE
//
// MessageText:
//
// The Data Flow task cannot register a buffer type. The type had %1!d! columns and was for execution tree %2!d!.
//
#define DTS_E_CANTREGISTERBUFFERTYPE     ((HRESULT)0xC004702EL)

////////////////////////////////////////////////////////////////////////////
// This happens when the XML is edited and the UsesDispositions value is changed.  This value is not allowed to change and is set by the component when it is added to the package.

//
// MessageId: DTS_E_INVALIDUSESDISPOSITIONSVALUE
//
// MessageText:
//
// The UsesDispositions property cannot be changed from its initial value. This occurs when the XML is edited and the UsesDispositions value is modified. This value is set by the component when it is added to the package and is not allowed to change.
//
#define DTS_E_INVALIDUSESDISPOSITIONSVALUE ((HRESULT)0xC004702FL)

////////////////////////////////////////////////////////////////////////////
// The thread previously reported a specific error.

//
// MessageId: DTS_E_THREADFAILEDINITIALIZE
//
// MessageText:
//
// The Data Flow task failed to initialize a required thread and cannot begin execution. The thread previously reported a specific error.
//
#define DTS_E_THREADFAILEDINITIALIZE     ((HRESULT)0xC0047030L)

////////////////////////////////////////////////////////////////////////////
// Out of memory, most likely.

//
// MessageId: DTS_E_THREADFAILEDCREATE
//
// MessageText:
//
// The Data Flow task failed to create a required thread and cannot begin running. The usually occurs when there is an out-of-memory state.
//
#define DTS_E_THREADFAILEDCREATE         ((HRESULT)0xC0047031L)

//
// MessageId: DTS_E_EXECUTIONTREECYCLEADDINGSYNCHRONOUSINPUT
//
// MessageText:
//
// The synchronous input of "%1!s!" cannot be set to "%2!s!" because a cycle would be created.
//
#define DTS_E_EXECUTIONTREECYCLEADDINGSYNCHRONOUSINPUT ((HRESULT)0xC0047032L)

////////////////////////////////////////////////////////////////////////////
// A custom property can't have the same name as a stock property on the same object.

//
// MessageId: DTS_E_INVALIDCUSTOMPROPERTYNAME
//
// MessageText:
//
// A custom property named "%1!s!" is invalid because there is a stock property with that name. A custom property cannot have the same name as a stock property on the same object.
//
#define DTS_E_INVALIDCUSTOMPROPERTYNAME  ((HRESULT)0xC0047033L)

////////////////////////////////////////////////////////////////////////////
// The buffer was already unlocked.

//
// MessageId: DTS_E_BUFFERLOCKUNDERFLOW
//
// MessageText:
//
// The buffer was already unlocked.
//
#define DTS_E_BUFFERLOCKUNDERFLOW        ((HRESULT)0xC0047035L)

////////////////////////////////////////////////////////////////////////////
// A component failed its CacheInterfaces call.

//
// MessageId: DTS_E_INDIVIDUALCACHEINTERFACESFAILED
//
// MessageText:
//
// %1!s! failed initialization and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALCACHEINTERFACESFAILED ((HRESULT)0xC0047036L)

////////////////////////////////////////////////////////////////////////////
// A component failed its ReleaseInterfaces call.

//
// MessageId: DTS_E_INDIVIDUALRELEASEINTERFACESFAILED
//
// MessageText:
//
// %1!s! failed during shut down and returned error code 0x%2!8.8X!. A component failed to release its interfaces.
//
#define DTS_E_INDIVIDUALRELEASEINTERFACESFAILED ((HRESULT)0xC0047037L)

////////////////////////////////////////////////////////////////////////////
// The identified component returned a failure code when the pipeline engine called PrimeOutput(). The meaning of the failure code is defined by the component, but the error is fatal and the pipeline will stop execution.

//
// MessageId: DTS_E_PRIMEOUTPUTFAILED
//
// MessageText:
//
// SSIS Error Code DTS_E_PRIMEOUTPUTFAILED.  The PrimeOutput method on %1!s! returned error code 0x%2!8.8X!.  The component returned a failure code when the pipeline engine called PrimeOutput(). The meaning of the failure code is defined by the component, but the error is fatal and the pipeline stopped executing.  There may be error messages posted before this with more information about the failure.
//
#define DTS_E_PRIMEOUTPUTFAILED          ((HRESULT)0xC0047038L)

////////////////////////////////////////////////////////////////////////////
// The user requested a shutdown, or an error in another thread is causing the pipeline to shutdown.

//
// MessageId: DTS_E_THREADCANCELLED
//
// MessageText:
//
// SSIS Error Code DTS_E_THREADCANCELLED.  Thread "%1!s!" received a shutdown signal and is terminating. The user requested a shutdown, or an error in another thread is causing the pipeline to shutdown.  There may be error messages posted before this with more information on why the thread was cancelled.
//
#define DTS_E_THREADCANCELLED            ((HRESULT)0xC0047039L)

////////////////////////////////////////////////////////////////////////////
// The distributor couldn't initialize the component's property, and can't continue execution.

//
// MessageId: DTS_E_DISTRIBUTORCANTSETPROPERTY
//
// MessageText:
//
// Distributor for thread "%1!s!" failed to initialize property "%2!s!" on component "%3!s!" because of error 0x%8.8X. The distributor could not initialize the component's property and cannot continue running.
//
#define DTS_E_DISTRIBUTORCANTSETPROPERTY ((HRESULT)0xC004703AL)

//
// MessageId: DTS_E_CANTREGISTERVIEWBUFFERTYPE
//
// MessageText:
//
// The Data Flow task cannot register a view buffer type. The type had %1!d! columns and was for input ID %2!d!.
//
#define DTS_E_CANTREGISTERVIEWBUFFERTYPE ((HRESULT)0xC004703BL)

//
// MessageId: DTS_E_CANTCREATEEXECUTIONTREE
//
// MessageText:
//
// There is not enough memory to create an execution tree.
//
#define DTS_E_CANTCREATEEXECUTIONTREE    ((HRESULT)0xC004703FL)

//
// MessageId: DTS_E_CANTINSERTINTOHASHTABLE
//
// MessageText:
//
// There is not enough memory to insert an object into the hash table.
//
#define DTS_E_CANTINSERTINTOHASHTABLE    ((HRESULT)0xC0047040L)

//
// MessageId: DTS_E_OBJECTNOTINHASHTABLE
//
// MessageText:
//
// The object is not in the hash table.
//
#define DTS_E_OBJECTNOTINHASHTABLE       ((HRESULT)0xC0047041L)

////////////////////////////////////////////////////////////////////////////
// Only one component view can exist at a time.

//
// MessageId: DTS_E_CANTCREATECOMPONENTVIEW
//
// MessageText:
//
// Cannot create a component view because another one already exists. Only one component view can exist at a time.
//
#define DTS_E_CANTCREATECOMPONENTVIEW    ((HRESULT)0xC0047043L)

//
// MessageId: DTS_E_LAYOUTCANTSETUSAGETYPE
//
// MessageText:
//
// At input "%1!s!" (%2!d!), the virtual input column collection does not contain a virtual input column with lineage ID %3!d!.
//
#define DTS_E_LAYOUTCANTSETUSAGETYPE     ((HRESULT)0xC0047046L)

//
// MessageId: DTS_E_WRONGOBJECTTYPE
//
// MessageText:
//
// The requested object has the incorrect object type.
//
#define DTS_E_WRONGOBJECTTYPE            ((HRESULT)0xC0047047L)

////////////////////////////////////////////////////////////////////////////
// Invalid file name or no rights. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_CANTCREATESPOOLFILE
//
// MessageText:
//
// The buffer manager cannot create a temporary storage file on any path in the BufferTempStoragePath property. There is an incorrect file name or no permission or the paths have been full.
//
#define DTS_E_CANTCREATESPOOLFILE        ((HRESULT)0xC0047048L)

////////////////////////////////////////////////////////////////////////////
// File got corrupted. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_SEEKFAILED
//
// MessageText:
//
// The buffer manager could not seek to offset %1!d! in file "%2!s!". The file is damaged.
//
#define DTS_E_SEEKFAILED                 ((HRESULT)0xC0047049L)

////////////////////////////////////////////////////////////////////////////
// Out of disk space. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_EXTENDFAILED
//
// MessageText:
//
// The buffer manager cannot extend the file "%1!s!" to length %2!lu! bytes.  There was insufficient disk space.
//
#define DTS_E_EXTENDFAILED               ((HRESULT)0xC004704AL)

////////////////////////////////////////////////////////////////////////////
// Out of disk space or quota. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_FILEWRITEFAILED
//
// MessageText:
//
// The buffer manager cannot write %1!d! bytes to file "%2!s!". There was insufficient disk space or quota.
//
#define DTS_E_FILEWRITEFAILED            ((HRESULT)0xC004704BL)

////////////////////////////////////////////////////////////////////////////
// File got corrupted. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_FILEREADFAILED
//
// MessageText:
//
// The buffer manager cannot read %1!d! bytes from file "%2!s!". The file is damaged.
//
#define DTS_E_FILEREADFAILED             ((HRESULT)0xC004704CL)

////////////////////////////////////////////////////////////////////////////
// Called SetSequentialMode() on a buffer that supports virtual buffers.

//
// MessageId: DTS_E_VIRTUALNOTSEQUENTIAL
//
// MessageText:
//
// Buffer ID %1!d! supports other virtual buffers and cannot be placed into sequential mode. IDTSBuffer100.SetSequentialMode was called on a buffer that supports virtual buffers.
//
#define DTS_E_VIRTUALNOTSEQUENTIAL       ((HRESULT)0xC004704DL)

////////////////////////////////////////////////////////////////////////////
// Can't change a read-only buffer.

//
// MessageId: DTS_E_BUFFERISREADONLY
//
// MessageText:
//
// This operation could not be performed because buffer is in read-only mode. A read-only buffer cannot be modified.
//
#define DTS_E_BUFFERISREADONLY           ((HRESULT)0xC004704EL)

//
// MessageId: DTS_E_EXECUTIONTREECYCLESETTINGID
//
// MessageText:
//
// ID %1!s! cannot be set to %2!d! because a cycle would be created.
//
#define DTS_E_EXECUTIONTREECYCLESETTINGID ((HRESULT)0xC004704FL)

////////////////////////////////////////////////////////////////////////////
// Out of memory.

//
// MessageId: DTS_E_NOMOREBUFFERTYPES
//
// MessageText:
//
// The buffer manager ran out of memory while trying to extend the table of buffer types. This is caused by an out-of-memory condition.
//
#define DTS_E_NOMOREBUFFERTYPES          ((HRESULT)0xC0047050L)

//
// MessageId: DTS_E_CANTCREATENEWTYPE
//
// MessageText:
//
// The buffer manager failed to create a new buffer type.
//
#define DTS_E_CANTCREATENEWTYPE          ((HRESULT)0xC0047051L)

////////////////////////////////////////////////////////////////////////////
// Internal error: the scheduler thinks there are more execution trees than there really are.

//
// MessageId: DTS_E_SCHEDULERBADTREE
//
// MessageText:
//
// The Data Flow engine scheduler failed to retrieve the execution tree with index %1!d! from the layout. The scheduler received a count containing more execution trees than actually exist.
//
#define DTS_E_SCHEDULERBADTREE           ((HRESULT)0xC0047053L)

////////////////////////////////////////////////////////////////////////////
// Probably out of memory; a previous message should indicate the actual cause of the failure.

//
// MessageId: DTS_E_CANTCREATEPRIMEOUTPUTBUFFER
//
// MessageText:
//
// The Data Flow task failed to create a buffer to call PrimeOutput for output "%3!s!" (%4!d!) on component "%1!s!" (%2!d!). This error usually occurs due to an out-of-memory condition.
//
#define DTS_E_CANTCREATEPRIMEOUTPUTBUFFER ((HRESULT)0xC0047056L)

////////////////////////////////////////////////////////////////////////////
// Out of memory.

//
// MessageId: DTS_E_SCHEDULERTHREADMEMORY
//
// MessageText:
//
// The Data Flow engine scheduler failed to create a thread object because not enough memory is available. This is caused by an out-of-memory condition.
//
#define DTS_E_SCHEDULERTHREADMEMORY      ((HRESULT)0xC0047057L)

////////////////////////////////////////////////////////////////////////////
// The scheduler previously saw an object, but then it disappeared. This is an internal error the pipeline.

//
// MessageId: DTS_E_SCHEDULEROBJECT
//
// MessageText:
//
// The Data Flow engine scheduler cannot retrieve object with ID %1!d! from the layout. The Data Flow engine scheduler previously located an object that is now no longer available.
//
#define DTS_E_SCHEDULEROBJECT            ((HRESULT)0xC004705AL)

////////////////////////////////////////////////////////////////////////////
// There should be a previous message which indicates the specific cause of failure.

//
// MessageId: DTS_E_PREPARETREENODEFAILED
//
// MessageText:
//
// The Data Flow task failed to prepare buffers for the execution tree node beginning at output "%1!s!" (%2!d!).
//
#define DTS_E_PREPARETREENODEFAILED      ((HRESULT)0xC004705BL)

//
// MessageId: DTS_E_CANTCREATEVIRTUALBUFFER
//
// MessageText:
//
// The Data Flow task cannot create a virtual buffer to prepare for execution.
//
#define DTS_E_CANTCREATEVIRTUALBUFFER    ((HRESULT)0xC004705CL)

//
// MessageId: DTS_E_NOMOREIDS
//
// MessageText:
//
// The maximum ID has been reached. There are no more IDs available to assign to objects.
//
#define DTS_E_NOMOREIDS                  ((HRESULT)0xC004705EL)

//
// MessageId: DTS_E_ALREADYATTACHED
//
// MessageText:
//
// The %1!s! is already attached and cannot be attached again.  Detach it and try again.
//
#define DTS_E_ALREADYATTACHED            ((HRESULT)0xC004705FL)

//
// MessageId: DTS_E_OUTPUTCOLUMNNAMECONFLICT
//
// MessageText:
//
// Column name "%1!s!" on output "%2!s!" cannot be used because it conflicts with a column of the same name on synchronous input "%3!s!".
//
#define DTS_E_OUTPUTCOLUMNNAMECONFLICT   ((HRESULT)0xC0047060L)

////////////////////////////////////////////////////////////////////////////
// The buffer manager should have posted an error describing the cause.

//
// MessageId: DTS_E_EOFANNOUNCEMENTFAILED
//
// MessageText:
//
// The Data Flow task cannot to create a buffer to mark the end of the rowset.
//
#define DTS_E_EOFANNOUNCEMENTFAILED      ((HRESULT)0xC0047061L)

////////////////////////////////////////////////////////////////////////////
// An invocation of managed user component resulted in an exception.

//
// MessageId: DTS_E_USERCOMPONENTEXCEPTION
//
// MessageText:
//
// A managed user component has thrown exception "%1!s!".
//
#define DTS_E_USERCOMPONENTEXCEPTION     ((HRESULT)0xC0047062L)

////////////////////////////////////////////////////////////////////////////
// Low on memory before execution even started.

//
// MessageId: DTS_E_SCHEDULERMEMORY
//
// MessageText:
//
// The Data Flow engine scheduler cannot allocate enough memory for the execution structures. The system was low on memory before execution started.
//
#define DTS_E_SCHEDULERMEMORY            ((HRESULT)0xC0047063L)

////////////////////////////////////////////////////////////////////////////
// Couldn't allocate C++ object for a buffer. Very low on memory!

//
// MessageId: DTS_E_BUFFERNOOBJECTMEMORY
//
// MessageText:
//
// An out-of-memory condition prevented the creation of the buffer object.
//
#define DTS_E_BUFFERNOOBJECTMEMORY       ((HRESULT)0xC0047064L)

////////////////////////////////////////////////////////////////////////////
// Couldn't allocate internal storage for a buffer. Very low on memory!

//
// MessageId: DTS_E_BUFFERNOMAPMEMORY
//
// MessageText:
//
// An out-of-memory condition prevents the mapping of a buffer's lineage IDs to DTP_HCOL indexes.
//
#define DTS_E_BUFFERNOMAPMEMORY          ((HRESULT)0xC0047065L)

////////////////////////////////////////////////////////////////////////////
// A component failed its put_Variables call.

//
// MessageId: DTS_E_INDIVIDUALPUTVARIABLESFAILED
//
// MessageText:
//
// The "%1!s!" cannot cache the Variables collection and returned error code 0x%2!8.8X.
//
#define DTS_E_INDIVIDUALPUTVARIABLESFAILED ((HRESULT)0xC0047066L)

////////////////////////////////////////////////////////////////////////////
// A component failed its put_ComponentMetaData call.

//
// MessageId: DTS_E_INDIVIDUALPUTCOMPONENTMETADATAFAILED
//
// MessageText:
//
// The "%1!s!" failed to cache the component metadata object and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPUTCOMPONENTMETADATAFAILED ((HRESULT)0xC0047067L)

//
// MessageId: DTS_E_SORTEDOUTPUTHASINVALIDSORTKEYPOSITION
//
// MessageText:
//
// "%1!s!" has a non-zero SortKeyPosition, but its value (%2!ld!) is too large. It must be less than or equal to the number of columns.
//
#define DTS_E_SORTEDOUTPUTHASINVALIDSORTKEYPOSITION ((HRESULT)0xC0047068L)

//
// MessageId: DTS_E_SORTEDOUTPUTHASINVALIDSORTKEYPOSITIONS
//
// MessageText:
//
// The IsSorted property of %1!s! is set to TRUE, but the absolute values of the non-zero output column SortKeyPositions do not form a monotonically increasing sequence, starting at one.
//
#define DTS_E_SORTEDOUTPUTHASINVALIDSORTKEYPOSITIONS ((HRESULT)0xC004706AL)

//
// MessageId: DTS_E_INDIVIDUALVALIDATIONSTATUSFAILED
//
// MessageText:
//
// "%1!s!" failed validation and returned validation status "%2!s!".
//
#define DTS_E_INDIVIDUALVALIDATIONSTATUSFAILED ((HRESULT)0xC004706BL)

//
// MessageId: DTS_E_CANTCREATECOMPONENT
//
// MessageText:
//
// Component "%1!s!" could not be created and returned error code 0x%2!8.8X! "%3!s!". Make sure that the component is registered correctly.
//
#define DTS_E_CANTCREATECOMPONENT        ((HRESULT)0xC004706CL)

//
// MessageId: DTS_E_COMPONENTNOTREGISTERED
//
// MessageText:
//
// The module containing "%1!s!" is not registered or installed correctly.
//
#define DTS_E_COMPONENTNOTREGISTERED     ((HRESULT)0xC004706DL)

//
// MessageId: DTS_E_COMPONENTNOTFOUND
//
// MessageText:
//
// The module containing "%1!s!" cannot be located, even though it is registered.
//
#define DTS_E_COMPONENTNOTFOUND          ((HRESULT)0xC004706EL)

////////////////////////////////////////////////////////////////////////////
// IDE was not visited after PreCompile property was set to True

//
// MessageId: DTS_E_BINARYCODENOTFOUND
//
// MessageText:
//
// The script component is configured to pre-compile the script, but binary code is not found. Please visit the IDE in Script Component Editor by clicking Design Script button to cause binary code to be generated.
//
#define DTS_E_BINARYCODENOTFOUND         ((HRESULT)0xC004706FL)

////////////////////////////////////////////////////////////////////////////
// Invalid file name or no rights. The Win32 error should have been reported separately.

//
// MessageId: DTS_E_CANTCREATEBLOBFILE
//
// MessageText:
//
// The buffer manager cannot create a file to spool a long object on the directories named in the BLOBTempStoragePath property.  Either an incorrect file name was provided, or there are no permissions, or the paths have been full.
//
#define DTS_E_CANTCREATEBLOBFILE         ((HRESULT)0xC0047070L)

//
// MessageId: DTS_E_SYNCHRONOUSIDMISMATCH
//
// MessageText:
//
// The SynchronousInputID property on "%1!s!" was %2!d!, and %3!d! was expected.
//
#define DTS_E_SYNCHRONOUSIDMISMATCH      ((HRESULT)0xC0047071L)

//
// MessageId: DTS_E_OBJECTIDNOTFOUND
//
// MessageText:
//
// No object exists with the ID %1!d!.
//
#define DTS_E_OBJECTIDNOTFOUND           ((HRESULT)0xC0047072L)

//
// MessageId: DTS_E_OBJECTIDLOOKUPFAILED
//
// MessageText:
//
// Unable to locate an object with ID %1!d! because of the error code 0x%2!8.8X!.
//
#define DTS_E_OBJECTIDLOOKUPFAILED       ((HRESULT)0xC0047073L)

////////////////////////////////////////////////////////////////////////////
// Pick one that's valid.

//
// MessageId: DTS_E_INVALIDCODEPAGE
//
// MessageText:
//
// The code page %1!d! specified on output column "%2!s!" (%3!d!) is not valid. Select a different code page for output column "%2!s!".
//
#define DTS_E_INVALIDCODEPAGE            ((HRESULT)0xC0047074L)

////////////////////////////////////////////////////////////////////////////
// A component failed its put_EventInfos call.

//
// MessageId: DTS_E_INDIVIDUALPUTEVENTINFOSFAILED
//
// MessageText:
//
// The EventInfos collection could not be cached by "%1!s!" and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPUTEVENTINFOSFAILED ((HRESULT)0xC0047075L)

////////////////////////////////////////////////////////////////////////////
// InitializeComponent failed

//
// MessageId: DTS_E_COMPONENTINITFAILED
//
// MessageText:
//
// Component %1!s! failed to initialize due to error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_COMPONENTINITFAILED        ((HRESULT)0xC0047076L)

//
// MessageId: DTS_E_DUPLICATEOUTPUTCOLUMNNAMES
//
// MessageText:
//
// The name for "%1!s!" is a duplicate.  All names must be unique.
//
#define DTS_E_DUPLICATEOUTPUTCOLUMNNAMES ((HRESULT)0xC0047077L)

//
// MessageId: DTS_E_NOOUTPUTCOLUMNFORINPUTCOLUMN
//
// MessageText:
//
// There is no output column associated with input column "%1!s!" (%2!d!).
//
#define DTS_E_NOOUTPUTCOLUMNFORINPUTCOLUMN ((HRESULT)0xC0047078L)

////////////////////////////////////////////////////////////////////////////
// There is an exclusion group that isn't zero with a synchronous input that is zero.

//
// MessageId: DTS_E_EXCLGRPNOSYNCINP
//
// MessageText:
//
// "%1!s!" has a virtual buffer extending from a root source. There is an exclusion group that is not zero with a synchronous input that is zero.
//
#define DTS_E_EXCLGRPNOSYNCINP           ((HRESULT)0xC0047079L)

//
// MessageId: DTS_E_ERROROUTCANTBEONSYNCNONEXCLUSIVEOUTPUT
//
// MessageText:
//
// "%1!s!" cannot be an error output because error outputs cannot be placed on synchronous, non-exclusive outputs.
//
#define DTS_E_ERROROUTCANTBEONSYNCNONEXCLUSIVEOUTPUT ((HRESULT)0xC004707AL)

//
// MessageId: DTS_E_EXPREVALDIVBYZERO
//
// MessageText:
//
// A divide-by-zero error occurred. The right side operand evaluates to zero in the expression "%1!s!".
//
#define DTS_E_EXPREVALDIVBYZERO          ((HRESULT)0xC004707BL)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the literal value specified overflows the type requested.

//
// MessageId: DTS_E_EXPREVALLITERALOVERFLOW
//
// MessageText:
//
// The literal "%1!s!" is too large to fit into type %2!s!. The magnitude of the literal overflows the type.
//
#define DTS_E_EXPREVALLITERALOVERFLOW    ((HRESULT)0xC004707CL)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into a numeric (DT_NUMERIC) result without loss of precision or scale. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALBINARYOPNUMERICOVERFLOW
//
// MessageText:
//
// The result of the binary operation "%1!s!" on data types %2!s! and %3!s! exceeds the maximum size for numeric types. The operand types could not be implicitly cast into a numeric (DT_NUMERIC) result without loss of precision or scale. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALBINARYOPNUMERICOVERFLOW ((HRESULT)0xC004707DL)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the operation overflows the type of the result

//
// MessageId: DTS_E_EXPREVALBINARYOPOVERFLOW
//
// MessageText:
//
// The result of the binary operation "%1!s!" exceeds the maximum size for result data type "%2!s!". The magnitude of the result of the operation overflows the type of the result.
//
#define DTS_E_EXPREVALBINARYOPOVERFLOW   ((HRESULT)0xC004707EL)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the function call overflows the type of the operand. An explicit cast to a larger type may be required.

//
// MessageId: DTS_E_EXPREVALFUNCTIONOVERFLOW
//
// MessageText:
//
// The result of the function call "%1!s!" is too large to fit in type "%2!s!". The magnitude of the result of the function call overflows the type of the operand. An explicit cast to a larger type may be required.
//
#define DTS_E_EXPREVALFUNCTIONOVERFLOW   ((HRESULT)0xC004707FL)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into compatible types for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALBINARYTYPEMISMATCH
//
// MessageText:
//
// The data types "%1!s!" and "%2!s!" are incompatible for binary operator "%3!s!". The operand types could not be implicitly cast into compatible types for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALBINARYTYPEMISMATCH ((HRESULT)0xC0047080L)

////////////////////////////////////////////////////////////////////////////
// The type of one or both of the operands is not supported for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALUNSUPPORTEDBINARYTYPE
//
// MessageText:
//
// The data type "%1!s!" cannot be used with binary operator "%2!s!". The type of one or both of the operands is not supported for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALUNSUPPORTEDBINARYTYPE ((HRESULT)0xC0047081L)

////////////////////////////////////////////////////////////////////////////
// The operands for this operator must be both positive or both negative.

//
// MessageId: DTS_E_EXPREVALBINARYSIGNMISMATCH
//
// MessageText:
//
// There is a sign mismatch for the bitwise binary operator "%1!s!" in operation "%2!s!". Both operands for this operator must be positive or negative.
//
#define DTS_E_EXPREVALBINARYSIGNMISMATCH ((HRESULT)0xC0047082L)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALBINARYOPERATIONFAILED
//
// MessageText:
//
// The binary operation "%1!s!" failed with error code 0x%2!8.8X!. An internal error occurred, or an out-of-memory condition exists.
//
#define DTS_E_EXPREVALBINARYOPERATIONFAILED ((HRESULT)0xC0047083L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a binary operation.

//
// MessageId: DTS_E_EXPREVALBINARYOPERATIONSETTYPEFAILED
//
// MessageText:
//
// Attempt to set the result type of binary operation "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALBINARYOPERATIONSETTYPEFAILED ((HRESULT)0xC0047084L)

////////////////////////////////////////////////////////////////////////////
// Unable to compare the strings.

//
// MessageId: DTS_E_EXPREVALSTRINGCOMPARISONFAILED
//
// MessageText:
//
// Comparing "%1!s!" to string "%2!s!" failed.
//
#define DTS_E_EXPREVALSTRINGCOMPARISONFAILED ((HRESULT)0xC0047085L)

////////////////////////////////////////////////////////////////////////////
// The operand type is not supported for the operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALUNSUPPORTEDUNNARYTYPE
//
// MessageText:
//
// The data type "%1!s!" cannot be used with unary operator "%2!s!". This operand type is not supported for the operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALUNSUPPORTEDUNNARYTYPE ((HRESULT)0xC0047086L)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALUNARYOPERATIONFAILED
//
// MessageText:
//
// The unary operation "%1!s!" failed with error code 0x%2!8.8X!. An internal error occurred, or there is an out-of-memory condition.
//
#define DTS_E_EXPREVALUNARYOPERATIONFAILED ((HRESULT)0xC0047087L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a unary operation.

//
// MessageId: DTS_E_EXPREVALUNARYOPERATIONSETTYPEFAILED
//
// MessageText:
//
// Attempt to set the result type of unary operation "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALUNARYOPERATIONSETTYPEFAILED ((HRESULT)0xC0047088L)

////////////////////////////////////////////////////////////////////////////
// The type of the parameter could not be implicitly cast into a compatible type for the function. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALPARAMTYPEMISMATCH
//
// MessageText:
//
// The function "%1!s!" does not support the data type "%2!s!" for parameter number %3!d!. The type of the parameter could not be implicitly cast into a compatible type for the function. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALPARAMTYPEMISMATCH  ((HRESULT)0xC0047089L)

////////////////////////////////////////////////////////////////////////////
// The function name is incorrect or does not exist.

//
// MessageId: DTS_E_EXPREVALINVALIDFUNCTION
//
// MessageText:
//
// The function "%1!s!" was not recognized. Either the function name is incorrect or does not exist.
//
#define DTS_E_EXPREVALINVALIDFUNCTION    ((HRESULT)0xC004708AL)

////////////////////////////////////////////////////////////////////////////
// The length parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALFNSUBSTRINGINVALIDLENGTH
//
// MessageText:
//
// The length %1!d! is not valid for function "%2!s!". The length parameter cannot be negative. Change the length parameter to zero or a positive value.
//
#define DTS_E_EXPREVALFNSUBSTRINGINVALIDLENGTH ((HRESULT)0xC004708BL)

////////////////////////////////////////////////////////////////////////////
// Start index is 1-based, not 0-based.

//
// MessageId: DTS_E_EXPREVALFNSUBSTRINGINVALIDSTARTINDEX
//
// MessageText:
//
// The start index %1!d! is not valid for function "%2!s!". The start index value must be an integer greater than 0. Start index is one-based, not zero-based.
//
#define DTS_E_EXPREVALFNSUBSTRINGINVALIDSTARTINDEX ((HRESULT)0xC004708CL)

////////////////////////////////////////////////////////////////////////////
// The attempt to perform the character mapping failed.

//
// MessageId: DTS_E_EXPREVALCHARMAPPINGFAILED
//
// MessageText:
//
// The function "%1!s!" cannot perform the character mapping on string "%2!s!".
//
#define DTS_E_EXPREVALCHARMAPPINGFAILED  ((HRESULT)0xC004708EL)

////////////////////////////////////////////////////////////////////////////
// The date part specified for the function was not recognized.

//
// MessageId: DTS_E_EXPREVALINVALIDDATEPART
//
// MessageText:
//
// "%1!s!" is not a valid date part for function "%2!s!".
//
#define DTS_E_EXPREVALINVALIDDATEPART    ((HRESULT)0xC004708FL)

////////////////////////////////////////////////////////////////////////////
// Parameters of NULL() must be static.  That is, they cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLPARAM
//
// MessageText:
//
// Parameter number %1!d! of the function NULL with data type "%2!s!" is not valid. The parameters of NULL() must be static, and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALINVALIDNULLPARAM   ((HRESULT)0xC0047090L)

////////////////////////////////////////////////////////////////////////////
// A parameter of NULL() must be an integer or a type that can be converted to an integer.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLPARAMTYPE
//
// MessageText:
//
// Parameter number %1!d! of the function NULL with data type "%2!s!" is not an integer. A parameter of NULL() must be an integer or a type that can be converted to an integer.
//
#define DTS_E_EXPREVALINVALIDNULLPARAMTYPE ((HRESULT)0xC0047091L)

////////////////////////////////////////////////////////////////////////////
// This parameter must be static.  That is, it cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALFUNCTIONPARAMNOTSTATIC
//
// MessageText:
//
// Parameter number %1!d! of the function "%2!s!" is not static. This parameter must be static, and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALFUNCTIONPARAMNOTSTATIC ((HRESULT)0xC0047092L)

////////////////////////////////////////////////////////////////////////////
// Parameters of cast operators must be static.  That is, they cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTPARAM
//
// MessageText:
//
// Parameter number %1!d! of the cast to data type "%2!s!" is not valid. The parameters of cast operators must be static, and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALINVALIDCASTPARAM   ((HRESULT)0xC0047093L)

////////////////////////////////////////////////////////////////////////////
// A parameter of a cast operator must be an integer or a type that can be converted to an integer.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTPARAMTYPE
//
// MessageText:
//
// Parameter number %1!d! of the cast to data type "%2!s!" is not an integer. A parameter of a cast operator must be an integer or a type that can be converted to an integer.
//
#define DTS_E_EXPREVALINVALIDCASTPARAMTYPE ((HRESULT)0xC0047094L)

////////////////////////////////////////////////////////////////////////////
// The requested cast is not supported.

//
// MessageId: DTS_E_EXPREVALINVALIDCAST
//
// MessageText:
//
// Cannot cast expression "%1!s!" from data type "%2!s!" to data type "%3!s!". The requested cast is not supported.
//
#define DTS_E_EXPREVALINVALIDCAST        ((HRESULT)0xC0047095L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements at the location specified.

//
// MessageId: DTS_E_EXPREVALINVALIDTOKEN
//
// MessageText:
//
// Attempt to parse the expression "%1!s!" failed.  The token "%2!s!" at line number "%3!s!", character number "%4!s!" was not recognized. The expression cannot be parsed because it contains invalid elements at the location specified.
//
#define DTS_E_EXPREVALINVALIDTOKEN       ((HRESULT)0xC0047096L)

////////////////////////////////////////////////////////////////////////////
// The expression failed to parse for an unknown reason.

//
// MessageId: DTS_E_EXPREVALUNEXPECTEDPARSEERROR
//
// MessageText:
//
// An error occurred when parsing the expression "%1!s!". The expression failed to parse for an unknown reason.
//
#define DTS_E_EXPREVALUNEXPECTEDPARSEERROR ((HRESULT)0xC0047097L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed. It might contain invalid elements, or it might not be well-formed. We may have run out of memory.

//
// MessageId: DTS_E_EXPREVALFAILEDTOPARSEEXPRESSIONWITHHR
//
// MessageText:
//
// Attempt to parse the expression "%1!s!" failed and returned error code 0x%2!8.8X!. The expression cannot be parsed. It might contain invalid elements or it might not be well-formed. There may also be an out-of-memory error.
//
#define DTS_E_EXPREVALFAILEDTOPARSEEXPRESSIONWITHHR ((HRESULT)0xC0047098L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed. It might contain invalid elements, or it might not be well-formed.

//
// MessageId: DTS_E_EXPREVALFAILEDTOPARSEEXPRESSION
//
// MessageText:
//
// The expression "%1!s!" is not valid and cannot be parsed. The expression may contain invalid elements or it may not be well-formed.
//
#define DTS_E_EXPREVALFAILEDTOPARSEEXPRESSION ((HRESULT)0xC0047099L)

////////////////////////////////////////////////////////////////////////////
// Attempted to compute or get the string of an empty expression.

//
// MessageId: DTS_E_EXPREVALEXPRESSIONEMPTY
//
// MessageText:
//
// There was no expression to compute. An attempt was made to compute or get the string of an empty expression.
//
#define DTS_E_EXPREVALEXPRESSIONEMPTY    ((HRESULT)0xC004709AL)

////////////////////////////////////////////////////////////////////////////
// Expression computation failed.

//
// MessageId: DTS_E_EXPREVALCOMPUTEFAILED
//
// MessageText:
//
// Attempt to compute the expression "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALCOMPUTEFAILED      ((HRESULT)0xC004709BL)

////////////////////////////////////////////////////////////////////////////
// Failed when attempting to generate a displayable string that represents the expression.

//
// MessageId: DTS_E_EXPREVALBUILDSTRINGFAILED
//
// MessageText:
//
// Attempt to generate a string representation of the expression failed with error code 0x%1!8.8X!. Failed when attempting to generate a displayable string that represents the expression.
//
#define DTS_E_EXPREVALBUILDSTRINGFAILED  ((HRESULT)0xC004709CL)

////////////////////////////////////////////////////////////////////////////
// The result of the expression should be written to an input/output column, but the data type of the expression cannot be converted to the data type of the column.

//
// MessageId: DTS_E_EXPREVALCANNOTCONVERTRESULT
//
// MessageText:
//
// Cannot convert the expression result data type "%1!s!" to the column data type "%2!s!". The result of the expression should be written to an input/output column, but the data type of the expression cannot be converted to the data type of the column.
//
#define DTS_E_EXPREVALCANNOTCONVERTRESULT ((HRESULT)0xC004709DL)

////////////////////////////////////////////////////////////////////////////
// The conditional expression of the conditional operator must be of type DT_BOOL.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPINVALIDCONDITIONTYPE
//
// MessageText:
//
// The conditional expression "%1!s!" of the conditional operator has an invalid data type of "%2!s!". The conditional expression of the conditional operator must return a Boolean, which is type DT_BOOL.
//
#define DTS_E_EXPREVALCONDITIONALOPINVALIDCONDITIONTYPE ((HRESULT)0xC004709EL)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into compatible types for the conditional operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPTYPEMISMATCH
//
// MessageText:
//
// The data types "%1!s!" and "%2!s!" are incompatible for the conditional operator. The operand types cannot be implicitly cast into compatible types for the conditional operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALCONDITIONALOPTYPEMISMATCH ((HRESULT)0xC004709FL)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a conditional expression.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPSETTYPEFAILED
//
// MessageText:
//
// Attempt to set the result type of conditional operation "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALCONDITIONALOPSETTYPEFAILED ((HRESULT)0xC00470A0L)

////////////////////////////////////////////////////////////////////////////
// The buffer manager shutdown leaving this outstanding buffer, which would have been leaked. The owner of this buffer has overstayed their welcome.

//
// MessageId: DTS_E_BUFFERORPHANED
//
// MessageText:
//
// This buffer has been orphaned. The buffer manager has shut down, leaving an outstanding buffer and no cleanup will occur for the buffer. There is a potential for memory leaks and other problems.
//
#define DTS_E_BUFFERORPHANED             ((HRESULT)0xC00470A1L)

////////////////////////////////////////////////////////////////////////////
// The input column specified was not found in the input column collection.

//
// MessageId: DTS_E_EXPREVALINPUTCOLUMNNAMENOTFOUND
//
// MessageText:
//
// Attempt to find the input column named "%1!s!" failed with error code 0x%2!8.8X!. The input column specified was not found in the input column collection.
//
#define DTS_E_EXPREVALINPUTCOLUMNNAMENOTFOUND ((HRESULT)0xC00470A2L)

//
// MessageId: DTS_E_EXPREVALINPUTCOLUMNIDNOTFOUND
//
// MessageText:
//
// Attempt to find the input column with lineage ID %1!d! failed with error code 0x%2!8.8X!. The input column was not found in the input column collection.
//
#define DTS_E_EXPREVALINPUTCOLUMNIDNOTFOUND ((HRESULT)0xC00470A3L)

////////////////////////////////////////////////////////////////////////////
// The specified token is invalid. If the token was intended to be a variable name, it should be prefixed with the @ symbol.

//
// MessageId: DTS_E_EXPREVALNOINPUTCOLUMNCOLLECTIONFORCOLUMNNAME
//
// MessageText:
//
// The expression contains unrecognized token "%1!s!". If "%1!s!" is a variable, it should be expressed as "@%1!s!". The specified token is not valid. If the token is intended to be a variable name, it should be prefixed with the @ symbol.
//
#define DTS_E_EXPREVALNOINPUTCOLUMNCOLLECTIONFORCOLUMNNAME ((HRESULT)0xC00470A4L)

////////////////////////////////////////////////////////////////////////////
// The token appears to be an input column lineage ID reference, but the input column collection has not been provided to the expression evaluator in this context (as is the case for runtime expressions).

//
// MessageId: DTS_E_EXPREVALNOINPUTCOLUMNCOLLECTIONFORCOLUMNID
//
// MessageText:
//
// The expression contains unrecognized token "#%1!d!".
//
#define DTS_E_EXPREVALNOINPUTCOLUMNCOLLECTIONFORCOLUMNID ((HRESULT)0xC00470A5L)

////////////////////////////////////////////////////////////////////////////
// The variable specified was not found in the variable collection. It might not exist in the correct scope.

//
// MessageId: DTS_E_EXPREVALVARIABLENOTFOUND
//
// MessageText:
//
// The variable "%1!s!" was not found in the Variables collection. The variable might not exist in the correct scope.
//
#define DTS_E_EXPREVALVARIABLENOTFOUND   ((HRESULT)0xC00470A6L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed. It might contain invalid elements, or be missing part of a required element (such as unmatched parentheses), or might not be well-formed.

//
// MessageId: DTS_E_EXPREVALINVALIDTOKENSTATE
//
// MessageText:
//
// Attempt to parse the expression "%1!s!" failed. The expression might contain an invalid token, an incomplete token, or an invalid element. It might not be well-formed, or might be missing part of a required element such as a parenthesis.
//
#define DTS_E_EXPREVALINVALIDTOKENSTATE  ((HRESULT)0xC00470A7L)

//
// MessageId: DTS_E_BLANKOUTPUTCOLUMNNAME
//
// MessageText:
//
// The name for "%1!s!" is blank, and names cannot be blank.
//
#define DTS_E_BLANKOUTPUTCOLUMNNAME      ((HRESULT)0xC00470A8L)

////////////////////////////////////////////////////////////////////////////
// Set HasSideEffects to false

//
// MessageId: DTS_E_HASSIDEEFFECTSWITHSYNCINP
//
// MessageText:
//
// The "%1!s!" has the HasSideEffects property set to TRUE, but "%1!s!" is synchronous and cannot have side effects. Set the HasSideEffects property to FALSE.
//
#define DTS_E_HASSIDEEFFECTSWITHSYNCINP  ((HRESULT)0xC00470A9L)

////////////////////////////////////////////////////////////////////////////
// The specified code page is not installed on the machine.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTCODEPAGE
//
// MessageText:
//
// The value, %1!d!, specified for the code page parameter of the cast to data type "%2!s!", is not valid. The code page is not installed on the machine.
//
#define DTS_E_EXPREVALINVALIDCASTCODEPAGE ((HRESULT)0xC00470AAL)

////////////////////////////////////////////////////////////////////////////
// The specified precision was out of range for the type cast.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTPRECISION
//
// MessageText:
//
// The value %1!d! specified for the precision parameter of the cast to data type "%2!s!" is not valid. Precision must be in the range %3!d! to %4!d! and the precision value is out of range for the type cast.
//
#define DTS_E_EXPREVALINVALIDCASTPRECISION ((HRESULT)0xC00470ABL)

////////////////////////////////////////////////////////////////////////////
// The specified scale was out of range for the type cast. Scale must not exceed precision and must not be negative.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTSCALE
//
// MessageText:
//
// The value %1!d! specified for the scale parameter of the cast to data type "%2!s!" is not valid. The scale must be in the range %3!d! to %4!d! and the scale value is out of range for the type cast. Scale must not exceed precision and must be positive.
//
#define DTS_E_EXPREVALINVALIDCASTSCALE   ((HRESULT)0xC00470ACL)

//
// MessageId: DTS_E_NONSORTEDOUTPUTHASSORTKEYPOSITIONS
//
// MessageText:
//
// The IsSorted property for "%1!s!" is false, but %2!lu! of its output columns' SortKeyPositions are non-zero.
//
#define DTS_E_NONSORTEDOUTPUTHASSORTKEYPOSITIONS ((HRESULT)0xC00470ADL)

////////////////////////////////////////////////////////////////////////////
// The code page of the left operand does not match the code page of the right operand.  For the conditional operator on the specified type, the code pages must be the same.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPCODEPAGEMISMATCH
//
// MessageText:
//
// The code pages must match for operands of conditional operation "%1!s!" for type %2!s!. The code page of the left operand does not match the code page of the right operand. For the conditional operator on the specified type, the code pages must be the same.
//
#define DTS_E_EXPREVALCONDITIONALOPCODEPAGEMISMATCH ((HRESULT)0xC00470AFL)

//
// MessageId: DTS_E_REFERENCEDMETADATABADCOUNT
//
// MessageText:
//
// Input "%1!s!" (%2!d!) references input "%3!s!" (%4!d!), but they do not have the same number of columns. Input %5!d! has %6!d! columns, while input %7!d! has %8!d! columns.
//
#define DTS_E_REFERENCEDMETADATABADCOUNT ((HRESULT)0xC00470B1L)

//
// MessageId: DTS_E_OBJECTLINEAGEIDNOTFOUND
//
// MessageText:
//
// No object exists with a lineage ID of %1!d!.
//
#define DTS_E_OBJECTLINEAGEIDNOTFOUND    ((HRESULT)0xC00470B2L)

//
// MessageId: DTS_E_FILENAMEOUTPUTCOLUMNOTFOUND
//
// MessageText:
//
// The output column for the file name cannot be found.
//
#define DTS_E_FILENAMEOUTPUTCOLUMNOTFOUND ((HRESULT)0xC00470B3L)

//
// MessageId: DTS_E_FILENAMEOUTPUTCOLUMNINVALIDDATATYPE
//
// MessageText:
//
// The output column for the file name is not a null-terminated Unicode character string, which is data type DT_WSTR.
//
#define DTS_E_FILENAMEOUTPUTCOLUMNINVALIDDATATYPE ((HRESULT)0xC00470B4L)

////////////////////////////////////////////////////////////////////////////
// The target thread is probably shutting down.

//
// MessageId: DTS_E_DISTRIBUTORADDFAILED
//
// MessageText:
//
// A distributor failed to give a buffer to thread "%1!s!" because of error 0x%2!8.8X!. The target thread is probably shutting down.
//
#define DTS_E_DISTRIBUTORADDFAILED       ((HRESULT)0xC00470B5L)

//
// MessageId: DTS_E_LOCALENOTINSTALLED
//
// MessageText:
//
// The LocaleID %1!ld! is not installed on this system.
//
#define DTS_E_LOCALENOTINSTALLED         ((HRESULT)0xC00470B6L)

////////////////////////////////////////////////////////////////////////////
// The specified escape sequence is not supported in string literals in the expression evaluator. Hexadecimal escape sequences must be of the form \xhhhh where h is a valid hexadecimal digit.

//
// MessageId: DTS_E_EXPREVALILLEGALHEXESCAPEINSTRINGLITERAL
//
// MessageText:
//
// The string literal "%1!s!" contains an illegal hexadecimal escape sequence of  "\x%2!s!". The escape sequence is not supported in string literals in the expression evaluator. The hexadecimal escape sequences must be of the form \xhhhh where h is a valid hexadecimal digit.
//
#define DTS_E_EXPREVALILLEGALHEXESCAPEINSTRINGLITERAL ((HRESULT)0xC00470B7L)

////////////////////////////////////////////////////////////////////////////
// The specified escape sequence is not supported in string literals in the expression evaluator. If the user is just trying to put a backslash in the string, "\\" will achieve that.

//
// MessageId: DTS_E_EXPREVALILLEGALESCAPEINSTRINGLITERAL
//
// MessageText:
//
// The string literal "%1!s!" contains an illegal escape sequence of "\%2!c!". The escape sequence is not supported in string literals in the expression evaluator. If a backslash is needed in the string, use a double backslash, "\\".
//
#define DTS_E_EXPREVALILLEGALESCAPEINSTRINGLITERAL ((HRESULT)0xC00470B8L)

////////////////////////////////////////////////////////////////////////////
// We found an asynchronous output with no output columns, and that's not allowed.

//
// MessageId: DTS_E_NOOUTPUTCOLUMNS
//
// MessageText:
//
// "%1!s!" contains no output columns. An asynchronous output must contain output columns.
//
#define DTS_E_NOOUTPUTCOLUMNS            ((HRESULT)0xC00470B9L)

//
// MessageId: DTS_E_LOBDATATYPENOTSUPPORTED
//
// MessageText:
//
// The "%1!s!" has a long object data type of DT_TEXT, DT_NTEXT, or DT_IMAGE, which is not supported.
//
#define DTS_E_LOBDATATYPENOTSUPPORTED    ((HRESULT)0xC00470BAL)

////////////////////////////////////////////////////////////////////////////
// This is an internal error. This situation should never occur, but if it does, we have this error message to help us research why it might have happened.

//
// MessageId: DTS_E_OUTPUTWITHMULTIPLEERRORS
//
// MessageText:
//
// Output ID %1!d! was given multiple error output configurations. First %2!d! and %3!d!, then %4!d! and %5!d!.
//
#define DTS_E_OUTPUTWITHMULTIPLEERRORS   ((HRESULT)0xC00470BBL)

//
// MessageId: DTS_E_FAILEDDURINGOLEDBDATATYPECONVERSIONCHECK
//
// MessageText:
//
// The OLE DB provider failed during the data type conversion verification for "%1!s!".
//
#define DTS_E_FAILEDDURINGOLEDBDATATYPECONVERSIONCHECK ((HRESULT)0xC00470BCL)

////////////////////////////////////////////////////////////////////////////
// Called AddRow or RemoveRow on a buffer that has the end of rowset flag.

//
// MessageId: DTS_E_BUFFERISEOR
//
// MessageText:
//
// This buffer represents the end of the rowset and its row count cannot be altered.  An attempt was made to call AddRow or RemoveRow on a buffer that has the end of rowset flag.
//
#define DTS_E_BUFFERISEOR                ((HRESULT)0xC00470BDL)

////////////////////////////////////////////////////////////////////////////
// The specified type is not supported or was not recognized.

//
// MessageId: DTS_E_EXPREVALUNSUPPORTEDTYPE
//
// MessageText:
//
// The data type "%1!s!" is not supported in an expression. The specified type is not supported or is not valid.
//
#define DTS_E_EXPREVALUNSUPPORTEDTYPE    ((HRESULT)0xC00470BEL)

////////////////////////////////////////////////////////////////////////////
// There's an error in the component. It should have reported EOR. The pipeline will shut down execution to avoid unpredictable results.

//
// MessageId: DTS_E_PRIMEOUTPUTNOEOR
//
// MessageText:
//
// The PrimeOutput method on "%1!s!" returned success, but did not report an end of the rowset. There is an error in the component. It should have reported an end-of-row. The pipeline will shut down execution to avoid unpredictable results.
//
#define DTS_E_PRIMEOUTPUTNOEOR           ((HRESULT)0xC00470BFL)

////////////////////////////////////////////////////////////////////////////
// The source type was too large to fit in the destination type.

//
// MessageId: DTS_E_EXPREVALDATACONVERSIONOVERFLOW
//
// MessageText:
//
// An overflow occurred while converting from data type "%1!s!" to data type "%2!s!". The source type is too large for the destination type.
//
#define DTS_E_EXPREVALDATACONVERSIONOVERFLOW ((HRESULT)0xC00470C0L)

////////////////////////////////////////////////////////////////////////////
// The source type could not be converted to the destination type.

//
// MessageId: DTS_E_EXPREVALDATACONVERSIONNOTSUPPORTED
//
// MessageText:
//
// Conversion from data type "%1!s!" to data type "%2!s!" is unsupported. The source type cannot be converted to the destination type.
//
#define DTS_E_EXPREVALDATACONVERSIONNOTSUPPORTED ((HRESULT)0xC00470C1L)

////////////////////////////////////////////////////////////////////////////
// The source type could not be converted to the destination type due to the specified error.

//
// MessageId: DTS_E_EXPREVALDATACONVERSIONFAILED
//
// MessageText:
//
// Error code 0x%1!8.8X! occurred attempting to convert from data type %2!s! to data type %3!s!.
//
#define DTS_E_EXPREVALDATACONVERSIONFAILED ((HRESULT)0xC00470C2L)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPERATIONFAILED
//
// MessageText:
//
// The conditional operation "%1!s!" failed with error code 0x%2!8.8X!. There was an internal error or an out-of-memory error.
//
#define DTS_E_EXPREVALCONDITIONALOPERATIONFAILED ((HRESULT)0xC00470C3L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to perform the cast.

//
// MessageId: DTS_E_EXPREVALCASTFAILED
//
// MessageText:
//
// Casting expression "%1!s!" from data type "%2!s!" to data type "%3!s!" failed with error code 0x%4!8.8X!.
//
#define DTS_E_EXPREVALCASTFAILED         ((HRESULT)0xC00470C4L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to evaluate the function.

//
// MessageId: DTS_E_EXPREVALFUNCTIONCOMPUTEFAILED
//
// MessageText:
//
// Evaluating function "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALFUNCTIONCOMPUTEFAILED ((HRESULT)0xC00470C5L)

////////////////////////////////////////////////////////////////////////////
// The parameter could not be converted into a static value (typically, an integer).

//
// MessageId: DTS_E_EXPREVALFUNCTIONCONVERTPARAMTOMEMBERFAILED
//
// MessageText:
//
// Parameter number %1!d! of the function "%2!s!" cannot be converted to a static value.
//
#define DTS_E_EXPREVALFUNCTIONCONVERTPARAMTOMEMBERFAILED ((HRESULT)0xC00470C6L)

//
// MessageId: DTS_E_REDIRECTROWUNAVAILABLEWITHFASTLOADANDZEROMAXINSERTCOMMITSIZE
//
// MessageText:
//
// The error row disposition on "%1!s!" cannot be set to redirect the row when the fast load option is turned on, and the maximum insert commit size is set to zero.
//
#define DTS_E_REDIRECTROWUNAVAILABLEWITHFASTLOADANDZEROMAXINSERTCOMMITSIZE ((HRESULT)0xC00470C7L)

////////////////////////////////////////////////////////////////////////////
// The code page of the left operand does not match the code page of the right operand.  For the specified binary operator on the specified type, the code pages must be the same.

//
// MessageId: DTS_E_EXPREVALBINARYOPERATORCODEPAGEMISMATCH
//
// MessageText:
//
// The code pages for operands of binary operator "%1!s!" for type "%2!s!" must match. Currently, the code page of the left operand does not match the code page of the right operand. For the specified binary operator on the specified type, the code pages must be the same.
//
#define DTS_E_EXPREVALBINARYOPERATORCODEPAGEMISMATCH ((HRESULT)0xC00470CEL)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to get the value of the variable.

//
// MessageId: DTS_E_EXPREVALVARIABLECOMPUTEFAILED
//
// MessageText:
//
// Retrieving the value of Variable "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALVARIABLECOMPUTEFAILED ((HRESULT)0xC00470CFL)

////////////////////////////////////////////////////////////////////////////
// The variable specified is of an unsupported type.

//
// MessageId: DTS_E_EXPREVALVARIABLETYPENOTSUPPORTED
//
// MessageText:
//
// The data type of variable "%1!s!" is not supported in an expression.
//
#define DTS_E_EXPREVALVARIABLETYPENOTSUPPORTED ((HRESULT)0xC00470D0L)

////////////////////////////////////////////////////////////////////////////
// The code page of the source must match the code page requested for the destination.

//
// MessageId: DTS_E_EXPREVALCASTCODEPAGEMISMATCH
//
// MessageText:
//
// Unable to cast expression "%1!s!" from data type "%2!s!" to data type "%3!s!" because the code page of the value being cast (%4!d!) does not match the requested result code page (%5!d!). The code page of the source must match the code page requested for the destination.
//
#define DTS_E_EXPREVALCASTCODEPAGEMISMATCH ((HRESULT)0xC00470D1L)

////////////////////////////////////////////////////////////////////////////
// An attempt was made to set the DefaultBufferSize property to a value that's too small or too large.

//
// MessageId: DTS_E_BUFFERSIZEOUTOFRANGE
//
// MessageText:
//
// The default buffer size must be between %1!d! and %2!d! bytes. An attempt was made to set the DefaultBufferSize property to a value that is too small or too large.
//
#define DTS_E_BUFFERSIZEOUTOFRANGE       ((HRESULT)0xC00470D2L)

////////////////////////////////////////////////////////////////////////////
// An attempt was made to set the DefaultBufferMaxRows property to a value that's too small.

//
// MessageId: DTS_E_BUFFERMAXROWSIZEOUTOFRANGE
//
// MessageText:
//
// The default buffer maximum rows must be larger than %1!d! rows. An attempt was made to set the DefaultBufferMaxRows property to a value that is too small.
//
#define DTS_E_BUFFERMAXROWSIZEOUTOFRANGE ((HRESULT)0xC00470D3L)

//
// MessageId: DTS_E_EXTERNALCOLUMNMETADATACODEPAGEMISMATCH
//
// MessageText:
//
// The code page on %1!s! is %2!d! and is required to be %3!d!.
//
#define DTS_E_EXTERNALCOLUMNMETADATACODEPAGEMISMATCH ((HRESULT)0xC00470D4L)

////////////////////////////////////////////////////////////////////////////
// An attempt was made to set the property to a value that's too small.

//
// MessageId: DTS_E_THREADCOUNTOUTOFRANGE
//
// MessageText:
//
// Failed to assign %3!d! to the EngineThreads property of the Data Flow task. The value must be between %1!d! and %2!d!. 
//
#define DTS_E_THREADCOUNTOUTOFRANGE      ((HRESULT)0xC00470D5L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements (a single quoation mark) at the location specified. A double quotation mark might be required there.

//
// MessageId: DTS_E_EXPREVALINVALIDTOKENSINGLEQUOTE
//
// MessageText:
//
// Parsing the expression "%1!s!" failed. The single quotation mark at line number "%2!s!", character number "%3!s!", was not expected.
//
#define DTS_E_EXPREVALINVALIDTOKENSINGLEQUOTE ((HRESULT)0xC00470D6L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements (a single equal sign) at the location specified. A double equals might be required there.

//
// MessageId: DTS_E_EXPREVALINVALIDTOKENSINGLEEQUAL
//
// MessageText:
//
// Parsing the expression "%1!s!" failed. The equal sign (=) at line number "%2!s!", character number "%3!s!", was not expected. A double equals sign (==) may be required at the location specified.
//
#define DTS_E_EXPREVALINVALIDTOKENSINGLEEQUAL ((HRESULT)0xC00470D7L)

////////////////////////////////////////////////////////////////////////////
// A component failed its put_ReferenceTracker call.

//
// MessageId: DTS_E_INDIVIDUALPUTREFTRACKERFAILED
//
// MessageText:
//
// Component "%1!s!" failed to cache the runtime object reference tracker collection and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPUTREFTRACKERFAILED ((HRESULT)0xC00470DAL)

////////////////////////////////////////////////////////////////////////////
// The input column specified exists on more than one component.

//
// MessageId: DTS_E_EXPREVALAMBIGUOUSINPUTCOLUMNNAME
//
// MessageText:
//
// There are multiple input columns with the name "%1!s!". The desired input column must be specified uniquely as [Component Name].[%2!s!] or referenced by lineage ID. Currently, the input column specified exists on more than one component.
//
#define DTS_E_EXPREVALAMBIGUOUSINPUTCOLUMNNAME ((HRESULT)0xC00470DBL)

////////////////////////////////////////////////////////////////////////////
// The input column specified was not found in the input column collection.

//
// MessageId: DTS_E_EXPREVALDOTTEDINPUTCOLUMNNAMENOTFOUND
//
// MessageText:
//
// Locating the input column named "[%1!s!].[%2!s!]" failed with error code 0x%3!8.8X!. The input column was not found in the input column collection.
//
#define DTS_E_EXPREVALDOTTEDINPUTCOLUMNNAMENOTFOUND ((HRESULT)0xC00470DCL)

////////////////////////////////////////////////////////////////////////////
// The variable specified exists in more than one namespace.

//
// MessageId: DTS_E_EXPREVALAMBIGUOUSVARIABLENNAME
//
// MessageText:
//
// There are multiple variables with the name "%1!s!". The desired variable must be specified uniquely as @[Namespace::%2!s!]. The variable exists in more than one namespace.
//
#define DTS_E_EXPREVALAMBIGUOUSVARIABLENNAME ((HRESULT)0xC00470DDL)

////////////////////////////////////////////////////////////////////////////
// Internal pipeline error. Try running with the OptimizedMode property set false.

//
// MessageId: DTS_E_REDUCTIONFAILED
//
// MessageText:
//
// The Data Flow engine scheduler failed to reduce the execution plan for the pipeline. Set the OptimizedMode property to false.
//
#define DTS_E_REDUCTIONFAILED            ((HRESULT)0xC00470DEL)

////////////////////////////////////////////////////////////////////////////
// A negative value was passed to the SQRT function.

//
// MessageId: DTS_E_EXPREVALSQRTINVALIDPARAM
//
// MessageText:
//
// The function SQRT cannot operate on negative values, and a negative value was passed to the SQRT function.
//
#define DTS_E_EXPREVALSQRTINVALIDPARAM   ((HRESULT)0xC00470DFL)

////////////////////////////////////////////////////////////////////////////
// A zero or negative value was passed to the LN function.

//
// MessageId: DTS_E_EXPREVALLNINVALIDPARAM
//
// MessageText:
//
// The function LN cannot operate on zero or negative values, and a zero or negative value was passed to the LN function.
//
#define DTS_E_EXPREVALLNINVALIDPARAM     ((HRESULT)0xC00470E0L)

////////////////////////////////////////////////////////////////////////////
// A zero or negative value was passed to the LOG function.

//
// MessageId: DTS_E_EXPREVALLOGINVALIDPARAM
//
// MessageText:
//
// The function LOG cannot operate on zero or negative values, and a zero or negative value was passed to the LOG function.
//
#define DTS_E_EXPREVALLOGINVALIDPARAM    ((HRESULT)0xC00470E1L)

////////////////////////////////////////////////////////////////////////////
// The values passed in to the POWER function cannot be evaluated.

//
// MessageId: DTS_E_EXPREVALPOWERINVALIDPARAM
//
// MessageText:
//
// The parameters passed to the function POWER cannot be evaluated and yield an indeterminate result.
//
#define DTS_E_EXPREVALPOWERINVALIDPARAM  ((HRESULT)0xC00470E2L)

////////////////////////////////////////////////////////////////////////////
// Something is wrong with the runtime.

//
// MessageId: DTS_E_NOCANCELEVENT
//
// MessageText:
//
// The runtime cannot provide a cancel event because of error 0x%1!8.8X!.
//
#define DTS_E_NOCANCELEVENT              ((HRESULT)0xC00470E3L)

////////////////////////////////////////////////////////////////////////////
// Somebody set the cancel event.

//
// MessageId: DTS_E_CANCELRECEIVED
//
// MessageText:
//
// The pipeline received a request to cancel and is shutting down.
//
#define DTS_E_CANCELRECEIVED             ((HRESULT)0xC00470E4L)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the operation overflows the type of the result

//
// MessageId: DTS_E_EXPREVALUNARYOPOVERFLOW
//
// MessageText:
//
// The result of the unary minus (negation) operation "%1!s!" exceeds the maximum size for result data type "%2!s!". The magnitude of the result of the operation overflows the type of the result.
//
#define DTS_E_EXPREVALUNARYOPOVERFLOW    ((HRESULT)0xC00470E5L)

////////////////////////////////////////////////////////////////////////////
// A placeholder function parameter or operand was found in the expression.

//
// MessageId: DTS_E_EXPREVALPLACEHOLDERINEXPRESSION
//
// MessageText:
//
// The placeholder "%1!s!" was found in an expression. This must be replaced with an actual parameter or operand.
//
#define DTS_E_EXPREVALPLACEHOLDERINEXPRESSION ((HRESULT)0xC00470E6L)

////////////////////////////////////////////////////////////////////////////
// The length parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALFNLEFTRIGHTINVALIDLENGTH
//
// MessageText:
//
// The length %1!d! specified for function "%2!s!" is negative, and is not valid. The length parameter must be positive.
//
#define DTS_E_EXPREVALFNLEFTRIGHTINVALIDLENGTH ((HRESULT)0xC00470E7L)

////////////////////////////////////////////////////////////////////////////
// The repeat count parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALFNREPLICATEINVALIDREPEATCOUNT
//
// MessageText:
//
// The repeat count %1!d! is negative and is not valid for function "%2!s!". The repeat count parameter cannot be negative.
//
#define DTS_E_EXPREVALFNREPLICATEINVALIDREPEATCOUNT ((HRESULT)0xC00470E8L)

////////////////////////////////////////////////////////////////////////////
// Attempting to read the variable failed with the specified error.

//
// MessageId: DTS_E_EXPREVALVARIABLECOULDNOTBEREAD
//
// MessageText:
//
// Reading the variable "%1!s!" failed with error code 0x%2!8.8X!.
//
#define DTS_E_EXPREVALVARIABLECOULDNOTBEREAD ((HRESULT)0xC00470EAL)

////////////////////////////////////////////////////////////////////////////
// A DT_STR operand that is not an input column or the result of a cast cannot be used in a binary operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALBINARYOPDTSTRNOTSUPPORTED
//
// MessageText:
//
// For operands of a binary operation, the data type DT_STR is supported only for input columns and cast operations. The expression "%1!s!" has a DT_STR operand that is not an input column or the result of a cast, and cannot be used in a binary operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALBINARYOPDTSTRNOTSUPPORTED ((HRESULT)0xC00470ECL)

////////////////////////////////////////////////////////////////////////////
// A DT_STR operand that is not an input column or the result of a cast cannot be used with the conditional operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALCONDITIONALOPDTSTRNOTSUPPORTED
//
// MessageText:
//
// For operands of the conditional operator, the data type DT_STR is supported only for input columns and cast operations. The expression "%1!s!" has a DT_STR operand that is not an input column or the result of a cast, and cannot be used with the conditional operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALCONDITIONALOPDTSTRNOTSUPPORTED ((HRESULT)0xC00470EDL)

////////////////////////////////////////////////////////////////////////////
// The occurrence count parameter must be positive.

//
// MessageId: DTS_E_EXPREVALFNFINDSTRINGINVALIDOCCURRENCECOUNT
//
// MessageText:
//
// The occurrence count %1!d! is not valid for function "%2!s!". This parameter must be greater than zero.
//
#define DTS_E_EXPREVALFNFINDSTRINGINVALIDOCCURRENCECOUNT ((HRESULT)0xC00470EEL)

////////////////////////////////////////////////////////////////////////////
// A component failed its put_LogEntryInfos call.

//
// MessageId: DTS_E_INDIVIDUALPUTLOGENTRYINFOS
//
// MessageText:
//
// "%1!s!" failed to cache the LogEntryInfos collection and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALPUTLOGENTRYINFOS ((HRESULT)0xC00470EFL)

////////////////////////////////////////////////////////////////////////////
// Date part parameters must be static strings.  That is, they cannot contain dynamic elements such as input columns, and must be of type DT_WSTR.

//
// MessageId: DTS_E_EXPREVALINVALIDDATEPARTNODE
//
// MessageText:
//
// The date part parameter specified for function "%1!s!" is not valid. It must be a static string.  The date part parameter cannot contain dynamic elements, such as input columns, and must be of type DT_WSTR.
//
#define DTS_E_EXPREVALINVALIDDATEPARTNODE ((HRESULT)0xC00470F0L)

////////////////////////////////////////////////////////////////////////////
// The specified length for the type cast is negative.

//
// MessageId: DTS_E_EXPREVALINVALIDCASTLENGTH
//
// MessageText:
//
// The value %1!d! specified for the length parameter of the cast to data type %2!s! is negative and not valid. The length must be positive.
//
#define DTS_E_EXPREVALINVALIDCASTLENGTH  ((HRESULT)0xC00470F1L)

////////////////////////////////////////////////////////////////////////////
// The specified code page is not installed on the machine.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLCODEPAGE
//
// MessageText:
//
// The value %1!d! specified for the code page parameter of the NULL function with data type "%2!s!" is not valid. The code page is not installed on the computer.
//
#define DTS_E_EXPREVALINVALIDNULLCODEPAGE ((HRESULT)0xC00470F2L)

////////////////////////////////////////////////////////////////////////////
// The specified precision was out of range for the NULL function type.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLPRECISION
//
// MessageText:
//
// The value %1!d! specified for the precision parameter of the NULL function with data type "%2!s!" is out of range. Precision must be in the range %3!d! to %4!d!.
//
#define DTS_E_EXPREVALINVALIDNULLPRECISION ((HRESULT)0xC00470F3L)

////////////////////////////////////////////////////////////////////////////
// The specified scale was out of range for the NULL function type. Scale must not exceed precision and must not be negative.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLSCALE
//
// MessageText:
//
// The value %1!d! specified for the scale parameter of the NULL function with data type %2!s! is out of range. Scale must be in the range %3!d! to %4!d!. Scale must not exceed precision and must not be negative.
//
#define DTS_E_EXPREVALINVALIDNULLSCALE   ((HRESULT)0xC00470F4L)

////////////////////////////////////////////////////////////////////////////
// The specified length parameter for the NULL function is negative.

//
// MessageId: DTS_E_EXPREVALINVALIDNULLLENGTH
//
// MessageText:
//
// The value %1!d! specified for the length parameter of the "NULL" function with data type %2!s! is negative and not valid. The length must be positive.
//
#define DTS_E_EXPREVALINVALIDNULLLENGTH  ((HRESULT)0xC00470F5L)

////////////////////////////////////////////////////////////////////////////
// Happens when user assigns a negative value to a property that should be only positive.

//
// MessageId: DTS_E_NEGATIVESNOTALLOWED
//
// MessageText:
//
// The %1!s! can't be assigned a negative value.
//
#define DTS_E_NEGATIVESNOTALLOWED        ((HRESULT)0xC00470F6L)

////////////////////////////////////////////////////////////////////////////
// The column data type has to be one of DT_I1, DT_I2, DT_I4, DT_I8, DT_UI1, DT_UI2, DT_UI4, DT_UI8, DT_R4, DT_R8, DT_DBTIMESTAMP, DT_DBTIMESTAMP2, DT_DBTIMESTAMPOFFSET, DT_DBDATE, DT_DBTIME, DT_DBTIME2, or DT_FILETIME.

//
// MessageId: DTS_E_FASTPARSENOTALLOWED
//
// MessageText:
//
// The "%1!s!" custom property for "%2!s!" cannot be set to true.  The column data type must be one of the following:  DT_I1, DT_I2, DT_I4, DT_I8, DT_UI1, DT_UI2, DT_UI4, DT_UI8, DT_DBTIMESTAMP, DT_DBTIMESTAMP2, DT_DBTIMESTAMPOFFSET, DT_DATE, DT_DBDATE, DT_DBTIME, DT_DBTIME2, or DT_FILETIME.
//
#define DTS_E_FASTPARSENOTALLOWED        ((HRESULT)0xC00470F7L)

////////////////////////////////////////////////////////////////////////////
// Delete the path, add a new one, and attach it.

//
// MessageId: DTS_E_CANNOTREATTACHPATH
//
// MessageText:
//
// The "%1!s!" cannot be reattached. Delete the path, add a new one, and attach it.
//
#define DTS_E_CANNOTREATTACHPATH         ((HRESULT)0xC00470F8L)

////////////////////////////////////////////////////////////////////////////
// The function name was recognized, but the number of parameters was incorrect.

//
// MessageId: DTS_E_EXPREVALINVALIDNUMBEROFPARAMSPLURALSINGULAR
//
// MessageText:
//
// The function "%1!s!" requires %2!d! parameters, not %3!d! parameter. The function name was recognized, but the number of parameters is not valid.
//
#define DTS_E_EXPREVALINVALIDNUMBEROFPARAMSPLURALSINGULAR ((HRESULT)0xC00470F9L)

//
// MessageId: DTS_E_EXPREVALINVALIDNUMBEROFPARAMSSINGULARPLURAL
//
// MessageText:
//
// The function "%1!s!" requires %2!d! parameter, not %3!d! parameters. The function name was recognized, but the number of parameters is not valid.
//
#define DTS_E_EXPREVALINVALIDNUMBEROFPARAMSSINGULARPLURAL ((HRESULT)0xC00470FAL)

//
// MessageId: DTS_E_EXPREVALINVALIDNUMBEROFPARAMSPLURALPLURAL
//
// MessageText:
//
// The function "%1!s!" requires %2!d! parameters, not %3!d! parameters. The function name was recognized, but the number of parameters is not valid.
//
#define DTS_E_EXPREVALINVALIDNUMBEROFPARAMSPLURALPLURAL ((HRESULT)0xC00470FBL)

////////////////////////////////////////////////////////////////////////////
// Out of memory.

//
// MessageId: DTS_E_EXPREVALFAILEDTOPARSEEXPRESSIONOUTOFMEMORY
//
// MessageText:
//
// Attempt to parse the expression "%1!s!" failed because there was an out-of-memory error.
//
#define DTS_E_EXPREVALFAILEDTOPARSEEXPRESSIONOUTOFMEMORY ((HRESULT)0xC00470FCL)

//
// MessageId: DTS_E_INDIVIDUALCHECKPRODUCTLEVELFAILED
//
// MessageText:
//
// The %1!s! failed to be able to perform its required product level check and returned error code 0x%2!8.8X!.
//
#define DTS_E_INDIVIDUALCHECKPRODUCTLEVELFAILED ((HRESULT)0xC00470FDL)

////////////////////////////////////////////////////////////////////////////
// The product level is to low for the component

//
// MessageId: DTS_E_PRODUCTLEVELTOLOW
//
// MessageText:
//
// The %1!s! cannot run on the installed edition of Integration Services. It requires %2!s! or higher.
//
#define DTS_E_PRODUCTLEVELTOLOW          ((HRESULT)0xC00470FEL)

////////////////////////////////////////////////////////////////////////////
// The string literal exceeds the maximum length allowed in an expression.

//
// MessageId: DTS_E_EXPREVALSTRINGLITERALTOOLONG
//
// MessageText:
//
// A string literal in the expression exceeds the maximum allowed length of %1!d! characters.
//
#define DTS_E_EXPREVALSTRINGLITERALTOOLONG ((HRESULT)0xC00470FFL)

////////////////////////////////////////////////////////////////////////////
// The string in the variable exceeds the maximum length allowed in an expression.

//
// MessageId: DTS_E_EXPREVALSTRINGVARIABLETOOLONG
//
// MessageText:
//
// The variable %1!s! contains a string that exceeds the maximum allowed length of %2!d! characters.
//
#define DTS_E_EXPREVALSTRINGVARIABLETOOLONG ((HRESULT)0xC0047100L)

////////////////////////////////////////////////////////////////////////////
// The pipeline component was found, but does not support the required interfaces for use in SQL Server Integration Services.

//
// MessageId: DTS_E_COMPONENT_NOINTERFACE
//
// MessageText:
//
// The %1!s! was found, but it does not support a required Integration Services interface (IDTSRuntimeComponent100).  Obtain an updated version of this component from the component provider.
//
#define DTS_E_COMPONENT_NOINTERFACE      ((HRESULT)0xC0047101L)

////////////////////////////////////////////////////////////////////////////
// Try to add data tap configurations while the package is running.

//
// MessageId: DTS_E_DATATAP_READONLY
//
// MessageText:
//
// Failed to configure data tap while the package is running.
//
#define DTS_E_DATATAP_READONLY           ((HRESULT)0xC0047200L)

////////////////////////////////////////////////////////////////////////////
// The specified data flow path identification is invalid.

//
// MessageId: DTS_E_DATATAP_INVALIDPATH
//
// MessageText:
//
// The specified data flow path identification is invalid.
//
#define DTS_E_DATATAP_INVALIDPATH        ((HRESULT)0xC0047201L)

////////////////////////////////////////////////////////////////////////////
// There is already a data tap configuration on the given path.

//
// MessageId: DTS_E_DATATAP_DUPLICATE
//
// MessageText:
//
// There is already a data tap configuration on the given path. No more configurations are allowed.
//
#define DTS_E_DATATAP_DUPLICATE          ((HRESULT)0xC0047202L)

////////////////////////////////////////////////////////////////////////////
// Could not find the folder settings for the data tap location in the system registry.

//
// MessageId: DTS_E_DATATAP_NOTAPLOCATION
//
// MessageText:
//
// The data flow engine could not find the folder settings in the system registry for the data tap location.
//
#define DTS_E_DATATAP_NOTAPLOCATION      ((HRESULT)0xC0047203L)

////////////////////////////////////////////////////////////////////////////
// The specified file name is invalid.

//
// MessageId: DTS_E_DATATAP_INVALIDFILENAME
//
// MessageText:
//
// The specified data tap file name is invalid.
//
#define DTS_E_DATATAP_INVALIDFILENAME    ((HRESULT)0xC0047204L)

//
// MessageId: DTS_E_CANNOTOPENREGISTRYKEY
//
// MessageText:
//
// The registry key "%1!s!" cannot be opened.
//
#define DTS_E_CANNOTOPENREGISTRYKEY      ((HRESULT)0xC0048000L)

////////////////////////////////////////////////////////////////////////////
// Make sure the component is registered properly or the CLS ID is correct.

//
// MessageId: DTS_E_INVALIDCOMPONENTFILENAME
//
// MessageText:
//
// Cannot get the file name for the component with a CLSID of "%1!s!". Verify that the component is registered properly or that the CLSID provided is correct.
//
#define DTS_E_INVALIDCOMPONENTFILENAME   ((HRESULT)0xC0048001L)

////////////////////////////////////////////////////////////////////////////
// Make sure all components in the Pipeline have valid CLS ID's.

//
// MessageId: DTS_E_UNKNOWNCOMPONENTHASINVALIDCLSID
//
// MessageText:
//
// The CLSID for one of the components is not valid. Verify that all the components in the pipeline have valid CLSIDs.
//
#define DTS_E_UNKNOWNCOMPONENTHASINVALIDCLSID ((HRESULT)0xC0048002L)

//
// MessageId: DTS_E_COMPONENTHASINVALIDCLSID
//
// MessageText:
//
// The CLSID for one of the components with ID %1!d! is not valid.
//
#define DTS_E_COMPONENTHASINVALIDCLSID   ((HRESULT)0xC0048003L)

//
// MessageId: DTS_E_INVALIDINDEX
//
// MessageText:
//
// The index is not valid.
//
#define DTS_E_INVALIDINDEX               ((HRESULT)0xC0048004L)

////////////////////////////////////////////////////////////////////////////
// Make sure dts.dll is accessible.

//
// MessageId: DTS_E_CANNOTACCESSDTSAPPLICATIONOBJECT
//
// MessageText:
//
// The Application object cannot be accessed. Verify that SSIS is correctly installed.
//
#define DTS_E_CANNOTACCESSDTSAPPLICATIONOBJECT ((HRESULT)0xC0048005L)

//
// MessageId: DTS_E_ERROROCCURREDWHILERETRIEVINGFILENAME
//
// MessageText:
//
// Retrieving the file name for a component failed with error code 0x%1!8.8X!.
//
#define DTS_E_ERROROCCURREDWHILERETRIEVINGFILENAME ((HRESULT)0xC0048006L)

//
// MessageId: DTS_E_CANNOTRETRIEVEPROPERTYFORCOMPONENT
//
// MessageText:
//
// Cannot retrieve property "%1!s!" from component with ID %2!d!.
//
#define DTS_E_CANNOTRETRIEVEPROPERTYFORCOMPONENT ((HRESULT)0xC0048007L)

//
// MessageId: DTS_E_DUPLICATEIDFOUND
//
// MessageText:
//
// Attempting to use ID %1!d! more than once in the Data Flow Task.
//
#define DTS_E_DUPLICATEIDFOUND           ((HRESULT)0xC0048008L)

//
// MessageId: DTS_E_CANNOTRETRIEVEBYLINEAGE
//
// MessageText:
//
// Cannot retrieve an item by lineage ID from a collection that does not contain columns.
//
#define DTS_E_CANNOTRETRIEVEBYLINEAGE    ((HRESULT)0xC0048009L)

////////////////////////////////////////////////////////////////////////////
// Make sure a connection manager in the runtime's connection manager collection has been created with that ID.

//
// MessageId: DTS_E_CANNOTMAPRUNTIMECONNECTIONMANAGER
//
// MessageText:
//
// Cannot find the connection manager with ID "%1!s!" in the connection manager collection due to error code 0x%2!8.8X!. That connection manager is needed by "%3!s!" in the connection manager collection of "%4!s!". Verify that a connection manager in the connection manager collection, Connections, has been created with that ID.
//
#define DTS_E_CANNOTMAPRUNTIMECONNECTIONMANAGER ((HRESULT)0xC004800BL)

////////////////////////////////////////////////////////////////////////////
// An internal error in the scheduler has built a bad execution plan.

//
// MessageId: DTS_E_INPUTNOTKNOWN
//
// MessageText:
//
// Thread "%1!s!" received a buffer for input %2!d!, but this thread is not responsible for that input. An error occurred, causing the Data Flow engine scheduler to build a bad execution plan.
//
#define DTS_E_INPUTNOTKNOWN              ((HRESULT)0xC004800EL)

////////////////////////////////////////////////////////////////////////////
// The component is broken.

//
// MessageId: DTS_E_GETRTINTERFACEFAILED
//
// MessageText:
//
// The component "%1!s!" (%2!d!) cannot provide an IDTSRuntimeComponent100 interface.
//
#define DTS_E_GETRTINTERFACEFAILED       ((HRESULT)0xC004800FL)

////////////////////////////////////////////////////////////////////////////
// The cause was previously reported.

//
// MessageId: DTS_E_CANTGIVEAWAYBUFFER
//
// MessageText:
//
// The Data Flow task engine attempted to copy a buffer to assign another thread, but failed.
//
#define DTS_E_CANTGIVEAWAYBUFFER         ((HRESULT)0xC0048011L)

//
// MessageId: DTS_E_CANTCREATEVIEWBUFFER
//
// MessageText:
//
// The Data Flow task engine failed to create a view buffer of type %1!d! over type %2!d! for buffer %3!d.
//
#define DTS_E_CANTCREATEVIEWBUFFER       ((HRESULT)0xC0048012L)

//
// MessageId: DTS_E_UNUSABLETEMPORARYPATH
//
// MessageText:
//
// The buffer manager could not create a temporary file on the path "%1!s!". The path will not be considered for temporary storage again.
//
#define DTS_E_UNUSABLETEMPORARYPATH      ((HRESULT)0xC0048013L)

////////////////////////////////////////////////////////////////////////////
// Someone called DirectErrorRow() on an output that isn't an error output.

//
// MessageId: DTS_E_DIRECTTONONERROROUTPUT
//
// MessageText:
//
// The buffer manager attempted to push an error row to an output that was not registered as an error output. There was a call to DirectErrorRow on an output that does not have the IsErrorOut property set to TRUE.
//
#define DTS_E_DIRECTTONONERROROUTPUT     ((HRESULT)0xC0048014L)

////////////////////////////////////////////////////////////////////////////
// A call was made to a buffer method on a private buffer, and private buffers do not support that method.

//
// MessageId: DTS_E_BUFFERISPRIVATE
//
// MessageText:
//
// A call was made to a buffer method on a private buffer and private buffers do not support this operation.
//
#define DTS_E_BUFFERISPRIVATE            ((HRESULT)0xC0048015L)

//
// MessageId: DTS_E_BUFFERISFLAT
//
// MessageText:
//
// Private mode buffers do not support this operation.
//
#define DTS_E_BUFFERISFLAT               ((HRESULT)0xC0048016L)

////////////////////////////////////////////////////////////////////////////
// A call was made to a buffer method during PrimeOutput, but that call is not allowed during PrimeOutput.

//
// MessageId: DTS_E_BUFFERISPRIMEOUTPUT
//
// MessageText:
//
// This operation cannot be called on a buffer passed to PrimeOutput. A call was made to a buffer method during PrimeOutput, but that call is not allowed during PrimeOutput.
//
#define DTS_E_BUFFERISPRIMEOUTPUT        ((HRESULT)0xC0048017L)

////////////////////////////////////////////////////////////////////////////
// A call was made to a buffer method during ProcessInput, but that call is not allowed during ProcessInput.

//
// MessageId: DTS_E_BUFFERISPROCESSINPUT
//
// MessageText:
//
// This operation cannot be called on a buffer passed to ProcessInput. A call was made to a buffer method during ProcessInput, but that call is not allowed during ProcessInput.
//
#define DTS_E_BUFFERISPROCESSINPUT       ((HRESULT)0xC0048018L)

////////////////////////////////////////////////////////////////////////////
// A call to GetTempFileName failed. We don't know how to handle that!

//
// MessageId: DTS_E_BUFFERGETTEMPFILENAME
//
// MessageText:
//
// The buffer manager could not get a temporary file name.
//
#define DTS_E_BUFFERGETTEMPFILENAME      ((HRESULT)0xC0048019L)

//
// MessageId: DTS_E_REFERENCECOLUMNTOOWIDE
//
// MessageText:
//
// The code encountered a column that was too wide.
//
#define DTS_E_REFERENCECOLUMNTOOWIDE     ((HRESULT)0xC004801AL)

////////////////////////////////////////////////////////////////////////////
// Make sure the ConnectionManagerID property of the runtime connection object has been set for the component.

//
// MessageId: DTS_E_CANNOTGETRUNTIMECONNECTIONMANAGERID
//
// MessageText:
//
// Cannot get the ID of the runtime connection manager specified by "%1!s!" in the connection manager collection, Connections, of "%2!s!" due to error code 0x%3!8.8X!. Verify that the ConnectionManager.ID property of the runtime connection object has been set for the component.
//
#define DTS_E_CANNOTGETRUNTIMECONNECTIONMANAGERID ((HRESULT)0xC004801BL)

//
// MessageId: DTS_E_EMPTYRUNTIMECONNECTIONMANAGERID
//
// MessageText:
//
// The "%1!s!" in the connection manager collection, Connections, of "%2!s!" does not have a value for the ID property. Verify that the ConnectionManagerID property of the runtime connection object has been set for the component.
//
#define DTS_E_EMPTYRUNTIMECONNECTIONMANAGERID ((HRESULT)0xC004801CL)

//
// MessageId: DTS_E_METADATAREADONLY
//
// MessageText:
//
// Metadata cannot be changed during execution.
//
#define DTS_E_METADATAREADONLY           ((HRESULT)0xC004801DL)

////////////////////////////////////////////////////////////////////////////
// The PerformUpgrade method failed.

//
// MessageId: DTS_E_UPGRADEFAILED
//
// MessageText:
//
// The component metadata for "%1!s!" could not be upgraded to the newer version of the component. The PerformUpgrade method failed.
//
#define DTS_E_UPGRADEFAILED              ((HRESULT)0xC004801FL)

////////////////////////////////////////////////////////////////////////////
// The version or pipeline version or both for the specified component is higher than the current version.  This package was probably created on a newer version of SSIS or the component than is installed on the current PC.

//
// MessageId: DTS_E_COMPONENTVERSIONMISMATCH
//
// MessageText:
//
// The version of %1!s! is not compatible with this version of the DataFlow.
//
#define DTS_E_COMPONENTVERSIONMISMATCH   ((HRESULT)0xC0048020L)

////////////////////////////////////////////////////////////////////////////
// The component is missing, not registered, not upgradeable, missing needed interfaces and can not be instantiated on this computer so the contact information for the component is displayed.

//
// MessageId: DTS_E_ERRORCOMPONENT
//
// MessageText:
//
// The component is missing, not registered, not upgradeable, or missing required interfaces. The contact information for this component is "%1!s!".
//
#define DTS_E_ERRORCOMPONENT             ((HRESULT)0xC0048021L)

////////////////////////////////////////////////////////////////////////////
// Someone called a method on a buffer that's not the right buffer -- calling SetEndOfRowset on a private buffer, for example.

//
// MessageId: DTS_E_BUFFERISNOTPRIMEOUTPUT
//
// MessageText:
//
// The method was called on the wrong buffer. Buffers that are not used for component output do not support this operation.
//
#define DTS_E_BUFFERISNOTPRIMEOUTPUT     ((HRESULT)0xC0048022L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be computed

//
// MessageId: DTS_E_EXPREVALSTATIC_COMPUTATIONFAILED
//
// MessageText:
//
// An error occurred during computation of the expression.
//
#define DTS_E_EXPREVALSTATIC_COMPUTATIONFAILED ((HRESULT)0xC0049014L)

//
// MessageId: DTS_E_EXPREVALSTATIC_DIVBYZERO
//
// MessageText:
//
// Division by zero occurred in the expression.
//
#define DTS_E_EXPREVALSTATIC_DIVBYZERO   ((HRESULT)0xC0049030L)

////////////////////////////////////////////////////////////////////////////
// The magnitude of a literal value overflowed the type requested.

//
// MessageId: DTS_E_EXPREVALSTATIC_LITERALOVERFLOW
//
// MessageText:
//
// The magnitude of the literal value was too big to fit in the type requested.
//
#define DTS_E_EXPREVALSTATIC_LITERALOVERFLOW ((HRESULT)0xC0049031L)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into a numeric (DT_NUMERIC) result without loss of precision or scale. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPNUMERICOVERFLOW
//
// MessageText:
//
// The result of a binary operation was too big for the maximum size for numeric types. The operand types could not be implicitly cast into a numeric (DT_NUMERIC) result without loss of precision or scale. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPNUMERICOVERFLOW ((HRESULT)0xC0049032L)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the operation overflows the type of the result

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPOVERFLOW
//
// MessageText:
//
// The magnitude of the result of a binary operation overflows the maximum size for result data type.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPOVERFLOW ((HRESULT)0xC0049033L)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the function call overflowed the type of the operand. An explicit cast to a larger type may be required.

//
// MessageId: DTS_E_EXPREVALSTATIC_FUNCTIONOVERFLOW
//
// MessageText:
//
// The magnitude of the result of a function call was too big to fit in the result type, and overflowed the type of the operand. An explicit cast to a larger type may be required.
//
#define DTS_E_EXPREVALSTATIC_FUNCTIONOVERFLOW ((HRESULT)0xC0049034L)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into compatible types for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYTYPEMISMATCH
//
// MessageText:
//
// Incompatible data types were used with a binary operator. The operand types could not be implicitly cast into compatible types for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_BINARYTYPEMISMATCH ((HRESULT)0xC0049035L)

////////////////////////////////////////////////////////////////////////////
// The type of one or both of the operands is not supported for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_UNSUPPORTEDBINARYTYPE
//
// MessageText:
//
// An unsupported data type was used with a binary operator. The type of one, or both, of the operands is not supported for the operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_UNSUPPORTEDBINARYTYPE ((HRESULT)0xC0049036L)

////////////////////////////////////////////////////////////////////////////
// The operands for this operator must be both positive or both negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYSIGNMISMATCH
//
// MessageText:
//
// There is a sign mismatch for the bitwise binary operator. The operands for this operator must be both positive or both negative.
//
#define DTS_E_EXPREVALSTATIC_BINARYSIGNMISMATCH ((HRESULT)0xC0049037L)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPERATIONFAILED
//
// MessageText:
//
// A binary operation failed. There was an out-of-memory condition, or an internal error occurred.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPERATIONFAILED ((HRESULT)0xC0049038L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a binary operation.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPERATIONSETTYPEFAILED
//
// MessageText:
//
// Setting the result type of a binary operation failed.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPERATIONSETTYPEFAILED ((HRESULT)0xC0049039L)

////////////////////////////////////////////////////////////////////////////
// Unable to compare two strings.

//
// MessageId: DTS_E_EXPREVALSTATIC_STRINGCOMPARISONFAILED
//
// MessageText:
//
// Cannot compare two strings.
//
#define DTS_E_EXPREVALSTATIC_STRINGCOMPARISONFAILED ((HRESULT)0xC004903AL)

////////////////////////////////////////////////////////////////////////////
// The operand type is not supported for the operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_UNSUPPORTEDUNNARYTYPE
//
// MessageText:
//
// An unsupported data type is used with a unary operator. The operand type is not supported for the operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_UNSUPPORTEDUNNARYTYPE ((HRESULT)0xC004903BL)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALSTATIC_UNARYOPERATIONFAILED
//
// MessageText:
//
// A unary operation failed. An out-of-memory condition occurred, or there was an internal error.
//
#define DTS_E_EXPREVALSTATIC_UNARYOPERATIONFAILED ((HRESULT)0xC004903CL)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a unary operation.

//
// MessageId: DTS_E_EXPREVALSTATIC_UNARYOPERATIONSETTYPEFAILED
//
// MessageText:
//
// Setting the result type of a unary operation failed.
//
#define DTS_E_EXPREVALSTATIC_UNARYOPERATIONSETTYPEFAILED ((HRESULT)0xC004903DL)

////////////////////////////////////////////////////////////////////////////
// The type of the parameter could not be implicitly cast into a compatible type for the function. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_PARAMTYPEMISMATCH
//
// MessageText:
//
// A function has a parameter with an unsupported data type. The type of the parameter cannot be implicitly cast into a compatible type for the function. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_PARAMTYPEMISMATCH ((HRESULT)0xC004903EL)

////////////////////////////////////////////////////////////////////////////
// The function name is incorrect or does not exist.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDFUNCTION
//
// MessageText:
//
// An invalid function name appeared in the expression. Verify that the function name is correct and does exist.
//
#define DTS_E_EXPREVALSTATIC_INVALIDFUNCTION ((HRESULT)0xC004903FL)

////////////////////////////////////////////////////////////////////////////
// The length parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_FNSUBSTRINGINVALIDLENGTH
//
// MessageText:
//
// The length parameter was not valid for function SUBSTRING. The length parameter cannot be negative.
//
#define DTS_E_EXPREVALSTATIC_FNSUBSTRINGINVALIDLENGTH ((HRESULT)0xC0049040L)

////////////////////////////////////////////////////////////////////////////
// Start index is 1-based, not 0-based.

//
// MessageId: DTS_E_EXPREVALSTATIC_FNSUBSTRINGINVALIDSTARTINDEX
//
// MessageText:
//
// The start index was not valid for function SUBSTRING. The start index value must be an integer greater than zero. The start index is 1-based, not 0-based.
//
#define DTS_E_EXPREVALSTATIC_FNSUBSTRINGINVALIDSTARTINDEX ((HRESULT)0xC0049041L)

////////////////////////////////////////////////////////////////////////////
// The function name was recognized, but the number of parameters was incorrect.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNUMBEROFPARAMS
//
// MessageText:
//
// An incorrect number of parameters was given to a function. The function name was recognized, but the number of parameters was not correct.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNUMBEROFPARAMS ((HRESULT)0xC0049042L)

////////////////////////////////////////////////////////////////////////////
// The attempt to perform the character mapping failed.

//
// MessageId: DTS_E_EXPREVALSTATIC_CHARMAPPINGFAILED
//
// MessageText:
//
// A character mapping function failed.
//
#define DTS_E_EXPREVALSTATIC_CHARMAPPINGFAILED ((HRESULT)0xC0049043L)

////////////////////////////////////////////////////////////////////////////
// The date part specified for the function was not recognized.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDDATEPART
//
// MessageText:
//
// An unrecognized date part parameter was specified for a date function.
//
#define DTS_E_EXPREVALSTATIC_INVALIDDATEPART ((HRESULT)0xC0049044L)

////////////////////////////////////////////////////////////////////////////
// Parameters of NULL() must be static.  That is, they cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLPARAM
//
// MessageText:
//
// An invalid parameter was given for function NULL. The parameters of NULL must be static, and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLPARAM ((HRESULT)0xC0049045L)

////////////////////////////////////////////////////////////////////////////
// A parameter of NULL() must be an integer or a type that can be converted to an integer.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLPARAMTYPE
//
// MessageText:
//
// An invalid parameter was given for function NULL. A parameter of NULL must be an integer, or a type that can be converted to an integer.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLPARAMTYPE ((HRESULT)0xC0049046L)

////////////////////////////////////////////////////////////////////////////
// This parameter must be static.  That is, it cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALSTATIC_FUNCTIONPARAMNOTSTATIC
//
// MessageText:
//
// An invalid parameter was given for a function. This parameter must be static and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALSTATIC_FUNCTIONPARAMNOTSTATIC ((HRESULT)0xC0049047L)

////////////////////////////////////////////////////////////////////////////
// Parameters of cast operators must be static.  That is, they cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTPARAM
//
// MessageText:
//
// An invalid parameter was given for a cast operation. Parameters of cast operators must be static, and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTPARAM ((HRESULT)0xC0049048L)

////////////////////////////////////////////////////////////////////////////
// A parameter of a cast operator must be an integer or a type that can be converted to an integer.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTPARAMTYPE
//
// MessageText:
//
// An invalid parameter was given for a cast operation. A parameter of a cast operator must be an integer, or a type that can be converted to an integer.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTPARAMTYPE ((HRESULT)0xC0049049L)

////////////////////////////////////////////////////////////////////////////
// The requested cast is not supported.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCAST
//
// MessageText:
//
// The expression contained an unsupported type cast.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCAST ((HRESULT)0xC004904AL)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDTOKEN
//
// MessageText:
//
// The expression contained a token that was not recognized. The expression could not be parsed because it contains invalid elements.
//
#define DTS_E_EXPREVALSTATIC_INVALIDTOKEN ((HRESULT)0xC004904BL)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed. It might contain invalid elements, or it might not be well-formed.

//
// MessageId: DTS_E_EXPREVALSTATIC_FAILEDTOPARSEEXPRESSION
//
// MessageText:
//
// The expression is not valid and could not be parsed. It might contain invalid elements, or it might not be well-formed.
//
#define DTS_E_EXPREVALSTATIC_FAILEDTOPARSEEXPRESSION ((HRESULT)0xC004904CL)

////////////////////////////////////////////////////////////////////////////
// The magnitude of the result of the operation overflows the type of the result

//
// MessageId: DTS_E_EXPREVALSTATIC_UNARYOPOVERFLOW
//
// MessageText:
//
// The result of a unary minus (negation) operation overflowed the maximum size for result data type. The magnitude of the result of the operation overflows the type of the result.
//
#define DTS_E_EXPREVALSTATIC_UNARYOPOVERFLOW ((HRESULT)0xC004904DL)

////////////////////////////////////////////////////////////////////////////
// Expression computation failed.

//
// MessageId: DTS_E_EXPREVALSTATIC_COMPUTEFAILED
//
// MessageText:
//
// Attempt to compute the expression failed.
//
#define DTS_E_EXPREVALSTATIC_COMPUTEFAILED ((HRESULT)0xC004904EL)

////////////////////////////////////////////////////////////////////////////
// Failed when attempting to generate a displayable string that represents the expression.

//
// MessageId: DTS_E_EXPREVALSTATIC_BUILDSTRINGFAILED
//
// MessageText:
//
// Attempt to generate a string representation of the expression failed.
//
#define DTS_E_EXPREVALSTATIC_BUILDSTRINGFAILED ((HRESULT)0xC004904FL)

////////////////////////////////////////////////////////////////////////////
// The result of the expression should be written to an input/output column, but the data type of the expression cannot be converted to the data type of the column.

//
// MessageId: DTS_E_EXPREVALSTATIC_CANNOTCONVERTRESULT
//
// MessageText:
//
// Cannot convert the expression result data type to the column data type. The result of the expression should be written to an input/output column, but the data type of the expression cannot be converted to the data type of the column.
//
#define DTS_E_EXPREVALSTATIC_CANNOTCONVERTRESULT ((HRESULT)0xC0049050L)

////////////////////////////////////////////////////////////////////////////
// The conditional expression of the conditional operator must be of type DT_BOOL.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPINVALIDCONDITIONTYPE
//
// MessageText:
//
// The conditional expression of the conditional operator has invalid data type. The conditional expression must be of type DT_BOOL.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPINVALIDCONDITIONTYPE ((HRESULT)0xC0049051L)

////////////////////////////////////////////////////////////////////////////
// The operand types could not be implicitly cast into compatible types for the conditional operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPTYPEMISMATCH
//
// MessageText:
//
// The data types of the operands of the conditional operator were incompatible. The operand types could not be implicitly cast into compatible types for the conditional operation. To perform this operation, one or both operands need to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPTYPEMISMATCH ((HRESULT)0xC0049052L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while trying to set the result type of a conditional expression.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPSETTYPEFAILED
//
// MessageText:
//
// Setting the result type of a conditional operation failed.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPSETTYPEFAILED ((HRESULT)0xC0049053L)

////////////////////////////////////////////////////////////////////////////
// The input column specified was not found in the input column collection.

//
// MessageId: DTS_E_EXPREVALSTATIC_INPUTCOLUMNNAMENOTFOUND
//
// MessageText:
//
// The input column specified was not found in the input column collection.
//
#define DTS_E_EXPREVALSTATIC_INPUTCOLUMNNAMENOTFOUND ((HRESULT)0xC0049054L)

//
// MessageId: DTS_E_EXPREVALSTATIC_INPUTCOLUMNIDNOTFOUND
//
// MessageText:
//
// Attempt to find an input column by lineage ID failed. The input column was not found in the input column collection.
//
#define DTS_E_EXPREVALSTATIC_INPUTCOLUMNIDNOTFOUND ((HRESULT)0xC0049055L)

////////////////////////////////////////////////////////////////////////////
// The input column collection has not been provided to the expression evaluator, but an input column was included in the expression.

//
// MessageId: DTS_E_EXPREVALSTATIC_NOINPUTCOLUMNCOLLECTION
//
// MessageText:
//
// The expression contains an unrecognized token that appears to be an input column reference, but the input column collection is not available to process input columns. The input column collection has not been provided to the expression evaluator, but an input column was included in the expression.
//
#define DTS_E_EXPREVALSTATIC_NOINPUTCOLUMNCOLLECTION ((HRESULT)0xC0049056L)

////////////////////////////////////////////////////////////////////////////
// The variable specified was not found in the variable collection. It might not exist in the correct scope.

//
// MessageId: DTS_E_EXPREVALSTATIC_VARIABLENOTFOUND
//
// MessageText:
//
// A variable specified was not found in the collection. It might not exist in the correct scope. Verify that the variable exists and that the scope is correct.
//
#define DTS_E_EXPREVALSTATIC_VARIABLENOTFOUND ((HRESULT)0xC0049057L)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed. It may contain invalid elements, or be missing part of a required element (such as unmatched parentheses), or may not be well formed.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDTOKENSTATE
//
// MessageText:
//
// Attempt to parse the expression failed. The expression contains an invalid or incomplete token. It may contain invalid elements, be missing part of a required element such as closing parentheses, or may not be well formed.
//
#define DTS_E_EXPREVALSTATIC_INVALIDTOKENSTATE ((HRESULT)0xC0049058L)

////////////////////////////////////////////////////////////////////////////
// The specified code page is not installed on the machine.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTCODEPAGE
//
// MessageText:
//
// The value specified for the code page parameter of the cast to data type DT_STR or DT_TEXT is not valid. The specified code page is not installed on the computer.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTCODEPAGE ((HRESULT)0xC0049059L)

////////////////////////////////////////////////////////////////////////////
// The specified precision was out of range for the type cast.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTPRECISION
//
// MessageText:
//
// The value specified for the precision parameter of a cast operation is out of range for the type cast.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTPRECISION ((HRESULT)0xC004905AL)

////////////////////////////////////////////////////////////////////////////
// The specified scale was out of range for the type cast. Scale must not exceed precision and must not be negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTSCALE
//
// MessageText:
//
// The value specified for the scale parameter of a cast operation is out of range for the type cast. Scale must not exceed precision and must not be negative.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTSCALE ((HRESULT)0xC004905BL)

////////////////////////////////////////////////////////////////////////////
// The code page of the left operand does not match the code page of the right operand.  For the conditional operator of that type (probably DT_TEXT), the code pages must be the same.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPCODEPAGEMISMATCH
//
// MessageText:
//
// The code pages do not match in a conditional operation. The code page of the left operand does not match the code page of the right operand. For the conditional operator of that type, the code pages must be the same.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPCODEPAGEMISMATCH ((HRESULT)0xC004905CL)

////////////////////////////////////////////////////////////////////////////
// The specified escape sequence is not supported in string literals in the expression evaluator. Hexadecimal escape sequences must be of the form \xhhhh where h is a valid hexadecimal digit.

//
// MessageId: DTS_E_EXPREVALSTATIC_ILLEGALHEXESCAPEINSTRINGLITERAL
//
// MessageText:
//
// A string literal contains an illegal hexadecimal escape sequence. The escape sequence is not supported in string literals in the expression evaluator. Hexadecimal escape sequences must be of the form \xhhhh where h is a valid hexadecimal digit.
//
#define DTS_E_EXPREVALSTATIC_ILLEGALHEXESCAPEINSTRINGLITERAL ((HRESULT)0xC004905DL)

////////////////////////////////////////////////////////////////////////////
// The specified escape sequence is not supported in string literals in the expression evaluator. If the user is just trying to put a backslash in the string, "\\" will achieve that.

//
// MessageId: DTS_E_EXPREVALSTATIC_ILLEGALESCAPEINSTRINGLITERAL
//
// MessageText:
//
// The string literal contains an illegal escape sequence. The escape sequence is not supported in string literals in the expression evaluator. If a backslash is needed in the string, format it as a double backslash, "\\".
//
#define DTS_E_EXPREVALSTATIC_ILLEGALESCAPEINSTRINGLITERAL ((HRESULT)0xC004905EL)

////////////////////////////////////////////////////////////////////////////
// The specified type is not supported or was not recognized.

//
// MessageId: DTS_E_EXPREVALSTATIC_UNSUPPORTEDTYPE
//
// MessageText:
//
// An unsupported or unrecognized data type was used in the expression.
//
#define DTS_E_EXPREVALSTATIC_UNSUPPORTEDTYPE ((HRESULT)0xC004905FL)

////////////////////////////////////////////////////////////////////////////
// The source type was too large to fit in the destination type.

//
// MessageId: DTS_E_EXPREVALSTATIC_DATACONVERSIONOVERFLOW
//
// MessageText:
//
// An overflow occurred while converting between data types. The source type is too large to fit in the destination type.
//
#define DTS_E_EXPREVALSTATIC_DATACONVERSIONOVERFLOW ((HRESULT)0xC0049060L)

////////////////////////////////////////////////////////////////////////////
// The source type could not be converted to the destination type.

//
// MessageId: DTS_E_EXPREVALSTATIC_DATACONVERSIONNOTSUPPORTED
//
// MessageText:
//
// The expression contains an unsupported data type conversion. The source type cannot be converted to the destination type.
//
#define DTS_E_EXPREVALSTATIC_DATACONVERSIONNOTSUPPORTED ((HRESULT)0xC0049061L)

//
// MessageId: DTS_E_EXPREVALSTATIC_DATACONVERSIONFAILED
//
// MessageText:
//
// An error occurred while attempting to perform data conversion. The source type could not be converted to the destination type.
//
#define DTS_E_EXPREVALSTATIC_DATACONVERSIONFAILED ((HRESULT)0xC0049062L)

////////////////////////////////////////////////////////////////////////////
// An internal error occurred, or out of memory.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPERATIONFAILED
//
// MessageText:
//
// The conditional operation failed.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPERATIONFAILED ((HRESULT)0xC0049063L)

//
// MessageId: DTS_E_EXPREVALSTATIC_CASTFAILED
//
// MessageText:
//
// An error occurred while attempting to perform a type cast.
//
#define DTS_E_EXPREVALSTATIC_CASTFAILED  ((HRESULT)0xC0049064L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to perform the implicit conversion on the input column.

//
// MessageId: DTS_E_EXPREVALFAILEDTOCONVERTSTRCOLUMNTOWSTR
//
// MessageText:
//
// Converting "%1!s!" from type DT_STR to type DT_WSTR failed with error code 0x%2!8.8X!. An error occurred while performing the implicit conversion on the input column.
//
#define DTS_E_EXPREVALFAILEDTOCONVERTSTRCOLUMNTOWSTR ((HRESULT)0xC0049065L)

//
// MessageId: DTS_E_EXPREVALSTATIC_FAILEDTOCONVERTSTRCOLUMNTOWSTR
//
// MessageText:
//
// Converting an input column from type DT_STR to type DT_WSTR failed. An error occurred while performing the  implicit conversion on the input column.
//
#define DTS_E_EXPREVALSTATIC_FAILEDTOCONVERTSTRCOLUMNTOWSTR ((HRESULT)0xC0049066L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to evaluate the function.

//
// MessageId: DTS_E_EXPREVALSTATIC_FUNCTIONCOMPUTEFAILED
//
// MessageText:
//
// An error occurred while evaluating the function.
//
#define DTS_E_EXPREVALSTATIC_FUNCTIONCOMPUTEFAILED ((HRESULT)0xC0049067L)

////////////////////////////////////////////////////////////////////////////
// The parameter could not be converted into a static value (typically, an integer). The parameter must be static.  That is, it cannot contain dynamic elements such as input columns.

//
// MessageId: DTS_E_EXPREVALSTATIC_FUNCTIONCONVERTPARAMTOMEMBERFAILED
//
// MessageText:
//
// A function parameter cannot be converted to a static value. The parameter must be static and cannot contain dynamic elements such as input columns.
//
#define DTS_E_EXPREVALSTATIC_FUNCTIONCONVERTPARAMTOMEMBERFAILED ((HRESULT)0xC0049068L)

////////////////////////////////////////////////////////////////////////////
// The length parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_FNRIGHTINVALIDLENGTH
//
// MessageText:
//
// The length parameter is not valid for function RIGHT. The length parameter cannot be negative.
//
#define DTS_E_EXPREVALSTATIC_FNRIGHTINVALIDLENGTH ((HRESULT)0xC0049088L)

////////////////////////////////////////////////////////////////////////////
// The repeat count parameter cannot be negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_FNREPLICATEINVALIDREPEATCOUNT
//
// MessageText:
//
// The repeat count parameter is not valid for function REPLICATE. This parameter cannot be negative.
//
#define DTS_E_EXPREVALSTATIC_FNREPLICATEINVALIDREPEATCOUNT ((HRESULT)0xC0049089L)

////////////////////////////////////////////////////////////////////////////
// The code page of the left operand does not match the code page of the right operand.  For this binary operation, the code pages must be the same.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPERATORCODEPAGEMISMATCH
//
// MessageText:
//
// The code pages do not match in a binary operation. The code page of the left operand does not match the code page of the right operand. For this binary operation, the code pages must be the same.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPERATORCODEPAGEMISMATCH ((HRESULT)0xC0049096L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred while attempting to get the value of the variable.

//
// MessageId: DTS_E_EXPREVALSTATIC_VARIABLECOMPUTEFAILED
//
// MessageText:
//
// Retrieving the value for a variable failed.
//
#define DTS_E_EXPREVALSTATIC_VARIABLECOMPUTEFAILED ((HRESULT)0xC0049097L)

////////////////////////////////////////////////////////////////////////////
// The variable is of an unsupported type.

//
// MessageId: DTS_E_EXPREVALSTATIC_VARIABLETYPENOTSUPPORTED
//
// MessageText:
//
// The expression contains a variable with an unsupported data type.
//
#define DTS_E_EXPREVALSTATIC_VARIABLETYPENOTSUPPORTED ((HRESULT)0xC0049098L)

////////////////////////////////////////////////////////////////////////////
// The code page of the source must match the code page requested for the destination.

//
// MessageId: DTS_E_EXPREVALSTATIC_CASTCODEPAGEMISMATCH
//
// MessageText:
//
// Unable to cast the expression because the code page of the value being cast does not match the requested result code page. The code page of the source must match the code page requested for the destination.
//
#define DTS_E_EXPREVALSTATIC_CASTCODEPAGEMISMATCH ((HRESULT)0xC004909BL)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements (a single quoation mark) at the location specified. A double quotation mark might be required there.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDTOKENSINGLEQUOTE
//
// MessageText:
//
// The expression contains an unexpected single quotation mark. A double quotation mark may be required.
//
#define DTS_E_EXPREVALSTATIC_INVALIDTOKENSINGLEQUOTE ((HRESULT)0xC004909CL)

////////////////////////////////////////////////////////////////////////////
// The expression could not be parsed because it contains invalid elements (a single equal sign) at the location specified. A double equals might be required there.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDTOKENSINGLEEQUAL
//
// MessageText:
//
// The expression contains an unexpected equal sign (=). This error usually occurs when a double equals sign (==) is needed.
//
#define DTS_E_EXPREVALSTATIC_INVALIDTOKENSINGLEEQUAL ((HRESULT)0xC004909DL)

////////////////////////////////////////////////////////////////////////////
// The input column specified exists on more than one component.

//
// MessageId: DTS_E_EXPREVALSTATIC_AMBIGUOUSINPUTCOLUMNNAME
//
// MessageText:
//
// An ambiguous input column name was specified.  The column must be qualified as [Component Name].[Column Name] or referenced by lineage ID. This error occurs when the input column exists on more than one component, and must be differentiated by the addition of component name or by using the lineage ID.
//
#define DTS_E_EXPREVALSTATIC_AMBIGUOUSINPUTCOLUMNNAME ((HRESULT)0xC00490AAL)

////////////////////////////////////////////////////////////////////////////
// A placeholder function parameter or operand was found in the expression.

//
// MessageId: DTS_E_EXPREVALSTATIC_PLACEHOLDERINEXPRESSION
//
// MessageText:
//
// A placeholder function parameter or operand was found in an expression. This should be replaced with an actual parameter or operand.
//
#define DTS_E_EXPREVALSTATIC_PLACEHOLDERINEXPRESSION ((HRESULT)0xC00490ABL)

////////////////////////////////////////////////////////////////////////////
// The variable specified exists in more than one namespace.

//
// MessageId: DTS_E_EXPREVALSTATIC_AMBIGUOUSVARIABLENNAME
//
// MessageText:
//
// An ambiguous variable name was specified. The desired variable must be qualifed as @[Namespace::Variable]. This error occurs when the variable exists in more than one namespace.
//
#define DTS_E_EXPREVALSTATIC_AMBIGUOUSVARIABLENNAME ((HRESULT)0xC00490ACL)

////////////////////////////////////////////////////////////////////////////
// A DT_STR operand that is not an input column or the result of a cast cannot be used with a binary operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_BINARYOPDTSTRNOTSUPPORTED
//
// MessageText:
//
// For operands of binary operation, the data type DT_STR is only supported for input columns and cast operations. A DT_STR operand that is not an input column or the result of a cast cannot be used with a binary operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_BINARYOPDTSTRNOTSUPPORTED ((HRESULT)0xC00490D3L)

////////////////////////////////////////////////////////////////////////////
// A DT_STR operand that is not an input column or the result of a cast cannot be used with the conditional operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.

//
// MessageId: DTS_E_EXPREVALSTATIC_CONDITIONALOPDTSTRNOTSUPPORTED
//
// MessageText:
//
// For operands of the conditional operator, the data type DT_STR is only supported for input columns and cast operations. A DT_STR operand that is not an input column or the result of a cast cannot be used with the conditional operation. To perform this operation, the operand needs to be explicitly cast with a cast operator.
//
#define DTS_E_EXPREVALSTATIC_CONDITIONALOPDTSTRNOTSUPPORTED ((HRESULT)0xC00490D4L)

////////////////////////////////////////////////////////////////////////////
// The occurrence count parameter must be positive.

//
// MessageId: DTS_E_EXPREVALSTATIC_FNFINDSTRINGINVALIDOCCURRENCECOUNT
//
// MessageText:
//
// The occurrence count parameter is not valid for function FINDSTRING. This parameter must be greater than zero.
//
#define DTS_E_EXPREVALSTATIC_FNFINDSTRINGINVALIDOCCURRENCECOUNT ((HRESULT)0xC00490D5L)

////////////////////////////////////////////////////////////////////////////
// Date part parameters must be static strings.  That is, they cannot contain dynamic elements such as input columns, and must be of type DT_WSTR.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDDATEPARTNODE
//
// MessageText:
//
// The "date part" parameter specified for a date function is not valid. "Date part" parameters must be static strings, and cannot contain dynamic elements such as input columns. They must be of type DT_WSTR.
//
#define DTS_E_EXPREVALSTATIC_INVALIDDATEPARTNODE ((HRESULT)0xC00490DDL)

////////////////////////////////////////////////////////////////////////////
// The specified length for the type cast is negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDCASTLENGTH
//
// MessageText:
//
// The value specified for the length parameter of a cast operation is not valid. The length must be positive. The length specified for the type cast is negative. Change to a positive value.
//
#define DTS_E_EXPREVALSTATIC_INVALIDCASTLENGTH ((HRESULT)0xC00490DEL)

////////////////////////////////////////////////////////////////////////////
// The specified length for the NULL function is negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLLENGTH
//
// MessageText:
//
// The value specified for the length parameter of a NULL function is not valid. The length must be positive. The length specified for the NULL function is negative. Change to a positive value.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLLENGTH ((HRESULT)0xC00490DFL)

////////////////////////////////////////////////////////////////////////////
// The specified code page is not installed on the machine.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLCODEPAGE
//
// MessageText:
//
// The value specified for the code page parameter of the NULL function with data type DT_STR or DT_TEXT is not valid. The code page specified is not installed on the computer. Either change the code page that is specified, or install the code page on the computer.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLCODEPAGE ((HRESULT)0xC00490E0L)

////////////////////////////////////////////////////////////////////////////
// The specified precision was out of range for the NULL function.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLPRECISION
//
// MessageText:
//
// The value specified for the precision parameter of a NULL function is not valid. The precision that was specified is out of range for the NULL function.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLPRECISION ((HRESULT)0xC00490E1L)

////////////////////////////////////////////////////////////////////////////
// The specified scale was out of range for the NULL function. Scale must not exceed precision and must not be negative.

//
// MessageId: DTS_E_EXPREVALSTATIC_INVALIDNULLSCALE
//
// MessageText:
//
// The value specified for the scale parameter of a NULL function is not valid. The scale that was specified is out of range for the NULL function. Scale must not exceed precision and must be positive.
//
#define DTS_E_EXPREVALSTATIC_INVALIDNULLSCALE ((HRESULT)0xC00490E2L)

////////////////////////////////////////////////////////////////////////////
// An error occurred while attempting to write data to the specified output column of the specified error output.

//
// MessageId: DTS_E_XMLSRCERRORSETTINGERROROUTPUTCOLUMNDATA
//
// MessageText:
//
// The %1!s! failed attempting to write data to %2!s! on %3!s!. %4!s!
//
#define DTS_E_XMLSRCERRORSETTINGERROROUTPUTCOLUMNDATA ((HRESULT)0xC00490E8L)

//
// MessageId: DTS_E_TXLOOKUP_CANCEL_REQUESTED
//
// MessageText:
//
// Lookup transform has received a cancel request from the user.
//
#define DTS_E_TXLOOKUP_CANCEL_REQUESTED  ((HRESULT)0xC00490F5L)

////////////////////////////////////////////////////////////////////////////
// The lob data is greater than or equal to 4 gigabytes

//
// MessageId: DTS_E_LOBLENGTHLIMITEXCEEDED
//
// MessageText:
//
// Processing of character or binary large object (LOB) data has stopped because the 4-GB limit was reached.
//
#define DTS_E_LOBLENGTHLIMITEXCEEDED     ((HRESULT)0xC00490F6L)

////////////////////////////////////////////////////////////////////////////
// A managed pipeline component cannot be loaded

//
// MessageId: DTS_E_CANNOTLOADCOMPONENT
//
// MessageText:
//
// The managed pipeline component "%1!s!" could not be loaded.  The exception was: %2!s!.
//
#define DTS_E_CANNOTLOADCOMPONENT        ((HRESULT)0xC00490F7L)

////////////////////////////////////////////////////////////////////////////
// The CanProcess returned incorrect status for inputs.

//
// MessageId: DTS_E_BACKPRESSURE_ALLINPUTSCLOSED
//
// MessageText:
//
// The CanProcess method of the component (ID: %1!d!) returned false for all inputs. No further input data can be processed. Check the implementation of this method.
//
#define DTS_E_BACKPRESSURE_ALLINPUTSCLOSED ((HRESULT)0xC00490F8L)

////////////////////////////////////////////////////////////////////////////
// The GetDependentInputs returned incorrect number of input IDs.

//
// MessageId: DTS_E_BACKPRESSURE_BADDEPENDENTCOUNT
//
// MessageText:
//
// The GetDependentInputs method of the component (ID: %1!d!)  returned a list that contains invalid number of input IDs (%2!d!). The number of IDs in the list cannot be 0 or more than the number of inputs minus 1. Check the implementation of this method.
//
#define DTS_E_BACKPRESSURE_BADDEPENDENTCOUNT ((HRESULT)0xC00490F9L)

////////////////////////////////////////////////////////////////////////////
// The GetDependentInputs returned an input already got EOR.

//
// MessageId: DTS_E_BACKPRESSURE_DEPENDONEORINPUT
//
// MessageText:
//
// The GetDependentInputs method of component (ID: %1!d!) returned a list that contains an input ID (%2!d!) that already reached end of rowset. Check the implementation of this method.
//
#define DTS_E_BACKPRESSURE_DEPENDONEORINPUT ((HRESULT)0xC00490FAL)

//
// MessageId: DTS_I_EXECUTIONPHASE_PREPAREFOREXECUTE
//
// MessageText:
//
// Prepare for Execute phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_PREPAREFOREXECUTE ((HRESULT)0x40043006L)

//
// MessageId: DTS_I_EXECUTIONPHASE_PREEXECUTE
//
// MessageText:
//
// Pre-Execute phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_PREEXECUTE  ((HRESULT)0x40043007L)

//
// MessageId: DTS_I_EXECUTIONPHASE_POSTEXECUTE
//
// MessageText:
//
// Post Execute phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_POSTEXECUTE ((HRESULT)0x40043008L)

//
// MessageId: DTS_I_EXECUTIONPHASE_CLEANUP
//
// MessageText:
//
// Cleanup phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_CLEANUP     ((HRESULT)0x40043009L)

//
// MessageId: DTS_I_EXECUTIONPHASE_VALIDATE
//
// MessageText:
//
// Validation phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_VALIDATE    ((HRESULT)0x4004300AL)

//
// MessageId: DTS_I_ROWS_WRITTEN
//
// MessageText:
//
// "%1!s!" wrote %2!ld! rows.
//
#define DTS_I_ROWS_WRITTEN               ((HRESULT)0x4004300BL)

//
// MessageId: DTS_I_EXECUTIONPHASE_EXECUTE
//
// MessageText:
//
// Execute phase is beginning.
//
#define DTS_I_EXECUTIONPHASE_EXECUTE     ((HRESULT)0x4004300CL)

//
// MessageId: DTS_I_DATATAP_FILECREATED
//
// MessageText:
//
// A new file %1!s! has been created for the data tap.
//
#define DTS_I_DATATAP_FILECREATED        ((HRESULT)0x40047027L)

////////////////////////////////////////////////////////////////////////////
// There is insufficient memory available to the SSIS pipeline. Reduce non-essential processes or increase system memory.

//
// MessageId: DTS_I_CANTRELIEVEPRESSURE
//
// MessageText:
//
// The buffer manager detected that the system was low on virtual memory, but was unable to swap out any buffers. %1!d! buffers were considered and %2!d! were locked. Either not enough memory is available to the pipeline because not enough is installed, other processes are using it, or too many buffers are locked.
//
#define DTS_I_CANTRELIEVEPRESSURE        ((HRESULT)0x4004800CL)

////////////////////////////////////////////////////////////////////////////
// Either not enough memory is available to the pipeline (either not enough installed, or some other process is using it), or too many buffers are locked.

//
// MessageId: DTS_I_CANTALLOCATEMEMORYPRESSURE
//
// MessageText:
//
// The buffer manager failed a memory allocation call for %3!d! bytes, but was unable to swap out any buffers to relieve memory pressure. %1!d! buffers were considered and %2!d! were locked. Either not enough memory is available to the pipeline because not enough are installed, other processes were using it, or too many buffers are locked.
//
#define DTS_I_CANTALLOCATEMEMORYPRESSURE ((HRESULT)0x4004800DL)

////////////////////////////////////////////////////////////////////////////
// Falled back to allocate a buffer during memory pressure.

//
// MessageId: DTS_I_ALLOCATEDDURINGMEMORYPRESSURE
//
// MessageText:
//
// The buffer manager has allocated %1!d! bytes, even though the memory pressure has been detected and repeated attempts to swap buffers have failed.
//
#define DTS_I_ALLOCATEDDURINGMEMORYPRESSURE ((HRESULT)0x4004800EL)

////////////////////////////////////////////////////////////////////////////
// Either not enough memory is available to the pipeline (either not enough installed, or some other process is using it), or too many buffers are locked.

//
// MessageId: DTS_I_BUFFERUSAGESUMMARY
//
// MessageText:
//
// Buffer manager allocated %1!d! megabyte(s) in %2!d! physical buffer(s).
//
#define DTS_I_BUFFERUSAGESUMMARY         ((HRESULT)0x4004800FL)

//
// MessageId: DTS_I_COMPONENTBUFFERUSAGEDETAILS
//
// MessageText:
//
// Component "%1!s!" (%2!d!) owns %3!d! megabyte(s) physical buffer.
//
#define DTS_I_COMPONENTBUFFERUSAGEDETAILS ((HRESULT)0x40048010L)

//
// MessageId: DTS_I_TXLOOKUP_CACHE_PROGRESS
//
// MessageText:
//
// %1!s! has cached %2!d! rows.
//
#define DTS_I_TXLOOKUP_CACHE_PROGRESS    ((HRESULT)0x400490F4L)

//
// MessageId: DTS_I_TXLOOKUP_CACHE_FINAL
//
// MessageText:
//
// %1!s! has cached a total of %2!d! rows.
//
#define DTS_I_TXLOOKUP_CACHE_FINAL       ((HRESULT)0x400490F5L)

//
// MessageId: DTS_S_NULLDATA
//
// MessageText:
//
// The value is NULL.
//
#define DTS_S_NULLDATA                   ((HRESULT)0x00040003L)

////////////////////////////////////////////////////////////////////////////
// Somebody gave the buffer a string that was too long for the column in the buffer, and the buffer truncated it.

//
// MessageId: DTS_S_TRUNCATED
//
// MessageText:
//
// The string value was truncated. The buffer received a string that was too long for the column, and the string was truncated by the buffer.
//
#define DTS_S_TRUNCATED                  ((HRESULT)0x00040005L)

//
// MessageId: DTS_W_NOLINEAGEVALIDATION
//
// MessageText:
//
// The lineage IDs of the input columns cannot be validated because the execution trees contain cycles.
//
#define DTS_W_NOLINEAGEVALIDATION        ((HRESULT)0x80047007L)

////////////////////////////////////////////////////////////////////////////
// Add some components or remove the task.

//
// MessageId: DTS_W_EMPTYDATAFLOW
//
// MessageText:
//
// The DataFlow task has no components. Add components or remove the task.
//
#define DTS_W_EMPTYDATAFLOW              ((HRESULT)0x80047034L)

//
// MessageId: DTS_W_SORTEDOUTPUTHASNOSORTKEYPOSITIONS
//
// MessageText:
//
// The IsSorted property of %1!s! is set to TRUE, but all of its output columns' SortKeyPositions are set to zero.
//
#define DTS_W_SORTEDOUTPUTHASNOSORTKEYPOSITIONS ((HRESULT)0x80047069L)

//
// MessageId: DTS_W_SOURCEREMOVED
//
// MessageText:
//
// Source "%1!s!" (%2!d!) will not be read because none of its data ever becomes visible outside the Data Flow Task.
//
#define DTS_W_SOURCEREMOVED              ((HRESULT)0x8004706FL)

//
// MessageId: DTS_W_UNUSEDOUTPUTDATA
//
// MessageText:
//
// The output column "%1!s!" (%2!d!) on output "%3!s!" (%4!d!) and component "%5!s!" (%6!d!) is not subsequently used in the Data Flow task. Removing this unused output column can increase Data Flow task performance.
//
#define DTS_W_UNUSEDOUTPUTDATA           ((HRESULT)0x80047076L)

////////////////////////////////////////////////////////////////////////////
// If the component is required, then HasSideEffects on at least one of its inputs should be set to true, or its output should be connected to something.

//
// MessageId: DTS_W_COMPONENTREMOVED
//
// MessageText:
//
// Component "%1!s!" (%2!d!) has been removed from the Data Flow task because its output is not used and its inputs either have no side effects or are not connected to outputs of other components. If the component is required, then the HasSideEffects property on at least one of its inputs should be set to true, or its output should be connected to something.
//
#define DTS_W_COMPONENTREMOVED           ((HRESULT)0x800470AEL)

////////////////////////////////////////////////////////////////////////////
// Running the pipeline with RunInOptimizedMode set to TRUE will be faster, and will relieve this warning.

//
// MessageId: DTS_W_NOWORKTODO
//
// MessageText:
//
// Rows were given to a thread, but that thread has no work to do. The layout has a disconnected output. Running the pipeline with the RunInOptimizedMode property set to TRUE will be faster, and prevents this warning.
//
#define DTS_W_NOWORKTODO                 ((HRESULT)0x800470B0L)

//
// MessageId: DTS_W_EXTERNALMETADATACOLUMNSOUTOFSYNC
//
// MessageText:
//
// The external columns for %1!s! are out of synchronization with the data source columns. %2!s!
//
#define DTS_W_EXTERNALMETADATACOLUMNSOUTOFSYNC ((HRESULT)0x800470C8L)

//
// MessageId: DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSADDITION
//
// MessageText:
//
// The column "%1!s!" needs to be added to the external columns.
//
#define DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSADDITION ((HRESULT)0x800470C9L)

//
// MessageId: DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSUPDATE
//
// MessageText:
//
// The external column "%1!s!" needs to be updated.
//
#define DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSUPDATE ((HRESULT)0x800470CAL)

//
// MessageId: DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSREMOVAL
//
// MessageText:
//
// The %1!s! needs to be removed from the external columns.
//
#define DTS_W_EXTERNALMETADATACOLUMNCOLLECTIONNEEDSREMOVAL ((HRESULT)0x800470CBL)

////////////////////////////////////////////////////////////////////////////
// The expression could potentially have a result value that exceeds the maximum size of a DT_WSTR.

//
// MessageId: DTS_W_EXPREVALPOTENTIALSTRINGTRUNCATION
//
// MessageText:
//
// The result string for expression "%1!s!" may be truncated if it exceeds the maximum length of %2!d! characters. The expression could have a result value that exceeds the maximum size of a DT_WSTR.
//
#define DTS_W_EXPREVALPOTENTIALSTRINGTRUNCATION ((HRESULT)0x800470D8L)

////////////////////////////////////////////////////////////////////////////
// The component is keeping references to buffers it shouldn't. If it needs to keep the buffer, it should make a copy of the buffer for itself by calling the Clone method.

//
// MessageId: DTS_W_COMPONENTLEAKPROCESSINPUT
//
// MessageText:
//
// A call to the ProcessInput method for input %1!d! on %2!s! unexpectedly kept a reference to the buffer it was passed. The refcount on that buffer was %3!d! before the call, and %4!d! after the call returned.
//
#define DTS_W_COMPONENTLEAKPROCESSINPUT  ((HRESULT)0x800470E9L)

////////////////////////////////////////////////////////////////////////////
// The specified input column does not appear in any expression.

//
// MessageId: DTS_W_EXPREVALUNREFERENCEDINPUTCOLUMN
//
// MessageText:
//
// The "%1!s!" on "%2!s!" has usage type READONLY, but is not referenced by an expression. Remove the column from the list of available input columns, or reference it in an expression.
//
#define DTS_W_EXPREVALUNREFERENCEDINPUTCOLUMN ((HRESULT)0x800470EBL)

////////////////////////////////////////////////////////////////////////////
// Could not find the CurrentVersion value for component {c200e360-38c5-11ce-ae62-08002b2b79ef}.

//
// MessageId: DTS_W_COULDNOTFINDCURRENTVERSION
//
// MessageText:
//
// Cannot find the "%1!s!" value for component %2!s!. The CurrentVersion value for the component cannot be located. This error occurs if the component has not set its registry information to contain a CurrentVersion value in the DTSInfo section. This message occurs during component development, or when the component is used in a package, if the component is not registered properly.
//
#define DTS_W_COULDNOTFINDCURRENTVERSION ((HRESULT)0x8004801EL)

////////////////////////////////////////////////////////////////////////////
// A call to GetTempFileName failed. The cause has been reported

//
// MessageId: DTS_W_BUFFERGETTEMPFILENAME
//
// MessageText:
//
// The buffer manager could not get a temporary file name.
//
#define DTS_W_BUFFERGETTEMPFILENAME      ((HRESULT)0x80049300L)

////////////////////////////////////////////////////////////////////////////
// The cause was previously reported.

//
// MessageId: DTS_W_UNUSABLETEMPORARYPATH
//
// MessageText:
//
// The buffer manager could not create a temporary file on the path "%1!s!". The path will not be considered for temporary storage again.
//
#define DTS_W_UNUSABLETEMPORARYPATH      ((HRESULT)0x80049301L)

////////////////////////////////////////////////////////////////////////////
// The data flow task could not open a global named object to communicate with the performacne DLL.

//
// MessageId: DTS_W_DF_PERFCOUNTERS_DISABLED
//
// MessageText:
//
// Warning: Could not open global shared memory to communicate with performance DLL; data flow performance counters are not available.  To resolve, run this package as an administrator, or on the system's console.
//
#define DTS_W_DF_PERFCOUNTERS_DISABLED   ((HRESULT)0x80049304L)

////////////////////////////////////////////////////////////////////////////
// Potential deadlock detected among transforms

//
// MessageId: DTS_W_BACKPRESSURELIFTED
//
// MessageText:
//
// The package contains data flow components with multiple inputs. Run-time dependencies that exist among these components may increase memory usage and reduce performance. Consider removing the dependency chain for the following component IDs and output IDs: %1!hs!, to improve performance.
//
#define DTS_W_BACKPRESSURELIFTED         ((HRESULT)0x80049305L)

////////////////////////////////////////////////////////////////////////////
// The user should never get this.  This is a bug.  It is returned when a variable should have had a valid value but doesn't

//
// MessageId: DTS_E_NOTINITIALIZED
//
// MessageText:
//
// An internal object or variable was not initialized. This is an internal product error.  This error is returned when a variable should have a valid value but does not.
//
#define DTS_E_NOTINITIALIZED             ((HRESULT)0xC0000032L)

//
// MessageId: DTS_E_EXPIRED
//
// MessageText:
//
// Integration Services evaluation period has expired.
//
#define DTS_E_EXPIRED                    ((HRESULT)0xC0000033L)

////////////////////////////////////////////////////////////////////////////
// Happens when user assigns a negative value to a property that should be only positivie like count properties.

//
// MessageId: DTS_E_NEGATIVEVALUESNOTALLOWED
//
// MessageText:
//
// This property cannot be assigned a negative value. This error occurs when a negative value is assigned to a property that can only contain positive values, such as the COUNT property.
//
#define DTS_E_NEGATIVEVALUESNOTALLOWED   ((HRESULT)0xC0000034L)

////////////////////////////////////////////////////////////////////////////
// Happens when user uses a negative value as an index to a collection.

//
// MessageId: DTS_E_NEGATIVEINDEXNOTALLOWED
//
// MessageText:
//
// Indexes cannot be negative. This error occurs when a negative value is used as an index to a collection.
//
#define DTS_E_NEGATIVEINDEXNOTALLOWED    ((HRESULT)0xC0000035L)

////////////////////////////////////////////////////////////////////////////
// CoCreateInstance CLSID_StdComponentCategoriesMgr, most likely external issues

//
// MessageId: DTS_E_GETCATMANAGERFAILED
//
// MessageText:
//
// Failed to create COM Component Categories Manager due to error 0x%1!8.8X! "%2!s!".
//
#define DTS_E_GETCATMANAGERFAILED        ((HRESULT)0xC0000036L)

////////////////////////////////////////////////////////////////////////////
// The user specified the server name which contains invalid characters, usually slash (we don't support multiinstancing, so slash is not allowed)

//
// MessageId: DTS_E_INVALIDSSISSERVERNAME
//
// MessageText:
//
// Invalid server name "%1!s!". SSIS service does not support multi-instance, use just server name instead of "server name\instance".
//
#define DTS_E_INVALIDSSISSERVERNAME      ((HRESULT)0xC00060ABL)

////////////////////////////////////////////////////////////////////////////
// Unable to migrate a VSA script to VSTA on 64 bit platforms due to lack of VSTA designer.

//
// MessageId: DTS_E_SCRIPTMIGRATIONFAILED64BIT
//
// MessageText:
//
// Migration for VSA scripts can not be done on 64 bit platforms due to lack of Visual Tools for Applications designer support. Run the migration under WOW64 on 64 bit platforms.
//
#define DTS_E_SCRIPTMIGRATIONFAILED64BIT ((HRESULT)0xC0008445L)

//
// MessageId: DTS_E_COMMANDDESTINATIONADAPTERSTATIC_ERRORSINCOMMAND
//
// MessageText:
//
// The command execution generated errors.
//
#define DTS_E_COMMANDDESTINATIONADAPTERSTATIC_ERRORSINCOMMAND ((HRESULT)0xC000931AL)

////////////////////////////////////////////////////////////////////////////
// Standalone version of SSIS is not installed.

//
// MessageId: DTS_E_SSISSTANDALONENOTINSTALLED
//
// MessageText:
//
// To run a SSIS package outside of SQL Server Data Tools you must install %1!s! of Integration Services or higher.
//
#define DTS_E_SSISSTANDALONENOTINSTALLED ((HRESULT)0xC000F427L)

//
// MessageId: DTS_MSG_CATEGORY_SERVICE_CONTROL
//
// MessageText:
//
// Service Control
//
#define DTS_MSG_CATEGORY_SERVICE_CONTROL ((HRESULT)0x00000001L)

//
// MessageId: DTS_MSG_CATEGORY_RUNNING_PACKAGE_MANAGEMENT
//
// MessageText:
//
// Running Package Management
//
#define DTS_MSG_CATEGORY_RUNNING_PACKAGE_MANAGEMENT ((HRESULT)0x00000002L)

//
// MessageId: DTS_MSG_SERVER_STARTING
//
// MessageText:
//
// Starting Microsoft SSIS Service.%nServer version %1
//
#define DTS_MSG_SERVER_STARTING          ((HRESULT)0x00000100L)

//
// MessageId: DTS_MSG_SERVER_STARTED
//
// MessageText:
//
// Microsoft SSIS Service started.%nServer version %1
//
#define DTS_MSG_SERVER_STARTED           ((HRESULT)0x00000101L)

//
// MessageId: DTS_MSG_SERVER_STOPPING
//
// MessageText:
//
// Stopping Microsoft SSIS Service.%n%nStop all running packages on exit: %1
//
#define DTS_MSG_SERVER_STOPPING          ((HRESULT)0x00000102L)

//
// MessageId: DTS_MSG_SERVER_STOPPED
//
// MessageText:
//
// Microsoft SSIS Service stopped.%nServer version %1
//
#define DTS_MSG_SERVER_STOPPED           ((HRESULT)0x00000103L)

//
// MessageId: DTS_MSG_SERVER_START_FAILED
//
// MessageText:
//
// Microsoft SSIS Service failed to start.%nError: %1
//
#define DTS_MSG_SERVER_START_FAILED      ((HRESULT)0x00000104L)

//
// MessageId: DTS_MSG_SERVER_STOP_ERROR
//
// MessageText:
//
// Error stopping Microsoft SSIS Service.%nError: %1
//
#define DTS_MSG_SERVER_STOP_ERROR        ((HRESULT)0x00000105L)

//
// MessageId: DTS_MSG_SERVER_MISSING_CONFIG
//
// MessageText:
//
// Microsoft SSIS Service configuration file does not exist.%nLoading with default settings.
//
#define DTS_MSG_SERVER_MISSING_CONFIG    ((HRESULT)0x00000110L)

//
// MessageId: DTS_MSG_SERVER_BAD_CONFIG
//
// MessageText:
//
// Microsoft SSIS Service configuration file is incorrect.%nError reading config file: %1%n%nLoading server with default settings.
//
#define DTS_MSG_SERVER_BAD_CONFIG        ((HRESULT)0x00000111L)

//
// MessageId: DTS_MSG_SERVER_MISSING_CONFIG_REG
//
// MessageText:
//
// Microsoft SSIS Service: %nRegistry setting specifying configuration file does not exist. %nAttempting to load default config file.
//
#define DTS_MSG_SERVER_MISSING_CONFIG_REG ((HRESULT)0x00000112L)

//
// MessageId: DTS_MSG_SERVER_STOPPING_PACKAGE
//
// MessageText:
//
// Microsoft SSIS Service: stopping running package.%nPackage instance ID: %1%nPackage ID: %2%nPackage name: %3%nPackage description: %4%nPackage started by: %5.
//
#define DTS_MSG_SERVER_STOPPING_PACKAGE  ((HRESULT)0x00000150L)

////////////////////////////////////////////////////////////////////////////
// This occurs when a table that is being referenced by an ADO .NET source (using a select * statement) has new columns added to it.

//
// MessageId: DTS_W_EXTERNALTABLECOLSOUTOFSYNC
//
// MessageText:
//
// The table "%1!s!" has changed. New columns might have been added to the table.
//
#define DTS_W_EXTERNALTABLECOLSOUTOFSYNC ((HRESULT)0x0000930DL)

//
// MessageId: DTS_W_COUNTDOWN
//
// MessageText:
//
// There are %1!lu! days left in the evaluation. When it expires, packages will not be able to be executed.
//
#define DTS_W_COUNTDOWN                  ((HRESULT)0x80000036L)

////////////////////////////////////////////////////////////////////////////
// Evaluation period has expired

//
// MessageId: DTS_W_EXPIRED_DEBUGONLY
//
// MessageText:
//
// Integration Services evaluation period has expired. The package can only be executed in debug mode.
//
#define DTS_W_EXPIRED_DEBUGONLY          ((HRESULT)0x80000037L)

////////////////////////////////////////////////////////////////////////////
// The product level required by the log provider is higher than the current product level.

//
// MessageId: DTS_W_LOGPROVIDERPRODUCTLEVEL
//
// MessageText:
//
// The log provider "%1!s!" cannot log messages on the installed edition of SQL Server. The log provider requires %2!s! or higher.
//
#define DTS_W_LOGPROVIDERPRODUCTLEVEL    ((HRESULT)0x8000931BL)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client tries to retrieve a variable from a variables collection on a container during execution of the package and the variable isn't there.  A variable name may have changed, or the client may think that a variable is getting created and it isn't.

//
// MessageId: DTS_E_VARIABLENOTFOUND
//
// MessageText:
//
// The variable cannot be found. This occurs when an attempt is made to retrieve a variable from the Variables collection on a container during execution of the package, and the variable is not there. The variable name may have changed or the variable is not being created.
//
#define DTS_E_VARIABLENOTFOUND           ((HRESULT)0xC0010001L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client calls put_Value on a read only variable.

//
// MessageId: DTS_E_VARIABLEREADONLY
//
// MessageText:
//
// Error trying to write to a read-only variable, "%1".
//
#define DTS_E_VARIABLEREADONLY           ((HRESULT)0xC0010003L)

////////////////////////////////////////////////////////////////////////////
// Check integrity of your installation.

//
// MessageId: DTS_E_MANAGEDCOMPONENTSTORENOTFOUND
//
// MessageText:
//
// Unable to find the directories containing Tasks and Data Flow Task components. Check the integrity of your installation.
//
#define DTS_E_MANAGEDCOMPONENTSTORENOTFOUND ((HRESULT)0xC0010004L)

////////////////////////////////////////////////////////////////////////////
// Try shortening the package name.

//
// MessageId: DTS_E_PACKAGENAMETOOLONG
//
// MessageText:
//
// Package name is too long. The limit is 128 characters. Shorten the package name.
//
#define DTS_E_PACKAGENAMETOOLONG         ((HRESULT)0xC0010006L)

////////////////////////////////////////////////////////////////////////////
// Try shortening the package description.

//
// MessageId: DTS_E_PACKAGEDESCRIPTIONTOOLONG
//
// MessageText:
//
// Package description is too long. The limit is 1024 characters. Shorten the package description.
//
#define DTS_E_PACKAGEDESCRIPTIONTOOLONG  ((HRESULT)0xC0010007L)

////////////////////////////////////////////////////////////////////////////
// Try shortening the value of VersionComments.

//
// MessageId: DTS_E_VERCOMMENTSTOOLONG
//
// MessageText:
//
// VersionComments property is too long. The limit is 1024 characters. Try shortening the VersionComments.
//
#define DTS_E_VERCOMMENTSTOOLONG         ((HRESULT)0xC0010008L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client tries to retrieve an element from a collection on a container during execution of the package and the element isn't there.

//
// MessageId: DTS_E_ELEMENTNOTFOUND
//
// MessageText:
//
// The element cannot be found in a collection. This error happens when you try to retrieve an element from a collection on a container during execution of the package and the element is not there.
//
#define DTS_E_ELEMENTNOTFOUND            ((HRESULT)0xC0010009L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client tries to load a package from a SQL Server and that package does not exist or the database is in an older version database.

//
// MessageId: DTS_E_PACKAGENOTFOUND
//
// MessageText:
//
// The specified package could not be loaded from the SQL Server database.
//
#define DTS_E_PACKAGENOTFOUND            ((HRESULT)0xC001000AL)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client or a task assigned a runtime object to a variable value.

//
// MessageId: DTS_E_INVALIDVARIABLEVALUE
//
// MessageText:
//
// The variable value assignment is not valid. This error happens when the client or a task assigns a runtime object to a variable value.
//
#define DTS_E_INVALIDVARIABLEVALUE       ((HRESULT)0xC001000CL)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client or a task trys to create a variable with a namespace of "System".

//
// MessageId: DTS_E_RESERVEDNAMESPACE
//
// MessageText:
//
// Error assigning namespace to the variable. The namespace "System" is reserved for system use. This error happens when a component or task attempts to create a variable with a namespace of "System".
//
#define DTS_E_RESERVEDNAMESPACE          ((HRESULT)0xC001000DL)

////////////////////////////////////////////////////////////////////////////
// This error is posted by Connections collection when an element is not found.

//
// MessageId: DTS_E_CONNECTIONNOTFOUND
//
// MessageText:
//
// The connection "%1!s!" is not found. This error is thrown by Connections collection when the specific connection element is not found.
//
#define DTS_E_CONNECTIONNOTFOUND         ((HRESULT)0xC001000EL)

////////////////////////////////////////////////////////////////////////////
// Variables of type VT_I8 and VT_UI8 are not supported on W2K.

//
// MessageId: DTS_E_64BITVARIABLERECAST
//
// MessageText:
//
// The variable "%1!s!" is a 64-bit integer variable, which is not supported on this operating system. The variable has been recast to 32-bit integer. Variables of type VT_I8 and VT_UI8 are not supported on Microsoft Windows 2000.
//
#define DTS_E_64BITVARIABLERECAST        ((HRESULT)0xC001000FL)

////////////////////////////////////////////////////////////////////////////
// This error happens when a variable's readonly attribute is being changed at runtime.

//
// MessageId: DTS_E_CANTCHANGEREADONLYATRUNTIME
//
// MessageText:
//
// An attempt change to a read-only attribute on variable "%1" occurred. This error happens when a read-only attribute for a variable is being changed at runtime. Read-only attributes can be changed only at design time.
//
#define DTS_E_CANTCHANGEREADONLYATRUNTIME ((HRESULT)0xC0010010L)

////////////////////////////////////////////////////////////////////////////
// Variables are not allows to reference containers.

//
// MessageId: DTS_E_VARIABLEINVALIDCONTAINERREF
//
// MessageText:
//
// Invalid attempt to set a variable to a container reference.  Variables are not allowed to reference containers.
//
#define DTS_E_VARIABLEINVALIDCONTAINERREF ((HRESULT)0xC0010011L)

////////////////////////////////////////////////////////////////////////////
// This error happens when a variable value is not allowed for variables.

//
// MessageId: DTS_E_INVALIDVARVALUE
//
// MessageText:
//
// Assigning invalid value or object to variable "%1!s!". This error happens when a value is not appropriate for variables.
//
#define DTS_E_INVALIDVARVALUE            ((HRESULT)0xC0010013L)

////////////////////////////////////////////////////////////////////////////
// This is used as a return value from functions that encountered errors

//
// MessageId: DTS_E_GENERICERROR
//
// MessageText:
//
// One or more error occurred. There should be more specific errors preceding this one that explains the details of the errors. This message is used as a return value from functions that encounter errors.
//
#define DTS_E_GENERICERROR               ((HRESULT)0xC0010014L)

////////////////////////////////////////////////////////////////////////////
// This happens when unpersisting an array into a vriable.

//
// MessageId: DTS_E_INVALIDARRAYVALUE
//
// MessageText:
//
// Error getting or setting an array value. The type "%1!s!" is not allowed. This occurs when loading an array into a variable.
//
#define DTS_E_INVALIDARRAYVALUE          ((HRESULT)0xC0010016L)

////////////////////////////////////////////////////////////////////////////
// This happens when persisting an array of unspported types into a vriable.

//
// MessageId: DTS_E_UNSUPPORTEDARRAYTYPE
//
// MessageText:
//
// Unsupported type in array. This happens when saving an array of unsupported types into a variable.
//
#define DTS_E_UNSUPPORTEDARRAYTYPE       ((HRESULT)0xC0010017L)

////////////////////////////////////////////////////////////////////////////
// This happens when persistence fails.

//
// MessageId: DTS_E_PERSISTENCEERROR
//
// MessageText:
//
// Error loading value "%1!s!" from node "%2!s!".
//
#define DTS_E_PERSISTENCEERROR           ((HRESULT)0xC0010018L)

//
// MessageId: DTS_E_INVALIDNODE
//
// MessageText:
//
// Node "%1!s!" is not a valid node. This happens when saving fails.
//
#define DTS_E_INVALIDNODE                ((HRESULT)0xC0010019L)

//
// MessageId: DTS_E_REFID_COULDNOTMAPREFID
//
// MessageText:
//
// The object "%1!s!" references ID "%2!s!", but no object in the package has this ID.  If the object "%1!s!" was added to the package by a manual edit ensure that the referenced object with ID "%2!s!" is also added to the package.
//
#define DTS_E_REFID_COULDNOTMAPREFID     ((HRESULT)0xC001001CL)

//
// MessageId: DTS_E_REFID_CANNOT_FINDATTRIBUTE
//
// MessageText:
//
// The expected attribute "%3!s!" was not found on the "%2!s!" element while processing an object at "%1!s!".
//
#define DTS_E_REFID_CANNOT_FINDATTRIBUTE ((HRESULT)0xC001001DL)

//
// MessageId: DTS_E_REFID_CANNOT_FINDATTRIBUTES
//
// MessageText:
//
// The expected attributes "%3!s!" were not found on the "%2!s!" element while processing an object at "%1!s!
//
#define DTS_E_REFID_CANNOT_FINDATTRIBUTES ((HRESULT)0xC001001EL)

////////////////////////////////////////////////////////////////////////////
// User is trying to set ConnectionManager.ProtectionLevel on a project connection manager

//
// MessageId: DTS_E_CANNOTCHANGEPROTECTIONLEVELSCM
//
// MessageText:
//
// Cannot change the protection level of a project connection manager. It inherits from the project
//
#define DTS_E_CANNOTCHANGEPROTECTIONLEVELSCM ((HRESULT)0xC001001FL)

////////////////////////////////////////////////////////////////////////////
// This happens when persistence fails.

//
// MessageId: DTS_E_ERRORLOADINGTASK
//
// MessageText:
//
// Failed to load task "%1!s!", type "%2!s!". The contact information for this task is "%3!s!".
//
#define DTS_E_ERRORLOADINGTASK           ((HRESULT)0xC0010020L)

////////////////////////////////////////////////////////////////////////////
// This happens when referring to nonexistent element in collection.

//
// MessageId: DTS_E_ERRORELEMENTNOTINCOLL
//
// MessageText:
//
// Element "%1!s!" does not exist in collection "%2!s!".
//
#define DTS_E_ERRORELEMENTNOTINCOLL      ((HRESULT)0xC0010021L)

////////////////////////////////////////////////////////////////////////////
// This happens when we get bad XML.

//
// MessageId: DTS_E_MISSINGOBJECTDATA
//
// MessageText:
//
// The ObjectData element is missing in the XML block of a hosted object. This occurs when the XML parser attempts to locate the data element for an object and it cannot be found.
//
#define DTS_E_MISSINGOBJECTDATA          ((HRESULT)0xC0010022L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client tries to retrieve a variable from a variables collection on a container during execution of the package and the variable isn't there.  A variable name may have changed, or the client may think that a variable is getting created and it isn't.

//
// MessageId: DTS_E_VARIABLENOTFOUNDINCOLL
//
// MessageText:
//
// The variable "%1!s!" cannot be found. This error occurs when an attempt to retrieve a variable from a variables collection on a container during execution of the package occurs, and the variable is not there.  A variable name may have changed or the variable is not being created.
//
#define DTS_E_VARIABLENOTFOUNDINCOLL     ((HRESULT)0xC0010023L)

////////////////////////////////////////////////////////////////////////////
// This occurs when we fail to create a task which has been deprecated. An error raised with this message should contain the task type.

//
// MessageId: DTS_E_DEPRECATEDTASK
//
// MessageText:
//
// The "%1!s!" task has been deprecated and cannot be used with this version of Integration Services.
//
#define DTS_E_DEPRECATEDTASK             ((HRESULT)0xC0010024L)

////////////////////////////////////////////////////////////////////////////
// Happens when there are empty task hosts.

//
// MessageId: DTS_E_HASEMPTYTASKHOSTS
//
// MessageText:
//
// The package cannot execute because it contains tasks that failed to load.
//
#define DTS_E_HASEMPTYTASKHOSTS          ((HRESULT)0xC0010025L)

////////////////////////////////////////////////////////////////////////////
// An empty task is put in place of a task that failed to load.

//
// MessageId: DTS_E_TASKISEMPTY
//
// MessageText:
//
// The task has failed to load. The contact information for this task is "%1!s!".
//
#define DTS_E_TASKISEMPTY                ((HRESULT)0xC0010026L)

////////////////////////////////////////////////////////////////////////////
// This happens when persistence fails.

//
// MessageId: DTS_E_ERRORLOADINGTASKNOCONTACT
//
// MessageText:
//
// Error loading task "%1!s!".
//
#define DTS_E_ERRORLOADINGTASKNOCONTACT  ((HRESULT)0xC0010027L)

////////////////////////////////////////////////////////////////////////////
// This happens when loading a task from xml fails.

//
// MessageId: DTS_E_ERRORATLOADTASK
//
// MessageText:
//
// Error loading task. This happens when loading a task from XML fails.
//
#define DTS_E_ERRORATLOADTASK            ((HRESULT)0xC0010028L)

////////////////////////////////////////////////////////////////////////////
// Managed task persistence calls (LoadFromXML/SaveToXML) fail

//
// MessageId: DTS_E_ERRORPERSISTMANAGEDTASK
//
// MessageText:
//
// Exception "%1!s!" occurred during "%2!s!" for task "%3!s!".
//
#define DTS_E_ERRORPERSISTMANAGEDTASK    ((HRESULT)0xC0010029L)

////////////////////////////////////////////////////////////////////////////
// This error should just happen if customers are using the API programmatically. The runtime will add project parameter through the managed API.

//
// MessageId: DTS_E_CANNOT_MODIFY_PROJECT_PARAMETERS_COLLECTION
//
// MessageText:
//
// Cannot modify project parameters collection through the IDTSVariables100 interface. Use the Managed Runtime instead.
//
#define DTS_E_CANNOT_MODIFY_PROJECT_PARAMETERS_COLLECTION ((HRESULT)0xC001002AL)

////////////////////////////////////////////////////////////////////////////
// Microsoft.ACE.OLEDB.12.0 is not installed. This can occur if you are running 64bit process

//
// MessageId: DTS_E_OLEDB_ACENOTFOUND
//
// MessageText:
//
// The 'Microsoft.ACE.OLEDB.12.0' provider is not registered on the local machine. For more information, see http://go.microsoft.com/fwlink/?LinkId=219816
//
#define DTS_E_OLEDB_ACENOTFOUND          ((HRESULT)0xC001002BL)

////////////////////////////////////////////////////////////////////////////
// Cannot cast object to type IDTSObjectVersionUpdate100

//
// MessageId: DTS_E_CANNOTCASTTOIDTSOBJECEVERSIONUPDATE
//
// MessageText:
//
// Cannot cast object to type IDTSObjectVersionUpdate100
//
#define DTS_E_CANNOTCASTTOIDTSOBJECEVERSIONUPDATE ((HRESULT)0xC001002CL)

////////////////////////////////////////////////////////////////////////////
// Failed to create object for task

//
// MessageId: DTS_E_INITTASKOBJECTFAILED
//
// MessageText:
//
// Task "%1!s!" (type "%2!s!") failed to initialize due to error 0x%3!8.8X! "%4!s!".
//
#define DTS_E_INITTASKOBJECTFAILED       ((HRESULT)0xC001002DL)

////////////////////////////////////////////////////////////////////////////
// An error occurred while trying to process this item. We weren't able to determine a better error message.

//
// MessageId: DTS_E_UNKNOWN
//
// MessageText:
//
// An error has occurred. The error code was 0x%1!8.8X!.
//
#define DTS_E_UNKNOWN                    ((HRESULT)0xC001002EL)

////////////////////////////////////////////////////////////////////////////
// The cache cannot be written to multiple times.

//
// MessageId: DTS_E_MULTIPLECACHEWRITES
//
// MessageText:
//
// The %1!s! cannot write to the cache because %2!s! has already written to it.
//
#define DTS_E_MULTIPLECACHEWRITES        ((HRESULT)0xC0010200L)

//
// MessageId: DTS_E_SETCACHEFORINSERTFAILED
//
// MessageText:
//
// Failed to prepare the cache for new data.
//
#define DTS_E_SETCACHEFORINSERTFAILED    ((HRESULT)0xC0010201L)

//
// MessageId: DTS_E_SETCACHEFORFILLFAILED
//
// MessageText:
//
// Failed to mark the cache as filled with data.
//
#define DTS_E_SETCACHEFORFILLFAILED      ((HRESULT)0xC0010202L)

//
// MessageId: DTS_E_READUNINITIALIZEDCACHE
//
// MessageText:
//
// The cache is not initialized and cannot be read by %1!s!.
//
#define DTS_E_READUNINITIALIZEDCACHE     ((HRESULT)0xC0010203L)

//
// MessageId: DTS_E_SETCACHEFORREADFAILED
//
// MessageText:
//
// Failed to prepare the cache for providing data.
//
#define DTS_E_SETCACHEFORREADFAILED      ((HRESULT)0xC0010204L)

//
// MessageId: DTS_E_READNOTFILLEDCACHE
//
// MessageText:
//
// The cache is being written to by %1!s!, and cannot be read by %2!s!.
//
#define DTS_E_READNOTFILLEDCACHE         ((HRESULT)0xC0010205L)

//
// MessageId: DTS_E_WRITEWHILECACHEINUSE
//
// MessageText:
//
// The cache is being read from %1!s! and cannot be written to by %2!s!.
//
#define DTS_E_WRITEWHILECACHEINUSE       ((HRESULT)0xC0010206L)

////////////////////////////////////////////////////////////////////////////
// This happens when trying to load a package (or other object) from an XML node that is not of that type, such as a non-SSIS xml node.

//
// MessageId: DTS_E_CANTLOADFROMNODE
//
// MessageText:
//
// The runtime object cannot be loaded from the specified XML node.  This happens when trying to load a package or other object from an XML node that is not of the correct type, such as a non-SSIS XML node.
//
#define DTS_E_CANTLOADFROMNODE           ((HRESULT)0xC0011001L)

////////////////////////////////////////////////////////////////////////////
// This happens when trying to load a package and the file could not be opened or loaded correctly into XML Document.  Typically, it means an invalid file name was specified when calling LoadPackage, check the filename for correct spelling. Or the XML file specified has invalid format.

//
// MessageId: DTS_E_OPENPACKAGEFILE
//
// MessageText:
//
// Failed to open package file "%1!s!" due to error 0x%2!8.8X! "%3!s!".  This occurs when loading a package and the file cannot be opened or loaded correctly into the XML document. This can be the result of specifying an incorrect file name when calling LoadPackage or the specified XML file has an incorrect format.
//
#define DTS_E_OPENPACKAGEFILE            ((HRESULT)0xC0011002L)

//
// MessageId: DTS_E_LOADPACKAGEXML
//
// MessageText:
//
// Failed to load XML due to error 0x%1!8.8X! "%2!s!". This occurs when loading a package and the file cannot be opened or loaded correctly into the XML document.  This can be the result of specifying an incorrect file name to the LoadPackage method or the specified XML file has an incorrect format.
//
#define DTS_E_LOADPACKAGEXML             ((HRESULT)0xC0011003L)

//
// MessageId: DTS_E_LOADPACKAGEXMLFILE
//
// MessageText:
//
// Failed to load XML from package file "%1!s!" due to error 0x%2!8.8X! "%3!s!".  This occurs when loading a package and the file cannot be opened or loaded correctly into the XML document. This can be the result of specifying an incorrect file name to the LoadPackage method or the specified XML file has an incorrect format.
//
#define DTS_E_LOADPACKAGEXMLFILE         ((HRESULT)0xC0011004L)

//
// MessageId: DTS_E_OPENFILE
//
// MessageText:
//
// Failed to open package file. This occurs when loading a package and the file cannot be opened or loaded correctly into the XML document. This can be the result of specifying an incorrect file name to the LoadPackage method or the specified XML file has an incorrect format.
//
#define DTS_E_OPENFILE                   ((HRESULT)0xC0011005L)

////////////////////////////////////////////////////////////////////////////
// This happens when failing to decode a binary format in the package.

//
// MessageId: DTS_E_UNABLETODECODEBINARYFORMAT
//
// MessageText:
//
// Unable to decode a binary format in the package.
//
#define DTS_E_UNABLETODECODEBINARYFORMAT ((HRESULT)0xC0011006L)

////////////////////////////////////////////////////////////////////////////
// This happens when The package does not have a valid xml format and could not be loaded as xml.

//
// MessageId: DTS_E_FUNDAMENTALLOADINGERROR
//
// MessageText:
//
// Unable to load the package as XML because of package does not have a valid XML format. A specific XML parser error will be posted.
//
#define DTS_E_FUNDAMENTALLOADINGERROR    ((HRESULT)0xC0011007L)

////////////////////////////////////////////////////////////////////////////
// This happens when there is an error loading from XML and user did not pass in a valid Events object where a detailed error can be specified.

//
// MessageId: DTS_E_LOADFROMXML
//
// MessageText:
//
// Error loading from XML. No further detailed error information can be specified for this problem because no Events object was passed where detailed error information can be stored.
//
#define DTS_E_LOADFROMXML                ((HRESULT)0xC0011008L)

////////////////////////////////////////////////////////////////////////////
// This happens when there is an error creating an XML DOM object. XML may not be registered.

//
// MessageId: DTS_E_XMLDOMERROR
//
// MessageText:
//
// Cannot create an instance of the XML Document Object Model due to error 0x%1!8.8X! "%2!s!". MSXML may not be registered.
//
#define DTS_E_XMLDOMERROR                ((HRESULT)0xC0011009L)

////////////////////////////////////////////////////////////////////////////
// This happens when attempting to load an older SSIS version package, or the package file refers to an invalid structured object.

//
// MessageId: DTS_E_CANNOTLOADOLDPACKAGES
//
// MessageText:
//
// The package cannot be loaded. This occurs when attempting to load an older version package, or the package file refers to an invalid structured object.
//
#define DTS_E_CANNOTLOADOLDPACKAGES      ((HRESULT)0xC001100DL)

//
// MessageId: DTS_E_SAVEFILE
//
// MessageText:
//
// Failed to save package file.
//
#define DTS_E_SAVEFILE                   ((HRESULT)0xC001100EL)

//
// MessageId: DTS_E_SAVEPACKAGEFILE
//
// MessageText:
//
// Failed to save package file "%1!s!" with error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_SAVEPACKAGEFILE            ((HRESULT)0xC001100FL)

////////////////////////////////////////////////////////////////////////////
// The runtime was expecting the object to implement IDTSName100, but it didn't.  The object should support IDTSName100.

//
// MessageId: DTS_E_IDTSNAMENOTSUPPORTED
//
// MessageText:
//
// The object must inherit from IDTSName100 and does not.
//
#define DTS_E_IDTSNAMENOTSUPPORTED       ((HRESULT)0xC001200DL)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration file configuration entries has an invalid format: There was no \package delimiter

//
// MessageId: DTS_E_CONFIGFORMATINVALID_PACKAGEDELIMITER
//
// MessageText:
//
// The configuration entry, "%1!s!", has an incorrect format because it does not begin with package delimiter. There was no "\package" delimiter.
//
#define DTS_E_CONFIGFORMATINVALID_PACKAGEDELIMITER ((HRESULT)0xC0012018L)

////////////////////////////////////////////////////////////////////////////
// Returned for various formatting errors like invalid array delimiter or missing delimiter

//
// MessageId: DTS_E_CONFIGFORMATINVALID
//
// MessageText:
//
// The configuration entry "%1!s!" had an incorrect format. This can occur because of a missing delimiter or formatting errors, like an invalid array delimiter.
//
#define DTS_E_CONFIGFORMATINVALID        ((HRESULT)0xC0012019L)

////////////////////////////////////////////////////////////////////////////
// Happens when trying to export configurations, usually preceded by more descriptive errors

//
// MessageId: DTS_E_CONFIGFILEFAILEDEXPORT
//
// MessageText:
//
// Failure exporting configuration file.
//
#define DTS_E_CONFIGFILEFAILEDEXPORT     ((HRESULT)0xC001201BL)

////////////////////////////////////////////////////////////////////////////
// The properties collection is read only and cannot be modified.

//
// MessageId: DTS_E_PROPERTIESCOLLECTIONREADONLY
//
// MessageText:
//
// Properties collection cannot be modified.
//
#define DTS_E_PROPERTIESCOLLECTIONREADONLY ((HRESULT)0xC0012021L)

//
// MessageId: DTS_E_DTRXMLSAVEFAILURE
//
// MessageText:
//
// Unable to save configuration file. The file may be read only.
//
#define DTS_E_DTRXMLSAVEFAILURE          ((HRESULT)0xC0012022L)

////////////////////////////////////////////////////////////////////////////
// FailPackageOnFailure property is not applicable to the package container.

//
// MessageId: DTS_E_FAILPACKAGEONFAILURENA
//
// MessageText:
//
// FailPackageOnFailure property is not applicable to the package container.
//
#define DTS_E_FAILPACKAGEONFAILURENA     ((HRESULT)0xC0012023L)

////////////////////////////////////////////////////////////////////////////
// The product level required by the task is higher than the current product level.

//
// MessageId: DTS_E_TASKPRODUCTLEVEL
//
// MessageText:
//
// The task "%1!s!" cannot run on the installed edition of Integration Services. It requires %2!s! or higher.
//
#define DTS_E_TASKPRODUCTLEVEL           ((HRESULT)0xC0012024L)

////////////////////////////////////////////////////////////////////////////
// Happens when a user attempts to save a configuration to a file and the XML document save operation fails to write to the file. The file maybe read only.

//
// MessageId: DTS_E_UNABLETOSAVETOFILE
//
// MessageText:
//
// Unable to save xml to "%1!s!". The file may be read only.
//
#define DTS_E_UNABLETOSAVETOFILE         ((HRESULT)0xC0012029L)

////////////////////////////////////////////////////////////////////////////
// This happens when a configuration value cannot be converted from a string to the appropriate destination type.  Check the configuration value to ensure it can be converted to the type of the destination property or variable.

//
// MessageId: DTS_E_CONFIGTYPECONVERSIONFAILED
//
// MessageText:
//
// Failed to convert a type in the configuration "%1!s!" for the package path "%2!s!".  This happens when a configuration value cannot be converted from a string to the appropriate destination type. Check the configuration value to ensure it can be converted to the type of the destination property or variable.
//
#define DTS_E_CONFIGTYPECONVERSIONFAILED ((HRESULT)0xC0012037L)

//
// MessageId: DTS_E_CONFIGFAILED
//
// MessageText:
//
// Configuration failure. This is a generic warning for all configuration types. Other warnings should precede this with more information.
//
#define DTS_E_CONFIGFAILED               ((HRESULT)0xC0012049L)

////////////////////////////////////////////////////////////////////////////
// There is a problem with package being executed.

//
// MessageId: DTS_E_REMOTEPACKAGEVALIDATION
//
// MessageText:
//
// Package failed validation from the ExecutePackage task. The package cannot run.
//
#define DTS_E_REMOTEPACKAGEVALIDATION    ((HRESULT)0xC0012050L)

//
// MessageId: DTS_E_FAILTOCREATEMUTEX
//
// MessageText:
//
// Failed to create mutex "%1!s!" with error 0x%2!8.8X!.
//
#define DTS_E_FAILTOCREATEMUTEX          ((HRESULT)0xC0013001L)

//
// MessageId: DTS_E_MUTEXOWNBYDIFFUSER
//
// MessageText:
//
// Mutex "%1!s!" already exists and is owned by another user.
//
#define DTS_E_MUTEXOWNBYDIFFUSER         ((HRESULT)0xC0013002L)

//
// MessageId: DTS_E_WAITFORMUTEXFAILED
//
// MessageText:
//
// Failed to acquire mutex "%1!s!" with error 0x%2!8.8X!.
//
#define DTS_E_WAITFORMUTEXFAILED         ((HRESULT)0xC0013003L)

//
// MessageId: DTS_E_FAILTORELEASEMUTEX
//
// MessageText:
//
// Failed to release mutex "%1!s!" with error 0x%2!8.8X!.
//
#define DTS_E_FAILTORELEASEMUTEX         ((HRESULT)0xC0013004L)

////////////////////////////////////////////////////////////////////////////
// Should never happen, but when it does means that internally the wrapper has an invalid pointer to a task

//
// MessageId: DTS_E_INVALIDTASKPOINTER
//
// MessageText:
//
// The wrappers task pointer is not valid. The wrapper has an invalid pointer to a task.
//
#define DTS_E_INVALIDTASKPOINTER         ((HRESULT)0xC0014003L)

////////////////////////////////////////////////////////////////////////////
// This will happen anytime a client tries to add an executable to more than one executables collection, resolution: remove the executable from it's current executables collection before adding it

//
// MessageId: DTS_E_ALREADYADDED
//
// MessageText:
//
// The executable has been added to the Executables collection of another container. This occurs when a client tries to add an executable to more than one Executables collection. You need to remove the executable from the current Executables collection before attempting to add it.
//
#define DTS_E_ALREADYADDED               ((HRESULT)0xC0014004L)

////////////////////////////////////////////////////////////////////////////
// This error is returned when an attempt is made to create a connection manager for unknown connection type. The typical cause is a typo in connection type name

//
// MessageId: DTS_E_UNKNOWNCONNECTIONMANAGERTYPE
//
// MessageText:
//
// The connection type "%1!s!" specified for connection manager "%2!s!" is not recognized as a valid connection manager type. This error is returned when an attempt is made to create a connection manager for an unknown connection type. Check the spelling in the connection type name.
//
#define DTS_E_UNKNOWNCONNECTIONMANAGERTYPE ((HRESULT)0xC0014005L)

////////////////////////////////////////////////////////////////////////////
// This is typically, but not always, caused by out of memory condition

//
// MessageId: DTS_E_COLLECTIONCOULDNTADD
//
// MessageText:
//
// An object was created but the attempt to add it to a collection failed. This can occur due to an out-of-memory condition.
//
#define DTS_E_COLLECTIONCOULDNTADD       ((HRESULT)0xC0014006L)

//
// MessageId: DTS_E_ODBCERRORENV
//
// MessageText:
//
// There was an error creating an Open Database Connectivity (ODBC) environment.
//
#define DTS_E_ODBCERRORENV               ((HRESULT)0xC0014007L)

//
// MessageId: DTS_E_ODBCERRORDBC
//
// MessageText:
//
//  There was an error creating an Open Database Connectivity (ODBC) database connection.
//
#define DTS_E_ODBCERRORDBC               ((HRESULT)0xC0014008L)

//
// MessageId: DTS_E_ODBCERRORCONNECT
//
// MessageText:
//
// There was an error trying to establish an Open Database Connectivity (ODBC) connection with the database server.
//
#define DTS_E_ODBCERRORCONNECT           ((HRESULT)0xC0014009L)

//
// MessageId: DTS_E_CONNECTIONMANAGERQUALIFIERALREADYSET
//
// MessageText:
//
// The qualifier is already set on this instance of the connection manager. The qualifier may be set once per instance.
//
#define DTS_E_CONNECTIONMANAGERQUALIFIERALREADYSET ((HRESULT)0xC001400AL)

//
// MessageId: DTS_E_CONNECTIONMANAGERQUALIFIERNOTSET
//
// MessageText:
//
// The qualifier has not been set on this instance of the connection manager. Setting the qualifier is required to complete initialization.
//
#define DTS_E_CONNECTIONMANAGERQUALIFIERNOTSET ((HRESULT)0xC001400BL)

//
// MessageId: DTS_E_CONNECTIONMANAGERQUALIFIERNOTSUPPORTED
//
// MessageText:
//
// This connection manager does not support specification of qualifiers.
//
#define DTS_E_CONNECTIONMANAGERQUALIFIERNOTSUPPORTED ((HRESULT)0xC001400CL)

//
// MessageId: DTS_E_CANNOTCLONECONNECTIONMANAGER
//
// MessageText:
//
// Connection manager "0x%1!s!" cannot be cloned for out-of-process execution.
//
#define DTS_E_CANNOTCLONECONNECTIONMANAGER ((HRESULT)0xC001400DL)

//
// MessageId: DTS_E_NOSQLPROFILERDLL
//
// MessageText:
//
// The log provider for SQL Server Profiler was unable to load pfclnt.dll. Please check that SQL Server Profiler is installed.
//
#define DTS_E_NOSQLPROFILERDLL           ((HRESULT)0xC001400EL)

////////////////////////////////////////////////////////////////////////////
// This indicates logging error that is not attributable to a specific log provider.

//
// MessageId: DTS_E_LOGFAILED
//
// MessageText:
//
// The SSIS logging infrastructure failed with error code 0x%1!8.8X!. This error indicates that this logging error is not attributable to a specific log provider.
//
#define DTS_E_LOGFAILED                  ((HRESULT)0xC001400FL)

////////////////////////////////////////////////////////////////////////////
// This indicates logging error attributed to a specified log provider.

//
// MessageId: DTS_E_LOGPROVIDERFAILED
//
// MessageText:
//
// The SSIS logging provider "%1!s!" failed with error code 0x%2!8.8X! (%3!s!).  This indicates a logging error attributable to the specified log provider.
//
#define DTS_E_LOGPROVIDERFAILED          ((HRESULT)0xC0014010L)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_SAVETOSQLSERVER_OLEDB
//
// MessageText:
//
// The SaveToSQLServer method has encountered OLE DB error code 0x%1!8.8X! (%2!s!).  The SQL statement that was issued has failed.
//
#define DTS_E_SAVETOSQLSERVER_OLEDB      ((HRESULT)0xC0014011L)

//
// MessageId: DTS_E_LOADFROMSQLSERVER_OLEDB
//
// MessageText:
//
// The LoadFromSQLServer method has encountered OLE DB error code 0x%1!8.8X! (%2!s!).  The SQL statement that was issued has failed.
//
#define DTS_E_LOADFROMSQLSERVER_OLEDB    ((HRESULT)0xC0014012L)

//
// MessageId: DTS_E_REMOVEFROMSQLSERVER_OLEDB
//
// MessageText:
//
// The RemoveFromSQLServer method encountered OLE DB error code 0x%1!8.8X! (%2!s!) The SQL statement that was issued has failed.
//
#define DTS_E_REMOVEFROMSQLSERVER_OLEDB  ((HRESULT)0xC0014013L)

//
// MessageId: DTS_E_EXISTSONSQLSERVER_OLEDB
//
// MessageText:
//
// The ExistsOnSQLServer method has encountered OLE DB error code 0x%1!8.8X! (%2!s!). The SQL statement issued has failed.
//
#define DTS_E_EXISTSONSQLSERVER_OLEDB    ((HRESULT)0xC0014014L)

////////////////////////////////////////////////////////////////////////////
// We called IDataInitialize::GetDataSource and it returned DB_E_ERRORSOCCURRED.

//
// MessageId: DTS_E_CONNECTIONSTRING
//
// MessageText:
//
// OLE DB has failed making a database connection when using the supplied connection string.
//
#define DTS_E_CONNECTIONSTRING           ((HRESULT)0xC0014015L)

////////////////////////////////////////////////////////////////////////////
// When adding a precedence constraint the user specified "From" executable which is not a child of this container.

//
// MessageId: DTS_E_FROMEXECISNOTCHILD
//
// MessageText:
//
// When adding a precedence constraint, a From executable was specified that is not a child of this container.
//
#define DTS_E_FROMEXECISNOTCHILD         ((HRESULT)0xC0014016L)

////////////////////////////////////////////////////////////////////////////
// When adding a precedence constraint the user specified "To" executable which is not a child of this container.

//
// MessageId: DTS_E_TOEXECISNOTCHILD
//
// MessageText:
//
// When adding a precedence constraint, the To executable specified is not a child of this container.
//
#define DTS_E_TOEXECISNOTCHILD           ((HRESULT)0xC0014017L)

////////////////////////////////////////////////////////////////////////////
// SQLSetConnectAttr failed to set SQL_ATTR_ENLIST_IN_DTC attribute

//
// MessageId: DTS_E_ODBCTRANSACTIONENLIST
//
// MessageText:
//
// There was an error trying enlist an ODBC connection in a transaction. The SQLSetConnectAttr failed to set the SQL_ATTR_ENLIST_IN_DTC attribute.
//
#define DTS_E_ODBCTRANSACTIONENLIST      ((HRESULT)0xC0014018L)

////////////////////////////////////////////////////////////////////////////
// When OfflineMode is True, it means that connections cannot be acquired.

//
// MessageId: DTS_E_CONNECTIONOFFLINE
//
// MessageText:
//
// The connection manager "%1!s!" will not acquire a connection because the package OfflineMode property is TRUE. When the OfflineMode is TRUE, connections cannot be acquired.
//
#define DTS_E_CONNECTIONOFFLINE          ((HRESULT)0xC0014019L)

////////////////////////////////////////////////////////////////////////////
// DTC tx failed to start, e.g. msdtc service is not running

//
// MessageId: DTS_E_BEGINTRANSACTION
//
// MessageText:
//
// The SSIS Runtime has failed to start the distributed transaction due to error 0x%1!8.8X! "%2!s!". The DTC transaction failed to start. This could occur because the MSDTC Service is not running.
//
#define DTS_E_BEGINTRANSACTION           ((HRESULT)0xC001401AL)

////////////////////////////////////////////////////////////////////////////
// Design time only method

//
// MessageId: DTS_E_SETQUALIFIERDESIGNTIMEONLY
//
// MessageText:
//
// The SetQualifier method cannot be called on a connection manager during package execution. This method is used at design-time only.
//
#define DTS_E_SETQUALIFIERDESIGNTIMEONLY ((HRESULT)0xC001401BL)

////////////////////////////////////////////////////////////////////////////
// Not supported on earlier versions of servers

//
// MessageId: DTS_E_SQLPERSISTENCEVERSION
//
// MessageText:
//
// Storing or modifying packages in SQL Server requires the SSIS runtime and database to be the same version. Storing packages in earlier versions is not supported.
//
#define DTS_E_SQLPERSISTENCEVERSION      ((HRESULT)0xC001401CL)

//
// MessageId: DTS_E_CONNECTIONVALIDATIONFAILED
//
// MessageText:
//
// Connection "%1!s!" failed validation.
//
#define DTS_E_CONNECTIONVALIDATIONFAILED ((HRESULT)0xC001401DL)

//
// MessageId: DTS_E_INVALIDFILENAMEINCONNECTION
//
// MessageText:
//
// The file name "%1!s!" specified in the connection was not valid.
//
#define DTS_E_INVALIDFILENAMEINCONNECTION ((HRESULT)0xC001401EL)

////////////////////////////////////////////////////////////////////////////
// Vertical bars found on connection string and Retain is True.

//
// MessageId: DTS_E_MULTIPLEFILESONRETAINEDCONNECTION
//
// MessageText:
//
// Multiple file names cannot be specified on a connection when the Retain property is TRUE. Vertical bars were found on the connection string, meaning multiple file names are being specified and, in addition, the Retain property is TRUE.
//
#define DTS_E_MULTIPLEFILESONRETAINEDCONNECTION ((HRESULT)0xC001401FL)

////////////////////////////////////////////////////////////////////////////
// Some ODBC error has occurred. A later message will provide context

//
// MessageId: DTS_E_ODBCERROR
//
// MessageText:
//
// An ODBC error %1!d! has occurred.
//
#define DTS_E_ODBCERROR                  ((HRESULT)0xC0014020L)

//
// MessageId: DTS_E_PRECEDENCECONSTRAINT
//
// MessageText:
//
// There was an error in the precedence constraint between "%1!s!" and "%2!s!".
//
#define DTS_E_PRECEDENCECONSTRAINT       ((HRESULT)0xC0014021L)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to populate foreachenumerators that are native.

//
// MessageId: DTS_E_FAILEDPOPNATIVEFEE
//
// MessageText:
//
// Failed to populate the ForEachEnumeratorInfos collection with native ForEachEnumerators with the following error code: %1!s!.
//
#define DTS_E_FAILEDPOPNATIVEFEE         ((HRESULT)0xC0014022L)

////////////////////////////////////////////////////////////////////////////
// Happens when ForEach Enumerator cannot enumerate.

//
// MessageId: DTS_E_GETENUMERATOR
//
// MessageText:
//
// The GetEnumerator method of the ForEach Enumerator has failed with error 0x%1!8.8X! "%2!s!". This occurs when the ForEach Enumerator cannot enumerate.
//
#define DTS_E_GETENUMERATOR              ((HRESULT)0xC0014023L)

////////////////////////////////////////////////////////////////////////////
// This occurs when CPackage::put_CertificateObject can't instantiate Managed Helper object, when Managed Helper fails or when Managed Helper returns a malformed array (really unexpected).

//
// MessageId: DTS_E_CANTGETCERTDATA
//
// MessageText:
//
// The raw certificate data cannot be obtained from the supplied certificate object (error: %1!s!). This occurs when CPackage::put_CertificateObject cannot instantiate the ManagedHelper object, when the ManagedHelper object fails, or when the ManagedHelper object returns a malformed array.
//
#define DTS_E_CANTGETCERTDATA            ((HRESULT)0xC0014024L)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::put_CertificateObject or CPackage::LoadFromXML when corresponding CryptoAPI function fails.

//
// MessageId: DTS_E_CANTCREATECERTCONTEXT
//
// MessageText:
//
// Failed to create certificate context (error: %1!s!). This occurs in CPackage::put_CertificateObject or CPackage::LoadFromXML when the corresponding CryptoAPI function fails.
//
#define DTS_E_CANTCREATECERTCONTEXT      ((HRESULT)0xC0014025L)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::LoadUserCertificateByName and CPackage::LoadUserCertificateByHash.

//
// MessageId: DTS_E_CANTOPENCERTSTORE
//
// MessageText:
//
// Opening MY certificate store failed with error "%1!s!".This occurs in CPackage::LoadUserCertificateByName and CPackage::LoadUserCertificateByHash.
//
#define DTS_E_CANTOPENCERTSTORE          ((HRESULT)0xC0014026L)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::LoadUserCertificateByName.

//
// MessageId: DTS_E_CANTFINDCERTBYNAME
//
// MessageText:
//
// The certificate specified by name in MY store cannot be found (error: %1!s!). This occurs in CPackage::LoadUserCertificateByName.
//
#define DTS_E_CANTFINDCERTBYNAME         ((HRESULT)0xC0014027L)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::LoadUserCertificateByHash.

//
// MessageId: DTS_E_CANTFINDCERTBYHASH
//
// MessageText:
//
// Unable to find the specified certificate by hash in "MY" store (error: %1!s!). Occurs in CPackage::LoadUserCertificateByHash.
//
#define DTS_E_CANTFINDCERTBYHASH         ((HRESULT)0xC0014028L)

//
// MessageId: DTS_E_INVALIDCERTHASHFORMAT
//
// MessageText:
//
// The hash value is not a one-dimensional array of bytes (error: %1!s!). This occurs in CPackage::LoadUserCertificateByHash.
//
#define DTS_E_INVALIDCERTHASHFORMAT      ((HRESULT)0xC0014029L)

////////////////////////////////////////////////////////////////////////////
// Could occur wherever GetDataFromSafeArray is called.

//
// MessageId: DTS_E_CANTACCESSARRAYDATA
//
// MessageText:
//
// The data in the array cannot be accessed (error: %1!s!). This error can occur wherever GetDataFromSafeArray is called.
//
#define DTS_E_CANTACCESSARRAYDATA        ((HRESULT)0xC001402AL)

////////////////////////////////////////////////////////////////////////////
// Occurs whenever CoCreateInstance CLSID_DTSManagedHelper fails.

//
// MessageId: DTS_E_CREATEMANAGEDHELPERFAILED
//
// MessageText:
//
// The SSIS managed helper object failed during creation with error 0x%1!8.8X! "%2!s!". This occurs whenever CoCreateInstance CLSID_DTSManagedHelper fails.
//
#define DTS_E_CREATEMANAGEDHELPERFAILED  ((HRESULT)0xC001402BL)

//
// MessageId: DTS_E_OLEDBTRANSACTIONENLIST
//
// MessageText:
//
// The SSIS Runtime has failed to enlist the OLE DB connection in a distributed transaction with error 0x%1!8.8X! "%2!s!".
//
#define DTS_E_OLEDBTRANSACTIONENLIST     ((HRESULT)0xC001402CL)

////////////////////////////////////////////////////////////////////////////
// Occurs when managed helper's SignDocument fails.

//
// MessageId: DTS_E_SIGNPACKAGEFAILED
//
// MessageText:
//
// Package signing failed with error 0x%1!8.8X! "%2!s!". This occurs when the ManagedHelper.SignDocument method fails.
//
#define DTS_E_SIGNPACKAGEFAILED          ((HRESULT)0xC001402DL)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::LoadFromXML

//
// MessageId: DTS_E_CHECKENVELOPEFAILED
//
// MessageText:
//
// Failed to check for XML signature envelope in package XML with error 0x%1!8.8X! "%2!s!". This occurs in CPackage::LoadFromXML.
//
#define DTS_E_CHECKENVELOPEFAILED        ((HRESULT)0xC001402EL)

////////////////////////////////////////////////////////////////////////////
// Occurs when IXMLDOMDocument::get_xml fails

//
// MessageId: DTS_E_GETXMLSOURCEFAILED
//
// MessageText:
//
// Failed to obtain XML source from XML DOM object with error 0x%1!8.8X! "%2!s!". This occurs when IXMLDOMDocument::get_xml fails.
//
#define DTS_E_GETXMLSOURCEFAILED         ((HRESULT)0xC001402FL)

////////////////////////////////////////////////////////////////////////////
// Occurs when signature verification operation fails.

//
// MessageId: DTS_E_PACKAGEVERIFICATIONFAILED
//
// MessageText:
//
// The cryptographic signature of the package failed verification due to error 0x%1!8.8X! "%2!s!". This occurs when the signature verification operation fails.
//
#define DTS_E_PACKAGEVERIFICATIONFAILED  ((HRESULT)0xC0014030L)

////////////////////////////////////////////////////////////////////////////
// This usually occurs when trying to sign a document using a certificate for which the person does not have the private key.

//
// MessageId: DTS_E_GETKEYFROMCERTFAILED
//
// MessageText:
//
// Failed to obtain cryptographic key pair associated with the specified certificate with error 0x%1!8.8X! "%2!s!". Verify that you have the key pair for which the certificate was issued. This error usually occurs when trying to sign a document using a certificate for which the person does not have the private key.
//
#define DTS_E_GETKEYFROMCERTFAILED       ((HRESULT)0xC0014031L)

//
// MessageId: DTS_E_INVALIDSIGNATURE
//
// MessageText:
//
// The digital signature is not valid. The contents of the package have been modified.
//
#define DTS_E_INVALIDSIGNATURE           ((HRESULT)0xC0014032L)

//
// MessageId: DTS_E_UNTRUSTEDSIGNATURE
//
// MessageText:
//
// The digital signature is valid; however the signer is not trusted and, therefore, authenticity cannot be guaranteed.
//
#define DTS_E_UNTRUSTEDSIGNATURE         ((HRESULT)0xC0014033L)

//
// MessageId: DTS_E_TRANSACTIONENLISTNOTSUPPORTED
//
// MessageText:
//
// The connection does not support enlisting in distributed transaction.
//
#define DTS_E_TRANSACTIONENLISTNOTSUPPORTED ((HRESULT)0xC0014034L)

////////////////////////////////////////////////////////////////////////////
// Occurs when saving to Xml

//
// MessageId: DTS_E_PACKAGEPROTECT
//
// MessageText:
//
// Failed to apply package protection with error 0x%1!8.8X! "%2!s!". This error occurs when saving to Xml.
//
#define DTS_E_PACKAGEPROTECT             ((HRESULT)0xC0014035L)

////////////////////////////////////////////////////////////////////////////
// Occurs in CPackage::LoadFromXML

//
// MessageId: DTS_E_PACKAGEUNPROTECT
//
// MessageText:
//
// Failed to remove package protection with error 0x%1!8.8X! "%2!s!". This occurs in the CPackage::LoadFromXML method.
//
#define DTS_E_PACKAGEUNPROTECT           ((HRESULT)0xC0014036L)

//
// MessageId: DTS_E_PACKAGEPASSWORD
//
// MessageText:
//
// The package is encrypted with a password. The password was not specified, or is not correct.
//
#define DTS_E_PACKAGEPASSWORD            ((HRESULT)0xC0014037L)

////////////////////////////////////////////////////////////////////////////
// We do not allow more than one PC.

//
// MessageId: DTS_E_DUPLICATECONSTRAINT
//
// MessageText:
//
// A precedence constraint already exists between the specified executables. More than one precedence constraint is not allowed.
//
#define DTS_E_DUPLICATECONSTRAINT        ((HRESULT)0xC0014038L)

////////////////////////////////////////////////////////////////////////////
// Occurs when CPackage::LoadFromXML fails.

//
// MessageId: DTS_E_PACKAGELOADFAILED
//
// MessageText:
//
// The package failed to load due to error 0x%1!8.8X! "%2!s!". This occurs when CPackage::LoadFromXML fails.
//
#define DTS_E_PACKAGELOADFAILED          ((HRESULT)0xC0014039L)

////////////////////////////////////////////////////////////////////////////
// Occurs when signed XML doesn't contain SSIS package as expected.

//
// MessageId: DTS_E_PACKAGEOBJECTNOTENVELOPED
//
// MessageText:
//
// Failed to find package object in signed XML envelope with error 0x%1!8.8X! "%2!s!". This occurs when signed XML does not contain a SSIS package, as expected.
//
#define DTS_E_PACKAGEOBJECTNOTENVELOPED  ((HRESULT)0xC001403AL)

////////////////////////////////////////////////////////////////////////////
// Occurs when lengths of arrays are mismatched, there should be one entry per parameter in each array.

//
// MessageId: DTS_E_JAGGEDEVENTINFO
//
// MessageText:
//
// The lengths of parameter names, types, and descriptions arrays are not equal. The lengths must be equal. This occurs when the lengths of the arrays are mismatched. There should be one entry per parameter in each array.
//
#define DTS_E_JAGGEDEVENTINFO            ((HRESULT)0xC001403BL)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_GETPACKAGEINFOS
//
// MessageText:
//
// An OLE DB error 0x%1!8.8X! (%2!s!) occurred while enumerating packages. A SQL statement was issued and failed.
//
#define DTS_E_GETPACKAGEINFOS            ((HRESULT)0xC001403CL)

////////////////////////////////////////////////////////////////////////////
// This error is returned when an attempt is made to create a log provider for unknown log provider type. The typical cause is a typo in log provider type name

//
// MessageId: DTS_E_UNKNOWNLOGPROVIDERTYPE
//
// MessageText:
//
// The log provider type "%1!s!" specified for log provider "%2!s!" is not recognized as a valid log provider type. This error occurs when an attempt is made to create a log provider for unknown log provider type. Verify the spelling in the log provider type name.
//
#define DTS_E_UNKNOWNLOGPROVIDERTYPE     ((HRESULT)0xC001403DL)

//
// MessageId: DTS_E_UNKNOWNLOGPROVIDERTYPENOSUBS
//
// MessageText:
//
// The log provider type is not recognized as a valid log provider type. This error occurs when an attempt is made to create a log provider for unknown log provider type. Verify the spelling in the log provider type name.
//
#define DTS_E_UNKNOWNLOGPROVIDERTYPENOSUBS ((HRESULT)0xC001403EL)

////////////////////////////////////////////////////////////////////////////
// This error is returned when an attempt is made to create a connection manager for unknown connection type. The typical cause is a typo in connection type name

//
// MessageId: DTS_E_UNKNOWNCONNECTIONMANAGERTYPENOSUBS
//
// MessageText:
//
// The connection type specified for connection manager is not a valid connection manager type. This error occurs when an attempt is made to create a connection manager for unknown connection type. Verify the spelling of the connection type name.
//
#define DTS_E_UNKNOWNCONNECTIONMANAGERTYPENOSUBS ((HRESULT)0xC001403FL)

//
// MessageId: DTS_E_PACKAGEREMOVEFAILED
//
// MessageText:
//
// An error was encountered when trying to remove the package "%1!s!" from SQL Server.
//
#define DTS_E_PACKAGEREMOVEFAILED        ((HRESULT)0xC0014040L)

////////////////////////////////////////////////////////////////////////////
// connection manager is offline

//
// MessageId: DTS_E_ACQUIRECONNECTIONWORKINGOFFLINE
//
// MessageText:
//
// The connection manager "%1!s!" will not acquire a connection because the connection manager OfflineMode property is TRUE. When the OfflineMode is TRUE, connections cannot be acquired.
//
#define DTS_E_ACQUIRECONNECTIONWORKINGOFFLINE ((HRESULT)0xC0014041L)

//
// MessageId: DTS_E_FOLDERADDFAILED
//
// MessageText:
//
// An error was encountered when trying to create a folder on SQL Server named "%1!s!" in folder "%2!s!".
//
#define DTS_E_FOLDERADDFAILED            ((HRESULT)0xC0014042L)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_CREATEFOLDERONSQLSERVER_OLEDB
//
// MessageText:
//
// The CreateFolderOnSQLServer method has encountered OLE DB error code 0x%1!8.8X! (%2!s!) The SQL statement issued has failed.
//
#define DTS_E_CREATEFOLDERONSQLSERVER_OLEDB ((HRESULT)0xC0014043L)

//
// MessageId: DTS_E_FOLDERRENAMEFAILED
//
// MessageText:
//
// An error occurred when renaming folder " %1!s!\\%2!s!" to "%1!s!\\%3!s!" on SQL Server.
//
#define DTS_E_FOLDERRENAMEFAILED         ((HRESULT)0xC0014044L)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_RENAMEFOLDERONSQLSERVER_OLEDB
//
// MessageText:
//
// The RenameFolderOnSQLServer method encountered OLE DB error code 0x%1!8.8X! (%2!s!). The SQL statement issued has failed.
//
#define DTS_E_RENAMEFOLDERONSQLSERVER_OLEDB ((HRESULT)0xC0014045L)

//
// MessageId: DTS_E_FOLDERDELETEFAILED
//
// MessageText:
//
// Error deleting SQL Server folder "%1!s!".
//
#define DTS_E_FOLDERDELETEFAILED         ((HRESULT)0xC0014046L)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_REMOVEFOLDERFROMSQLSERVER_OLEDB
//
// MessageText:
//
// The RemoveFolderOnSQLServer method encountered OLE DB error code 0x%1!8.8X! (%2!s!). The SQL statement issued has failed.
//
#define DTS_E_REMOVEFOLDERFROMSQLSERVER_OLEDB ((HRESULT)0xC0014047L)

////////////////////////////////////////////////////////////////////////////
// This happens when the path does not contain at least one back or forward slash.

//
// MessageId: DTS_E_INVALIDPATHTOPACKAGE
//
// MessageText:
//
// The specified package path does not contain a package name. This occurs when the path does not contain at least one backslash or one forward slash.
//
#define DTS_E_INVALIDPATHTOPACKAGE       ((HRESULT)0xC0014048L)

//
// MessageId: DTS_E_FOLDERNOTFOUND
//
// MessageText:
//
// Cannot find folder "%1!s!".
//
#define DTS_E_FOLDERNOTFOUND             ((HRESULT)0xC0014049L)

////////////////////////////////////////////////////////////////////////////
// We issued a SQL statement and it has failed.

//
// MessageId: DTS_E_FINDFOLDERONSQLSERVER_OLEDB
//
// MessageText:
//
// While trying to find a folder on SQL an OLE DB error was encountered with error code 0x%1!8.8X! (%2!s!).
//
#define DTS_E_FINDFOLDERONSQLSERVER_OLEDB ((HRESULT)0xC001404AL)

//
// MessageId: DTS_E_OPENLOGFAILED
//
// MessageText:
//
// The SSIS logging provider has failed to open the log. Error code: 0x%1!8.8X!.
//
#define DTS_E_OPENLOGFAILED              ((HRESULT)0xC001404BL)

////////////////////////////////////////////////////////////////////////////
// IDTSApplication100::get_ConnectionInfos failed

//
// MessageId: DTS_E_GETCONNECTIONINFOS
//
// MessageText:
//
// Failed to get ConnectionInfos collection with error 0x%1!8.8X! "%2!s!". This error occurs when the call to IDTSApplication100::get_ConnectionInfos fails.
//
#define DTS_E_GETCONNECTIONINFOS         ((HRESULT)0xC001404CL)

////////////////////////////////////////////////////////////////////////////
// We couldn't acquire all the locks after 16 attempts; they all timed out

//
// MessageId: DTS_E_VARIABLEDEADLOCK
//
// MessageText:
//
// Deadlock detected while trying to lock variables. The locks cannot be acquired after 16 attempts. The locks timed out.
//
#define DTS_E_VARIABLEDEADLOCK           ((HRESULT)0xC001404DL)

////////////////////////////////////////////////////////////////////////////
// An operation was attempted that is only allowed on dispensed collections.

//
// MessageId: DTS_E_NOTDISPENSED
//
// MessageText:
//
// The Variables collection has not been returned from the VariableDispenser. An operation was attempted that is only allowed on dispensed collections.
//
#define DTS_E_NOTDISPENSED               ((HRESULT)0xC001404EL)

////////////////////////////////////////////////////////////////////////////
// Unlock can be called at most once on a dispensed Variables collection.

//
// MessageId: DTS_E_VARIABLESALREADYUNLOCKED
//
// MessageText:
//
// This Variables collection has already been unlocked. The Unlock method is called only once on a dispensed Variables collection.
//
#define DTS_E_VARIABLESALREADYUNLOCKED   ((HRESULT)0xC001404FL)

////////////////////////////////////////////////////////////////////////////
// We failed to unlock some variables; dunno why, very unexpected

//
// MessageId: DTS_E_VARIABLEUNLOCKFAILED
//
// MessageText:
//
// One or more variables failed to unlock.
//
#define DTS_E_VARIABLEUNLOCKFAILED       ((HRESULT)0xC0014050L)

////////////////////////////////////////////////////////////////////////////
// Items cannot be added to or removed from dispensed collections.

//
// MessageId: DTS_E_DISPENSEDREADONLY
//
// MessageText:
//
// The Variables collection was returned the from VariableDispenser and cannot be modified. Items cannot be added to or removed from dispensed collections.
//
#define DTS_E_DISPENSEDREADONLY          ((HRESULT)0xC0014051L)

////////////////////////////////////////////////////////////////////////////
// A variable may only be added once to either read lock list or write lock list.

//
// MessageId: DTS_E_VARIABLEALREADYONREADLIST
//
// MessageText:
//
// The variable "%1!s!" is already on the read list. A variable may only be added once to either the read lock list or the write lock list.
//
#define DTS_E_VARIABLEALREADYONREADLIST  ((HRESULT)0xC0014052L)

//
// MessageId: DTS_E_VARIABLEALREADYONWRITELIST
//
// MessageText:
//
// The variable "%1!s!" is already on the write list. A variable may only be added once to either the read lock list or the write lock list.
//
#define DTS_E_VARIABLEALREADYONWRITELIST ((HRESULT)0xC0014053L)

//
// MessageId: DTS_E_LOCKVARIABLEFORREAD
//
// MessageText:
//
// Failed to lock variable "%1!s!" for read access with error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_LOCKVARIABLEFORREAD        ((HRESULT)0xC0014054L)

//
// MessageId: DTS_E_LOCKVARIABLEFORWRITE
//
// MessageText:
//
// Failed to lock variable "%1!s!" for read/write access with error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_LOCKVARIABLEFORWRITE       ((HRESULT)0xC0014055L)

////////////////////////////////////////////////////////////////////////////
// A task is trying to declare custom event which another task has already declared with a different parameter list.

//
// MessageId: DTS_E_CUSTOMEVENTCONFLICT
//
// MessageText:
//
// The custom event "%1!s!" is already declared with a different parameter list. A task is trying to declare a custom event, which another task has already declared with a different parameter list.
//
#define DTS_E_CUSTOMEVENTCONFLICT        ((HRESULT)0xC0014056L)

////////////////////////////////////////////////////////////////////////////
// The custom event was declared with AllowEventHandlers = False.

//
// MessageId: DTS_E_EVENTHANDLERNOTALLOWED
//
// MessageText:
//
// The task providing the custom event "%1!s!" does not allow this event to be handled in the package. The custom event was declared with AllowEventHandlers = FALSE.
//
#define DTS_E_EVENTHANDLERNOTALLOWED     ((HRESULT)0xC0014057L)

////////////////////////////////////////////////////////////////////////////
// SetUnsafeVariables called more than once.

//
// MessageId: DTS_E_UNSAFEVARIABLESALREADYSET
//
// MessageText:
//
// The VariableDispenser received an unsafe Variables collection. This operation cannot be repeated.
//
#define DTS_E_UNSAFEVARIABLESALREADYSET  ((HRESULT)0xC0014059L)

////////////////////////////////////////////////////////////////////////////
// Call ForEachEnumeratorHost SetParentPackagePath before calling GetPackagePath.

//
// MessageId: DTS_E_INVALIDPARENTPACKAGEPATH
//
// MessageText:
//
// GetPackagePath was called on the ForEachEnumerator but there was no ForEachLoop package path specified.
//
#define DTS_E_INVALIDPARENTPACKAGEPATH   ((HRESULT)0xC001405AL)

////////////////////////////////////////////////////////////////////////////
// We couldn't acquire all the locks after 16 attempts; they all timed out

//
// MessageId: DTS_E_VARIABLEDEADLOCK_READ
//
// MessageText:
//
// A deadlock was detected while trying to lock variable "%1!s!" for read access. A lock could not be acquired after 16 attempts and timed out.
//
#define DTS_E_VARIABLEDEADLOCK_READ      ((HRESULT)0xC001405BL)

//
// MessageId: DTS_E_VARIABLEDEADLOCK_READWRITE
//
// MessageText:
//
// A deadlock was detected while trying to lock variables "%1!s!" for read/write access. A lock cannot be acquired after 16 attempts. The locks timed out.
//
#define DTS_E_VARIABLEDEADLOCK_READWRITE ((HRESULT)0xC001405CL)

//
// MessageId: DTS_E_VARIABLEDEADLOCK_BOTH
//
// MessageText:
//
// A deadlock was detected while trying to lock variables "%1!s!" for read access and variables "%2!s!" for read/write access. A lock cannot be acquired after 16 attempts. The locks timed out.
//
#define DTS_E_VARIABLEDEADLOCK_BOTH      ((HRESULT)0xC001405DL)

//
// MessageId: DTS_E_PACKAGEPASSWORDEMPTY
//
// MessageText:
//
// The protection level of the package requires a password, but PackagePassword property is empty.
//
#define DTS_E_PACKAGEPASSWORDEMPTY       ((HRESULT)0xC001405EL)

//
// MessageId: DTS_E_DECRYPTXML_PASSWORD
//
// MessageText:
//
// Failed to decrypt an encrypted XML node because the password was not specified or not correct. Package load will attempt to continue without the encrypted information.
//
#define DTS_E_DECRYPTXML_PASSWORD        ((HRESULT)0xC001405FL)

//
// MessageId: DTS_E_DECRYPTPACKAGE_USERKEY
//
// MessageText:
//
// Failed to decrypt a package that is encrypted with a user key. You may not be the user who encrypted this package, or you are not using the same machine that was used to save the package.
//
#define DTS_E_DECRYPTPACKAGE_USERKEY     ((HRESULT)0xC0014060L)

//
// MessageId: DTS_E_SERVERSTORAGEDISALLOWED
//
// MessageText:
//
// The protection level, ServerStorage, cannot be used when saving to this destination. The system could not verify that the destination supports secure storage capability.
//
#define DTS_E_SERVERSTORAGEDISALLOWED    ((HRESULT)0xC0014061L)

////////////////////////////////////////////////////////////////////////////
// There was a problem loading the package from SQL Server. Previously posted errors should have detailed information.

//
// MessageId: DTS_E_LOADFROMSQLSERVER
//
// MessageText:
//
// LoadFromSQLServer method has failed.
//
#define DTS_E_LOADFROMSQLSERVER          ((HRESULT)0xC0014062L)

////////////////////////////////////////////////////////////////////////////
// The way the package is signed does not meet the current signature policy

//
// MessageId: DTS_E_SIGNATUREPOLICYVIOLATION
//
// MessageText:
//
// The package cannot be loaded because the state of the digital signature violates signature policy. Error 0x%1!8.8X! "%2!s!"
//
#define DTS_E_SIGNATUREPOLICYVIOLATION   ((HRESULT)0xC0014063L)

////////////////////////////////////////////////////////////////////////////
// The package is not signed

//
// MessageId: DTS_E_SIGNATURENOTPRESENT
//
// MessageText:
//
// The package is not signed.
//
#define DTS_E_SIGNATURENOTPRESENT        ((HRESULT)0xC0014064L)

//
// MessageId: DTS_E_SQLPROFILERDLL_ONLY_X86
//
// MessageText:
//
// The log provider for SQL Server Profiler was unable to load pfclnt.dll because it is only supported on 32-bit systems.
//
#define DTS_E_SQLPROFILERDLL_ONLY_X86    ((HRESULT)0xC0014065L)

////////////////////////////////////////////////////////////////////////////
// Use a different name to resolve

//
// MessageId: DTS_E_NAMEALREADYADDED
//
// MessageText:
//
// The object cannot be added because another object with the same name already exists in the collection. Use a different name to resolve this error.
//
#define DTS_E_NAMEALREADYADDED           ((HRESULT)0xC0014100L)

//
// MessageId: DTS_E_NAMEALREADYEXISTS
//
// MessageText:
//
// The object name cannot be changed from "%1!s!" to "%2!s!" because another object in the collection already uses that name. Use a different name to resolve this error.
//
#define DTS_E_NAMEALREADYEXISTS          ((HRESULT)0xC0014101L)

////////////////////////////////////////////////////////////////////////////
// This happens anytime there was an error enumerating dependencies, look at the other messages that proceed this one for more information

//
// MessageId: DTS_E_FAILEDDEPENDENCIES
//
// MessageText:
//
// There was an error enumerating the package dependencies. Check other messages for more information.
//
#define DTS_E_FAILEDDEPENDENCIES         ((HRESULT)0xC0014103L)

//
// MessageId: DTS_E_INVALIDCHECKPOINT_TRANSACTION
//
// MessageText:
//
// The current package settings are not supported.  Please change the SaveCheckpoints property or the TransactionOption property.
//
#define DTS_E_INVALIDCHECKPOINT_TRANSACTION ((HRESULT)0xC0014104L)

//
// MessageId: DTS_E_CONNECTIONMANAGERJOINTRANSACTION
//
// MessageText:
//
// The connection manager failed to defect from the transaction.
//
#define DTS_E_CONNECTIONMANAGERJOINTRANSACTION ((HRESULT)0xC001410EL)

////////////////////////////////////////////////////////////////////////////
// Happens when a task calls CreateBreakpoint with the same ID multiple times.  It is possible to create a breakpoint with the same ID multiple times if the task calls RemoveBreakpoint on the first creation before creating the second one.

//
// MessageId: DTS_E_BPDUPLICATE
//
// MessageText:
//
// The specified breakpoint ID already exists. This error occurs when a task calls CreateBreakpoint with the same ID multiple times. It is possible to create a breakpoint with the same ID multiple times if the task calls RemoveBreakpoint on the first creation before creating the second one.
//
#define DTS_E_BPDUPLICATE                ((HRESULT)0xC0015001L)

////////////////////////////////////////////////////////////////////////////
// Happens when a task references a breakpoint that does not exist.

//
// MessageId: DTS_E_BPUNKNOWNID
//
// MessageText:
//
// The specified breakpoint ID does not exist. This error occurs when a task references a breakpoint that does not exist.
//
#define DTS_E_BPUNKNOWNID                ((HRESULT)0xC0015002L)

////////////////////////////////////////////////////////////////////////////
// No privileges, or file is readonly.

//
// MessageId: DTS_E_CANTWRITETOFILE
//
// MessageText:
//
// The file, "%1!s!", could not be opened for writing. The file could be read-only, or you do not have the correct permissions.
//
#define DTS_E_CANTWRITETOFILE            ((HRESULT)0xC0015004L)

////////////////////////////////////////////////////////////////////////////
// The result is not correctly specified.

//
// MessageId: DTS_E_NOROWSETRETURNED
//
// MessageText:
//
// No result rowset is associated with the execution of this query. The result is not correctly specified.
//
#define DTS_E_NOROWSETRETURNED           ((HRESULT)0xC0015005L)

//
// MessageId: DTS_E_DUMP_FAILED
//
// MessageText:
//
// Debug dump files were not generated correctly. The hresult is 0x%1!8.8X!.
//
#define DTS_E_DUMP_FAILED                ((HRESULT)0xC0015105L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the server or proxy URL is either null or of invalid format. Valid URL format - http://ServerName:Port/ResourcePath or https://ServerName:Port/ResourcePath

//
// MessageId: DTS_E_INVALIDURL
//
// MessageText:
//
// The URL specified is not valid. This can happen when the server or proxy URL is null, or in an incorrect format. A valid URL format is in the form of http://ServerName:Port/ResourcePath or https://ServerName:Port/ResourcePath.
//
#define DTS_E_INVALIDURL                 ((HRESULT)0xC0016001L)

////////////////////////////////////////////////////////////////////////////
// This could happen when a scheme other than http or https was specified or the URL is of invalid format. Valid URL format - http://ServerName:Port/ResourcePath or https://ServerName:Port/ResourcePath.

//
// MessageId: DTS_E_INVALIDSCHEME
//
// MessageText:
//
// The URL %1!s! is not valid. This can happen when a scheme other than http or https is specified, or the URL is in an incorrect format. A valid URL format is in the form of http://ServerName:Port/ResourcePath or https://ServerName:Port/ResourcePath.
//
#define DTS_E_INVALIDSCHEME              ((HRESULT)0xC0016002L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the server doesn't exist or the proxy settings are incorrect.

//
// MessageId: DTS_E_WINHTTPCANNOTCONNECT
//
// MessageText:
//
// Connection to server %1!s! cannot be established. This error can occur when the server does not exist, or the proxy settings are incorrect.
//
#define DTS_E_WINHTTPCANNOTCONNECT       ((HRESULT)0xC0016003L)

//
// MessageId: DTS_E_CONNECTIONTERMINATED
//
// MessageText:
//
// The connection with the server has been reset or terminated. Try again later.
//
#define DTS_E_CONNECTIONTERMINATED       ((HRESULT)0xC0016004L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the login credentials provided are incorrect.

//
// MessageId: DTS_E_LOGINFAILURE
//
// MessageText:
//
// The login attempt failed for "%1!s!". This error occurs when the login credentials provided are incorrect. Verify the login credentials.
//
#define DTS_E_LOGINFAILURE               ((HRESULT)0xC0016005L)

//
// MessageId: DTS_E_INVALIDSERVERNAME
//
// MessageText:
//
// The server name specified in the URL %1!s! cannot be resolved.
//
#define DTS_E_INVALIDSERVERNAME          ((HRESULT)0xC0016006L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the user has not provided login credentials or the credentials are wrong.

//
// MessageId: DTS_E_PROXYAUTH
//
// MessageText:
//
// Proxy authentication failed. This error occurs when login credentials are not provided, or the credentials are incorrect.
//
#define DTS_E_PROXYAUTH                  ((HRESULT)0xC0016007L)

//
// MessageId: DTS_E_SECUREFAILURE
//
// MessageText:
//
// SSL certificate response obtained from the server was not valid. Cannot process the request.
//
#define DTS_E_SECUREFAILURE              ((HRESULT)0xC0016008L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the timeout specified was too less or a connection to the server/proxy could not be established. Make sure that the server and proxy url's are proper.

//
// MessageId: DTS_E_TIMEOUT
//
// MessageText:
//
// The request has timed out. This error can occur when the timeout specified was too short, or a connection to the server or proxy cannot be established. Ensure that the server and proxy URL are correct.
//
#define DTS_E_TIMEOUT                    ((HRESULT)0xC0016009L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the server is expecting a SSL client certificate and user has either provided an invalid certificate or has not provided a certificate. Please configure a client certificate for this connection and retry.

//
// MessageId: DTS_E_CLIENTAUTH
//
// MessageText:
//
// Client certificate is missing. This error occurs when the server is expecting an SSL client certificate and the user has provided an invalid certificate, or has not provided a certificate. A client certificate must be configured for this connection.
//
#define DTS_E_CLIENTAUTH                 ((HRESULT)0xC001600AL)

//
// MessageId: DTS_E_REDIRECTFAILURE
//
// MessageText:
//
// The specified server, URL %1!s!, has a redirect and the redirect request failed.
//
#define DTS_E_REDIRECTFAILURE            ((HRESULT)0xC001600BL)

////////////////////////////////////////////////////////////////////////////
// This could happen when the user has not provided login credentials or the credentials are wrong.

//
// MessageId: DTS_E_SERVERAUTH
//
// MessageText:
//
// Server authentication failed. This error occurs when login credentials are not provided, or the credentials are incorrect.
//
#define DTS_E_SERVERAUTH                 ((HRESULT)0xC001600CL)

//
// MessageId: DTS_E_WINHTTPUNKNOWNERROR
//
// MessageText:
//
// Request cannot be processed. Try again later.
//
#define DTS_E_WINHTTPUNKNOWNERROR        ((HRESULT)0xC001600DL)

////////////////////////////////////////////////////////////////////////////
// This could happen when the server is experiencing some problems.

//
// MessageId: DTS_E_UNKNOWNSTATUSCODE
//
// MessageText:
//
// Server returned status code - %1!u! : %2!s!. This error occurs when the server is experiencing problems.
//
#define DTS_E_UNKNOWNSTATUSCODE          ((HRESULT)0xC001600EL)

//
// MessageId: DTS_E_WINHTTPNOTSUPPORTED
//
// MessageText:
//
// This platform is not supported by WinHttp services.
//
#define DTS_E_WINHTTPNOTSUPPORTED        ((HRESULT)0xC001600FL)

////////////////////////////////////////////////////////////////////////////
// Timeout should be in the range %1!d! to %2!d! (in seconds).

//
// MessageId: DTS_E_INVALIDTIMEOUT
//
// MessageText:
//
// Timeout value is not valid. Timeout should be in the range of %1!d! to %2!d! (in seconds).
//
#define DTS_E_INVALIDTIMEOUT             ((HRESULT)0xC0016010L)

////////////////////////////////////////////////////////////////////////////
// Chunksize should be in the range %1!d! to %2!d! (in kb).

//
// MessageId: DTS_E_INVALIDCHUNKSIZE
//
// MessageText:
//
// The chunk size is not valid. The ChunkSize property should be in the range of %1!d! to %2!d! (in KB).
//
#define DTS_E_INVALIDCHUNKSIZE           ((HRESULT)0xC0016011L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the client certificate provided was not found in the Personal certificate store. Please try again with a valid client certificate.

//
// MessageId: DTS_E_CERTERROR
//
// MessageText:
//
// Error processing client certificate. This error can occur when the client certificate provided was not found in the Personal Certificate Store. Verify that the client certificate is valid.
//
#define DTS_E_CERTERROR                  ((HRESULT)0xC0016012L)

////////////////////////////////////////////////////////////////////////////
// This could happen when - 1. The specified resource needs "https" access. 2. The certificate validity period has expired. 3. Certificate has been revoked or revocation could not be checked. 4. Certificate is not valid for requested usage.].

//
// MessageId: DTS_E_FORBIDDEN
//
// MessageText:
//
// Server returned error code "403 - Forbidden". This error can occur when the specified resource needs "https" access, but the certificate validity period has expired, the certificate is not valid for the use requested, or the certificate has been revoked or revocation can not be checked.
//
#define DTS_E_FORBIDDEN                  ((HRESULT)0xC0016013L)

////////////////////////////////////////////////////////////////////////////
// This could happen when an invalid proxy was specified. HTTP Connection Manager only supports CERN type proxies.

//
// MessageId: DTS_E_WINHTTPOPEN
//
// MessageText:
//
// Error initializing HTTP session with proxy "%1!s!". This error can occur when an invalid proxy was specified. HTTP connection manager only supports CERN-type proxies.
//
#define DTS_E_WINHTTPOPEN                ((HRESULT)0xC0016014L)

//
// MessageId: DTS_E_OPENCERTSTORE
//
// MessageText:
//
// Error opening certificate store.
//
#define DTS_E_OPENCERTSTORE              ((HRESULT)0xC0016015L)

////////////////////////////////////////////////////////////////////////////
// Occurs when there is a cryptographic error, most often when the right key is not available

//
// MessageId: DTS_E_UNPROTECTXMLFAILED
//
// MessageText:
//
// Failed to decrypt protected XML node "%1!s!" with error 0x%2!8.8X! "%3!s!". You may not be authorized to access this information. This error occurs when there is a cryptographic error. Verify that the correct key is available.
//
#define DTS_E_UNPROTECTXMLFAILED         ((HRESULT)0xC0016016L)

//
// MessageId: DTS_E_UNPROTECTCONNECTIONSTRINGFAILED
//
// MessageText:
//
// Failed to decrypt protected connection string for server "%1!s!" with error 0x%2!8.8X! "%3!s!". You may not be authorized to access this information. This error occurs when there is a cryptographic error. Verify that the correct key is available.
//
#define DTS_E_UNPROTECTCONNECTIONSTRINGFAILED ((HRESULT)0xC0016017L)

////////////////////////////////////////////////////////////////////////////
// Occurs when VersionMajor, VersionMinor or VersionBuild properties of the package are set to negative value

//
// MessageId: DTS_E_NEGATIVEVERSION
//
// MessageText:
//
// The version number cannot be negative. This error occurs when the VersionMajor, VersionMinor, or VersionBuild property of the package is set to a negative value.
//
#define DTS_E_NEGATIVEVERSION            ((HRESULT)0xC0016018L)

////////////////////////////////////////////////////////////////////////////
// Internal error code, shouldn't be ever returned to user.

//
// MessageId: DTS_E_PACKAGEMIGRATED
//
// MessageText:
//
// The package has been migrated to a later version during loading. It must be reloaded to complete the process. This is an internal error code.
//
#define DTS_E_PACKAGEMIGRATED            ((HRESULT)0xC0016019L)

//
// MessageId: DTS_E_PACKAGEMIGRATIONFAILED
//
// MessageText:
//
// Package migration from version %1!d! to version %2!d! failed with error 0x%3!8.8X! "%4!s!".
//
#define DTS_E_PACKAGEMIGRATIONFAILED     ((HRESULT)0xC0016020L)

//
// MessageId: DTS_E_PACKAGEMIGRATIONMODULELOAD
//
// MessageText:
//
// Package migration module has failed to load.
//
#define DTS_E_PACKAGEMIGRATIONMODULELOAD ((HRESULT)0xC0016021L)

//
// MessageId: DTS_E_PACKAGEMIGRATIONMODULE
//
// MessageText:
//
// Package migration module has failed.
//
#define DTS_E_PACKAGEMIGRATIONMODULE     ((HRESULT)0xC0016022L)

////////////////////////////////////////////////////////////////////////////
// This happens when default persistence is unable to determine which objects are on the hosted object

//
// MessageId: DTS_E_CANTDETERMINEWHICHPROPTOPERSIST
//
// MessageText:
//
// Unable to persist object using default persistence. This error occurs when the default persistence is unable to determine which objects are on the hosted object.
//
#define DTS_E_CANTDETERMINEWHICHPROPTOPERSIST ((HRESULT)0xC0016023L)

////////////////////////////////////////////////////////////////////////////
// This happens when there is an attempt to add or remove an object from a collection while the package is executing.

//
// MessageId: DTS_E_CANTADDREMOVEWHENEXECUTING
//
// MessageText:
//
// Cannot add or remove an element from a package in runtime mode. This error occurs when an attempt is made to add or remove an object from a collection while the package is executing.
//
#define DTS_E_CANTADDREMOVEWHENEXECUTING ((HRESULT)0xC0016024L)

////////////////////////////////////////////////////////////////////////////
// This happens if the default saved xml of an extensible object was changed in such a way that a saved object is no longer found. Or if the extensible object itself changed.

//
// MessageId: DTS_E_NODENOTFOUND
//
// MessageText:
//
// The "%1!s!" node cannot be found in custom default persistence. This error occurs if the default saved XML of an extensible object was changed in a way that a saved object is no longer found, or if the extensible object itself changed.
//
#define DTS_E_NODENOTFOUND               ((HRESULT)0xC0016025L)

////////////////////////////////////////////////////////////////////////////
// Happens when certain collections are modified while the package is validating or executing. These collections should only be modified during package design time to avoid possible race conditions.

//
// MessageId: DTS_E_COLLECTIONLOCKED
//
// MessageText:
//
// This collection cannot be modified during package validation or execution.
//
#define DTS_E_COLLECTIONLOCKED           ((HRESULT)0xC0016026L)

////////////////////////////////////////////////////////////////////////////
// Happens when users try to modify a collection at execution time.

//
// MessageId: DTS_E_COLLOCKED
//
// MessageText:
//
// The "%1!s!" collection cannot be modified during package validation or execution. "%2!s!" cannot be added to the collection.
//
#define DTS_E_COLLOCKED                  ((HRESULT)0xC0016027L)

//
// MessageId: DTS_E_FTPNOTCONNECTED
//
// MessageText:
//
// Connection with the FTP server has not been established.
//
#define DTS_E_FTPNOTCONNECTED            ((HRESULT)0xC0016029L)

//
// MessageId: DTS_E_FTPERROR
//
// MessageText:
//
// An error occurred in the requested FTP operation. Detailed error description: %1!s!
//
#define DTS_E_FTPERROR                   ((HRESULT)0xC001602AL)

//
// MessageId: DTS_E_FTPINVALIDRETRIES
//
// MessageText:
//
// The number of retries is not valid. The number of retries should be between %1!d! and %2!d!.
//
#define DTS_E_FTPINVALIDRETRIES          ((HRESULT)0xC001602BL)

////////////////////////////////////////////////////////////////////////////
// FTP Connection Manager needs the named DLL for it's functioning

//
// MessageId: DTS_E_LOADWININET
//
// MessageText:
//
// The FTP connection manager needs the following DLL to function: %1!s!.
//
#define DTS_E_LOADWININET                ((HRESULT)0xC001602CL)

////////////////////////////////////////////////////////////////////////////
// ConnectionString is of the format ServerName:Port. Port should be an integer value between %1!d! and %2!d!.

//
// MessageId: DTS_E_FTPINVALIDCONNECTIONSTRING
//
// MessageText:
//
// The port specified in the connection string is not valid. The ConnectionString format is ServerName:Port. Port should be an integer value between %1!d! and %2!d!.
//
#define DTS_E_FTPINVALIDCONNECTIONSTRING ((HRESULT)0xC001602DL)

////////////////////////////////////////////////////////////////////////////
// This could happen when the specified path is invalid or the folder already exists or you do not have sufficient permissions.

//
// MessageId: DTS_E_FTPCREATEFOLDER
//
// MessageText:
//
// Creating folder "%1!s!" ... %2!s!.
//
#define DTS_E_FTPCREATEFOLDER            ((HRESULT)0xC001602EL)

////////////////////////////////////////////////////////////////////////////
// This could happend when the specified path is invalid or the folder does not exist or you do not have sufficient permissions.

//
// MessageId: DTS_E_FTPDELETEFOLDER
//
// MessageText:
//
// Deleting folder "%1!s!" ... %2!s!.
//
#define DTS_E_FTPDELETEFOLDER            ((HRESULT)0xC001602FL)

////////////////////////////////////////////////////////////////////////////
// This could happend when the specified path is invalid or you do not have sufficient permissions.

//
// MessageId: DTS_E_FTPCHANGEFOLDER
//
// MessageText:
//
// Changing current directory to "%1!s!". %2!s!.
//
#define DTS_E_FTPCHANGEFOLDER            ((HRESULT)0xC0016030L)

////////////////////////////////////////////////////////////////////////////
// This could happen when performing a Send or Receive operation with no files specified for transfer.

//
// MessageId: DTS_E_FTPFILESEMPTY
//
// MessageText:
//
// No files to transfer. This error can occur when performing a Send or Receive operation and no files are specified for the transfer.
//
#define DTS_E_FTPFILESEMPTY              ((HRESULT)0xC0016031L)

////////////////////////////////////////////////////////////////////////////
// This could happend when the local path specified is null.

//
// MessageId: DTS_E_FTPINVALIDLOCALPATH
//
// MessageText:
//
// Specified local path is not valid. Specify a valid local path. This can occur when the specified local path is null.
//
#define DTS_E_FTPINVALIDLOCALPATH        ((HRESULT)0xC0016032L)

//
// MessageId: DTS_E_FTPNOFILESTODELETE
//
// MessageText:
//
// No files specified to delete.
//
#define DTS_E_FTPNOFILESTODELETE         ((HRESULT)0xC0016033L)

////////////////////////////////////////////////////////////////////////////
// This could happen when persisted certificate data is corrupted.

//
// MessageId: DTS_E_WINHTTPCERTDECODE
//
// MessageText:
//
// Internal error occurred while loading the certificate. This error could occur when the certificate data is invalid.
//
#define DTS_E_WINHTTPCERTDECODE          ((HRESULT)0xC0016034L)

////////////////////////////////////////////////////////////////////////////
// No other information available.

//
// MessageId: DTS_E_WINHTTPCERTENCODE
//
// MessageText:
//
// Internal error occurred while saving the certificate data.
//
#define DTS_E_WINHTTPCERTENCODE          ((HRESULT)0xC0016035L)

////////////////////////////////////////////////////////////////////////////
// Happens when users try to modify a collection at execution time.

//
// MessageId: DTS_E_COLLOCKED_NO_CREATIONNAME
//
// MessageText:
//
// The "%1!s!" collection cannot be modified during package validation or execution. 
//
#define DTS_E_COLLOCKED_NO_CREATIONNAME  ((HRESULT)0xC001603AL)

////////////////////////////////////////////////////////////////////////////
// ID of the package and ID in the checkpoint file do not match.

//
// MessageId: DTS_E_CHECKPOINTMISMATCH
//
// MessageText:
//
// Checkpoint file "%1!s!" does not match this package. The ID of the package and the ID in the checkpoint file do not match.
//
#define DTS_E_CHECKPOINTMISMATCH         ((HRESULT)0xC0016049L)

////////////////////////////////////////////////////////////////////////////
// This happens when checkpoint file exists, the package is set to NOT use checkpoint and it is set to save checkpoints. We refuse to overwrite existing file.

//
// MessageId: DTS_E_CHECKPOINTFILEALREADYEXISTS
//
// MessageText:
//
// An existing checkpoint file is found with contents that do not appear to be for this package, so the file cannot be overwritten to start saving new checkpoints. Remove the existing checkpoint file and try again. This error occurs when a checkpoint file exists, the package is set to not use a checkpoint file, but to save checkpoints. The existing checkpoint file will not be overwritten.
//
#define DTS_E_CHECKPOINTFILEALREADYEXISTS ((HRESULT)0xC001604AL)

//
// MessageId: DTS_E_CHECKPOINTFILELOCKED
//
// MessageText:
//
// The checkpoint file "%1!s!" is locked by another process. This may occur if another instance of this package is currently executing.
//
#define DTS_E_CHECKPOINTFILELOCKED       ((HRESULT)0xC001604BL)

//
// MessageId: DTS_E_OPENCHECKPOINTFILE
//
// MessageText:
//
// Checkpoint file "%1!s!" failed to open due to error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_OPENCHECKPOINTFILE         ((HRESULT)0xC001604CL)

//
// MessageId: DTS_E_CREATECHECKPOINTFILE
//
// MessageText:
//
// Checkpoint file "%1!s!" failed during creation due to error 0x%2!8.8X! "%3!s!".
//
#define DTS_E_CREATECHECKPOINTFILE       ((HRESULT)0xC001604DL)

//
// MessageId: DTS_E_FTPINVALIDPORT
//
// MessageText:
//
// The FTP Port contains an invalid value. The FTP Port value should be an integer between %1!d! and %2!d!.
//
#define DTS_E_FTPINVALIDPORT             ((HRESULT)0xC0016050L)

////////////////////////////////////////////////////////////////////////////
// Please verify the SSIS Service is installed and enabled

//
// MessageId: DTS_E_CONNECTTOSERVERFAILED
//
// MessageText:
//
// Connecting to the Integration Services service on the computer "%1!s!" failed with the following error: "%2!s!".
//
#define DTS_E_CONNECTTOSERVERFAILED      ((HRESULT)0xC00160AAL)

////////////////////////////////////////////////////////////////////////////
// There is no SSIS service for this product version installed on the machine

//
// MessageId: DTS_E_CONNECTTOSERVERFAILED_NOTREGISTERED
//
// MessageText:
//
// Connecting to the Integration Services service on the computer "%1!s!" failed with the following error: "%2!s!".%n%nThis error can occur when you try to connect to a SQL Server 2005 Integration Services service from the current version of the SQL Server tools. Instead, add folders to the service configuration file to let the local Integration Services service manage packages on the SQL Server 2005 instance.
//
#define DTS_E_CONNECTTOSERVERFAILED_NOTREGISTERED ((HRESULT)0xC00160ACL)

////////////////////////////////////////////////////////////////////////////
// The remote server could not be reached

//
// MessageId: DTS_E_CONNECTTOSERVERFAILED_UNAVAILABLE
//
// MessageText:
//
// Connecting to the Integration Services service on the computer "%1!s!" failed with the following error: "%2!s!".%n%nThis error occurs when the computer host name does not exist, or cannot be reached.
//
#define DTS_E_CONNECTTOSERVERFAILED_UNAVAILABLE ((HRESULT)0xC00160ADL)

////////////////////////////////////////////////////////////////////////////
// The DCOM security settings on the remote machine are not configured correctly

//
// MessageId: DTS_E_CONNECTTOSERVERFAILED_ACCESSDENIED
//
// MessageText:
//
// Connecting to the Integration Services service on the computer "%1!s!" failed with the following error: "%2!s!"%n%nBy default, only administrators have access to the Integration Services service. On Windows Vista and later, the process must be running with administrative privileges in order to connect to the Integration Services service. See the help topic for information on how to configure access to the service.
//
#define DTS_E_CONNECTTOSERVERFAILED_ACCESSDENIED ((HRESULT)0xC00160AEL)

//
// MessageId: DTS_E_PROPERTYEXPRESSIONSDISABLEDONVARIABLES
//
// MessageText:
//
// The Expression property is not supported on Variable objects. Use the EvaluateAsExpression property instead.
//
#define DTS_E_PROPERTYEXPRESSIONSDISABLEDONVARIABLES ((HRESULT)0xC0017002L)

////////////////////////////////////////////////////////////////////////////
// User should change the expression.

//
// MessageId: DTS_E_PROPERTYEXPRESSIONEVAL
//
// MessageText:
//
// The expression "%1!s!" on property "%2!s!" cannot be evaluated. Modify the expression to be valid.
//
#define DTS_E_PROPERTYEXPRESSIONEVAL     ((HRESULT)0xC0017003L)

////////////////////////////////////////////////////////////////////////////
// Expression evaluated, but could not be set.

//
// MessageId: DTS_E_PROPERTYEXPRESSIONSET
//
// MessageText:
//
// The result of the expression "%1!s!" on property "%2!s!" cannot be written to the property. The expression was evaluated, but cannot be set on the property.
//
#define DTS_E_PROPERTYEXPRESSIONSET      ((HRESULT)0xC0017004L)

////////////////////////////////////////////////////////////////////////////
// User should change the expression.

//
// MessageId: DTS_E_FORLOOPEVALEXPRESSIONINVALID
//
// MessageText:
//
// The evaluation expression for the loop is not valid. The expression needs to be modified. There should be additional error messages.
//
#define DTS_E_FORLOOPEVALEXPRESSIONINVALID ((HRESULT)0xC0017005L)

////////////////////////////////////////////////////////////////////////////
// The expression must evaluate to true or false, make it a boolean expression.

//
// MessageId: DTS_E_EXPRESSIONNOTBOOLEAN
//
// MessageText:
//
// The expression "%1!s!" must evaluate to True or False. Change the expression to evaluate to a Boolean value.
//
#define DTS_E_EXPRESSIONNOTBOOLEAN       ((HRESULT)0xC0017006L)

////////////////////////////////////////////////////////////////////////////
// Happens when the expression on the for loop is empty. User should add an expression.

//
// MessageId: DTS_E_FORLOOPHASNOEXPRESSION
//
// MessageText:
//
// There is no expression for the loop to evaluate. This error occurs when the expression on the For Loop is empty. Add an expression.
//
#define DTS_E_FORLOOPHASNOEXPRESSION     ((HRESULT)0xC0017007L)

////////////////////////////////////////////////////////////////////////////
// User should change the expression.

//
// MessageId: DTS_E_FORLOOPASSIGNEXPRESSIONINVALID
//
// MessageText:
//
// The assignment expression for the loop is not valid and needs to be modified. There should be additional error messages.
//
#define DTS_E_FORLOOPASSIGNEXPRESSIONINVALID ((HRESULT)0xC0017008L)

//
// MessageId: DTS_E_FORLOOPINITEXPRESSIONINVALID
//
// MessageText:
//
// The initialization expression for the loop is not valid and needs to be modified. There should be additional error messages.
//
#define DTS_E_FORLOOPINITEXPRESSIONINVALID ((HRESULT)0xC0017009L)

////////////////////////////////////////////////////////////////////////////
// SSIS version number can not be greater than current version number.

//
// MessageId: DTS_E_INVALIDVERSIONNUMBER
//
// MessageText:
//
// The version number in the package is not valid. The version number cannot be greater than current version number.
//
#define DTS_E_INVALIDVERSIONNUMBER       ((HRESULT)0xC001700AL)

////////////////////////////////////////////////////////////////////////////
// SSIS version number is negative.

//
// MessageId: DTS_E_INVALIDVERNUMCANTBENEGATIVE
//
// MessageText:
//
// The version number in the package is not valid. The version number is negative.
//
#define DTS_E_INVALIDVERNUMCANTBENEGATIVE ((HRESULT)0xC001700CL)

//
// MessageId: DTS_E_PACKAGEUPDATEDISABLED
//
// MessageText:
//
// The package has an older format version, but automatic package format upgrading is disabled.
//
#define DTS_E_PACKAGEUPDATEDISABLED      ((HRESULT)0xC001700DL)

////////////////////////////////////////////////////////////////////////////
// A string contenation or other operation caused a result value that is greater than the maximum size allowed.

//
// MessageId: DTS_E_EXPREVALTRUNCATIONASERROR
//
// MessageText:
//
// A truncation occurred during evaluation of the expression.
//
#define DTS_E_EXPREVALTRUNCATIONASERROR  ((HRESULT)0xC001700EL)

////////////////////////////////////////////////////////////////////////////
// The expression contains variable that refers sensitive parameter variable

//
// MessageId: DTS_E_EXPREVALSENSITIVEERROR
//
// MessageText:
//
// The expression will not be evaluated because it contains the variable "%1!s!" that references sensitive parameter variables in its expression. Verify that the expression is used properly and that it protects sensitive information.
//
#define DTS_E_EXPREVALSENSITIVEERROR     ((HRESULT)0xC001700FL)

////////////////////////////////////////////////////////////////////////////
// The expression contains a sensitive parameter variable

//
// MessageId: DTS_E_EXPRSENSITIVEPARAMVALUENOTALLOWED
//
// MessageText:
//
// The expression will not be evaluated because it contains sensitive parameter variable "%1!s!". Verify that the expression is used properly and that it protects the sensitive information.
//
#define DTS_E_EXPRSENSITIVEPARAMVALUENOTALLOWED ((HRESULT)0xC0017010L)

////////////////////////////////////////////////////////////////////////////
// The parameter is sensitive

//
// MessageId: DTS_E_SENSITIVEPARAMVALUENOTALLOWED
//
// MessageText:
//
// Accessing value of the parameter variable for the sensitive parameter "%1!s!" is not allowed. Verify that the variable is used properly and that it protects the sensitive information.
//
#define DTS_E_SENSITIVEPARAMVALUENOTALLOWED ((HRESULT)0xC0017011L)

////////////////////////////////////////////////////////////////////////////
// An error occurred while applying a data tap configuration.

//
// MessageId: DTS_E_DATATAP_FAILTOAPPLYCONFIGURATION
//
// MessageText:
//
// An error occurred while applying a data tap configuration on data flow task "%1!s!". The specified data flow path identification is "%2!s!" and the file name is "%3!s!". The error description is "%4!s!".
//
#define DTS_E_DATATAP_FAILTOAPPLYCONFIGURATION ((HRESULT)0xC0017206L)

////////////////////////////////////////////////////////////////////////////
// Wrapper has a property called ExecutionValueVariable.  It get's set by the package designer at design time to point to a SSIS Variable.  When a task completes execution, it set's a property called ExecutionValue that the wrapper get's.  It then tries to set the value of the SSIS Variable defined in ExecutionValueVariable to the value in this property.  This error happens when the set on the variable fails.

//
// MessageId: DTS_E_FAILEDSETEXECVALVARIABLE
//
// MessageText:
//
// The wrapper was unable to set the value of the variable specified in the ExecutionValueVariable property.
//
#define DTS_E_FAILEDSETEXECVALVARIABLE   ((HRESULT)0xC0019001L)

////////////////////////////////////////////////////////////////////////////
// Happens when the expression on a variable fails evaluation

//
// MessageId: DTS_E_VARIABLEEXPRESSIONERROR
//
// MessageText:
//
// The expression for variable "%1!s!" failed evaluation. There was an error in the expression.
//
#define DTS_E_VARIABLEEXPRESSIONERROR    ((HRESULT)0xC0019004L)

////////////////////////////////////////////////////////////////////////////
// The project contains inconsistent properties or package items such as protection level, password etc.

//
// MessageId: DTS_E_PROJECTSAVEFAILED_INCONSISTENT
//
// MessageText:
//
// The project cannot be saved because it does not pass consistency check. Use the Events object to get more detailed errors from consistency check.
//
#define DTS_E_PROJECTSAVEFAILED_INCONSISTENT ((HRESULT)0xC00190FAL)

////////////////////////////////////////////////////////////////////////////
// The package already belongs to a project.

//
// MessageId: DTS_E_PACKAGE_OWNEDBYPROJECT
//
// MessageText:
//
// The package already belongs to a project. 
//
#define DTS_E_PACKAGE_OWNEDBYPROJECT     ((HRESULT)0xC00190FBL)

////////////////////////////////////////////////////////////////////////////
// Package protection level must be the same as project.

//
// MessageId: DTS_E_PACKAGE_PROTECTIONLEVEL_INCONSISTENT
//
// MessageText:
//
// You must use the same protection level for the project and the packages within the project.
//
#define DTS_E_PACKAGE_PROTECTIONLEVEL_INCONSISTENT ((HRESULT)0xC00190FCL)

////////////////////////////////////////////////////////////////////////////
// Package password must be the same as project.

//
// MessageId: DTS_E_PACKAGE_PASSWORD_INCONSISTENT
//
// MessageText:
//
// You must use the same password for the project and the packages within the project.
//
#define DTS_E_PACKAGE_PASSWORD_INCONSISTENT ((HRESULT)0xC00190FDL)

////////////////////////////////////////////////////////////////////////////
// Try to open a project with a wrong password

//
// MessageId: DTS_E_DECRYPTPROJECT_PASSWORD
//
// MessageText:
//
// The project is encrypted with a password. The password was not specified, or is not correct.
//
#define DTS_E_DECRYPTPROJECT_PASSWORD    ((HRESULT)0xC0019100L)

////////////////////////////////////////////////////////////////////////////
// Try to open a project encrypted with a different user key

//
// MessageId: DTS_E_DECRYPTPROJECT_USERKEY
//
// MessageText:
//
// Failed to decrypt a project that is encrypted with a user key. You may not be the user who encrypted this project, or you are not using the same machine that was used to save the project.
//
#define DTS_E_DECRYPTPROJECT_USERKEY     ((HRESULT)0xC0019101L)

////////////////////////////////////////////////////////////////////////////
// Trying to perform a database action on an unsupported version of SQL Server.

//
// MessageId: DTS_E_UNSUPPORTEDSQLVERSION
//
// MessageText:
//
// The attempted operation is not supported with this database version.
//
#define DTS_E_UNSUPPORTEDSQLVERSION      ((HRESULT)0xC0019305L)

////////////////////////////////////////////////////////////////////////////
// Retain was true on Connection Manager, but AcquireConnection was called with non-NULL pTxn parameter.

//
// MessageId: DTS_E_TXNSPECINVALID
//
// MessageText:
//
// Transaction cannot be specified when a retained connection is used. This error occurs when Retain is set to TRUE on the connection manager, but AcquireConnection was called with a non-null transaction parameter.
//
#define DTS_E_TXNSPECINVALID             ((HRESULT)0xC001A003L)

////////////////////////////////////////////////////////////////////////////
// Retained connections can be used under exactly one transaction context.

//
// MessageId: DTS_E_INCOMPATIBLETRANSACTIONCONTEXT
//
// MessageText:
//
// Incompatible transaction context was specified for a retained connection. This connection has been established under a different transaction context. Retained connections can be used under exactly one transaction context.
//
#define DTS_E_INCOMPATIBLETRANSACTIONCONTEXT ((HRESULT)0xC001A004L)

////////////////////////////////////////////////////////////////////////////
// Happens when the client calls resume but the package is not suspended.

//
// MessageId: DTS_E_NOTSUSPENDED
//
// MessageText:
//
// Resume call failed because the package is not suspended. This occurs when the client calls resume, but the package is not suspended.
//
#define DTS_E_NOTSUSPENDED               ((HRESULT)0xC001B001L)

////////////////////////////////////////////////////////////////////////////
// Happens when the client calls Execute on a container that is still executing from the last Execute call.

//
// MessageId: DTS_E_ALREADYEXECUTING
//
// MessageText:
//
// Execute call failed because the executable is already executing. This error occurs when the client calls Execute on a container that is still executing from the last Execute call.
//
#define DTS_E_ALREADYEXECUTING           ((HRESULT)0xC001B002L)

////////////////////////////////////////////////////////////////////////////
// Happens when the client calls Suspend or Resume on an executable that is not currently processing an Execute call.

//
// MessageId: DTS_E_NOTEXECUTING
//
// MessageText:
//
// Suspend or Resume call failed because the executable is not executing, or is not the top-level executable. This occurs when the client calls Suspend or Resume on an executable that is not currently processing an Execute call.
//
#define DTS_E_NOTEXECUTING               ((HRESULT)0xC001B003L)

////////////////////////////////////////////////////////////////////////////
// Invalid or nonexistent file specified in the ForEachFileEnumerator.

//
// MessageId: DTS_E_INVALIDFILE
//
// MessageText:
//
// The file specified in the For Each File enumerator is not valid. Check that the file specified in the For Each File enumerator exists.
//
#define DTS_E_INVALIDFILE                ((HRESULT)0xC001C002L)

//
// MessageId: DTS_E_VALUEINDEXNOTINTEGER
//
// MessageText:
//
// The value index is not an integer . Mapping a For Each Variable number %1!d! to the variable "%2!s!".
//
#define DTS_E_VALUEINDEXNOTINTEGER       ((HRESULT)0xC001C010L)

//
// MessageId: DTS_E_VALUEINDEXNEGATIVE
//
// MessageText:
//
// The value index is negative. The ForEach Variable Mapping number %1!d! to variable "%2!s!".
//
#define DTS_E_VALUEINDEXNEGATIVE         ((HRESULT)0xC001C011L)

//
// MessageId: DTS_E_FOREACHVARIABLEMAPPING
//
// MessageText:
//
// ForEach Variable Mapping number %1!d! to variable "%2!s!" cannot be applied.
//
#define DTS_E_FOREACHVARIABLEMAPPING     ((HRESULT)0xC001C012L)

//
// MessageId: DTS_E_OBJECTNOTINFOREACHLOOP
//
// MessageText:
//
// Failure when adding an object to a ForEachPropertyMapping that is not a direct child of the ForEachLoop container.
//
#define DTS_E_OBJECTNOTINFOREACHLOOP     ((HRESULT)0xC001C013L)

////////////////////////////////////////////////////////////////////////////
// If a user attempts to remove a variable that is a required variable, this error will occur.  Required variables are variables that are created by the runtime as communication mechanisms between tasks and the runtime.  For example, EventHandlers have variables that hold the values of the parameters to the event.  They're created so that tasks within the event handler can have access to the parameters.

//
// MessageId: DTS_E_FAILEDSYSTEMVARIABLEREMOVE
//
// MessageText:
//
// Failed to remove a system variable. This error occurs when removing a variable that is a required variable.  Required variables are variables that are created by the runtime for communicating between tasks and the runtime.
//
#define DTS_E_FAILEDSYSTEMVARIABLEREMOVE ((HRESULT)0xC001F001L)

////////////////////////////////////////////////////////////////////////////
// The user cannot change system variable read only.

//
// MessageId: DTS_E_CHANGESYSTEMVARIABLEREADONLYFAILED
//
// MessageText:
//
// Changing the property of a variable failed because it is a system variable. System variables are read-only.
//
#define DTS_E_CHANGESYSTEMVARIABLEREADONLYFAILED ((HRESULT)0xC001F002L)

////////////////////////////////////////////////////////////////////////////
// The user cannot change system variable names.

//
// MessageId: DTS_E_CHANGESYSTEMVARIABLENAMEFAILED
//
// MessageText:
//
// Changing the name of a variable failed because it is a system variable. System variables are read-only.
//
#define DTS_E_CHANGESYSTEMVARIABLENAMEFAILED ((HRESULT)0xC001F003L)

////////////////////////////////////////////////////////////////////////////
// The user cannot change system variable namespaces.

//
// MessageId: DTS_E_CHANGESYSTEMVARIABLENAMESPACEFAILED
//
// MessageText:
//
// Changing the namespace of a variable failed because it is a system variable. System variables are read-only.
//
#define DTS_E_CHANGESYSTEMVARIABLENAMESPACEFAILED ((HRESULT)0xC001F004L)

////////////////////////////////////////////////////////////////////////////
// Event handler names are read only.  Attempting to change the name of an event handler results in this error

//
// MessageId: DTS_E_EVENTHANDLERNAMEREADONLY
//
// MessageText:
//
// Changing the event handler name failed. Event handler names are read-only.
//
#define DTS_E_EVENTHANDLERNAMEREADONLY   ((HRESULT)0xC001F006L)

////////////////////////////////////////////////////////////////////////////
// The default failure when calling IDTSPath100.GetPath.  System error that cannot be remedied by the user

//
// MessageId: DTS_E_PATHUNKNOWN
//
// MessageText:
//
// Cannot retrieve path to object. This is a system error.
//
#define DTS_E_PATHUNKNOWN                ((HRESULT)0xC001F008L)

////////////////////////////////////////////////////////////////////////////
// Variable types are strict, except for variables of type Object.

//
// MessageId: DTS_E_RUNTIMEVARIABLETYPECHANGE
//
// MessageText:
//
// The type of the value (%2!s!) being assigned to variable "%1!s!" differs from the current variable type (%3!s!). Variables may not change type during execution. Variable types are strict, except for variables of type Object.
//
#define DTS_E_RUNTIMEVARIABLETYPECHANGE  ((HRESULT)0xC001F009L)

////////////////////////////////////////////////////////////////////////////
// Happens when the client supplies a string for a property value that contains unprintable characters.

//
// MessageId: DTS_E_INVALIDSTRING
//
// MessageText:
//
// Invalid characters in string: "%1!s!". This occurs when a string supplied for a property value contains unprintable characters.
//
#define DTS_E_INVALIDSTRING              ((HRESULT)0xC001F010L)

////////////////////////////////////////////////////////////////////////////
// Different kinds of objects impose different rules. See ObjectNames.doc for details.

//
// MessageId: DTS_E_INVALIDOBJECTNAME
//
// MessageText:
//
// SSIS object name is invalid. More specific errors would have been raised explaining the exact naming problem.
//
#define DTS_E_INVALIDOBJECTNAME          ((HRESULT)0xC001F011L)

////////////////////////////////////////////////////////////////////////////
// The specified value type is not supported

//
// MessageId: DTS_E_INVALIDPARAMETERVALUETYPE
//
// MessageText:
//
// The specified data type for parameter value is invalid.
//
#define DTS_E_INVALIDPARAMETERVALUETYPE  ((HRESULT)0xC001F012L)

////////////////////////////////////////////////////////////////////////////
// The specified value doesn't match the data type in parameter definition

//
// MessageId: DTS_E_INVALIDPARAMETERVALUE
//
// MessageText:
//
// The parameter value could not be assigned because the data types did not match. The provided value was of type "%1!s!", the expected data type was "%2!s!".
//
#define DTS_E_INVALIDPARAMETERVALUE      ((HRESULT)0xC001F013L)

////////////////////////////////////////////////////////////////////////////
// Parameter value is not specified yet.

//
// MessageId: DTS_E_PARAMETERVALUEUNAVAILABLE
//
// MessageText:
//
// Failed to retrieve the parameter value as no value has been specified for the parameter.
//
#define DTS_E_PARAMETERVALUEUNAVAILABLE  ((HRESULT)0xC001F014L)

////////////////////////////////////////////////////////////////////////////
// The parameter doesn't exist.

//
// MessageId: DTS_E_PARAMETERNOTFOUNDINCOLL
//
// MessageText:
//
// The parameter "%1!s!" cannot be found. This error occurs when an attempt to retrieve a parameter from a parameters collection and the parameter is not there.
//
#define DTS_E_PARAMETERNOTFOUNDINCOLL    ((HRESULT)0xC001F015L)

////////////////////////////////////////////////////////////////////////////
// Parameter variable should not be modified

//
// MessageId: DTS_E_PARAMETERVARIABLE_READONLY
//
// MessageText:
//
// Changing the %1!s! of a variable failed because it is a parameter variable. Parameter variables are read-only.
//
#define DTS_E_PARAMETERVARIABLE_READONLY ((HRESULT)0xC001F016L)

////////////////////////////////////////////////////////////////////////////
// The specified value doesn't match the data type in parameter definition

//
// MessageId: DTS_E_MISMATCHPARAMETERVALUE
//
// MessageText:
//
// The value of parameter "%1!s!" could not be assigned because the data types do not match. The provided value was of type "%2!s!", the expected data type was "%3!s!".
//
#define DTS_E_MISMATCHPARAMETERVALUE     ((HRESULT)0xC001F017L)

////////////////////////////////////////////////////////////////////////////
// Happens when someone tries to change a property that is read only

//
// MessageId: DTS_E_PROPERTYREADONLY
//
// MessageText:
//
// The property "%1!s!" is read only. This occurs when a change to a read-only property is attempted.
//
#define DTS_E_PROPERTYREADONLY           ((HRESULT)0xC001F021L)

////////////////////////////////////////////////////////////////////////////
// Happens when the runtime attempts to get the type information from an object to populate the Properties collection.  The object must support type information

//
// MessageId: DTS_E_FAILEDGETTYPEINFO
//
// MessageText:
//
// The object does not support type information. This occurs when the runtime attempts to get the type information from an object to populate the Properties collection.  The object must support type information.
//
#define DTS_E_FAILEDGETTYPEINFO          ((HRESULT)0xC001F022L)

////////////////////////////////////////////////////////////////////////////
// Happens when the properties provider attempts to retrieve the value for a property on an object and fails, this can be caused by not having a correct IDispatch implementation or not supporting a property in the dispatch interface that is specified in IDL.

//
// MessageId: DTS_E_FAILEDPROPERTYGET
//
// MessageText:
//
// An error occurred while retrieving the value of property "%1!s!". The error code is 0x%2!8.8X!.
//
#define DTS_E_FAILEDPROPERTYGET          ((HRESULT)0xC001F023L)

//
// MessageId: DTS_E_FAILEDPROPERTYGET_ERRORINFO
//
// MessageText:
//
// An error occurred while retrieving the value of property "%1!s!". The error code is 0x%2!8.8X! "%3!s!".
//
#define DTS_E_FAILEDPROPERTYGET_ERRORINFO ((HRESULT)0xC001F024L)

//
// MessageId: DTS_E_FAILEDPROPERTYSET
//
// MessageText:
//
// An error occurred while setting the value of property "%1!s!". The error returned is 0x%2!8.8X!.
//
#define DTS_E_FAILEDPROPERTYSET          ((HRESULT)0xC001F025L)

//
// MessageId: DTS_E_FAILEDPROPERTYSET_ERRORINFO
//
// MessageText:
//
// An error occurred while setting the value of property "%1!s!". The error returned is 0x%2!8.8X! "%3!s!".
//
#define DTS_E_FAILEDPROPERTYSET_ERRORINFO ((HRESULT)0xC001F026L)

////////////////////////////////////////////////////////////////////////////
// Happens when client attempts to get the value of a property through a property object when the property is write only.

//
// MessageId: DTS_E_PROPERTYWRITEONLY
//
// MessageText:
//
// The property "%1!s!" is write-only. This error occurs when trying to retrieve the value of a property through a property object, but the property is write-only.
//
#define DTS_E_PROPERTYWRITEONLY          ((HRESULT)0xC001F027L)

////////////////////////////////////////////////////////////////////////////
// Happens when property object or properties collection attempts to access an IDispatch interface on an object

//
// MessageId: DTS_E_NODISPATCH
//
// MessageText:
//
// The object does not implement IDispatch. This error occurs when a property object or properties collection attempts to access an IDispatch interface on an object.
//
#define DTS_E_NODISPATCH                 ((HRESULT)0xC001F028L)

////////////////////////////////////////////////////////////////////////////
// Happens when properties collection attempts to retrieve the type library for an object through its IDispatch interface

//
// MessageId: DTS_E_NOCONTAININGTYPELIB
//
// MessageText:
//
// Unable to retrieve the type library of the object. This error occurs when the Properties collection attempts to retrieve the type library for an object through its IDispatch interface.
//
#define DTS_E_NOCONTAININGTYPELIB        ((HRESULT)0xC001F029L)

////////////////////////////////////////////////////////////////////////////
// Happens when the runtime is unable to resolve the given name to create a task, check the name to ensure that it's correct

//
// MessageId: DTS_E_INVALIDTASKMONIKER
//
// MessageText:
//
// Cannot create a task from XML for task "%1!s!", type "%2!s!" due to error 0x%3!8.8X! "%4!s!".
//
#define DTS_E_INVALIDTASKMONIKER         ((HRESULT)0xC001F02AL)

////////////////////////////////////////////////////////////////////////////
// Happens when CoCreating an XML Document

//
// MessageId: DTS_E_FAILEDCREATEXMLDOCUMENT
//
// MessageText:
//
// Failed to create an XML document "%1!s!".
//
#define DTS_E_FAILEDCREATEXMLDOCUMENT    ((HRESULT)0xC001F02CL)

////////////////////////////////////////////////////////////////////////////
// Happens when there is a property mapping from a variable with a value of a certain type to a property of a different type.  The property type must match the variable's type.

//
// MessageId: DTS_E_PMVARPROPTYPESDIFFERENT
//
// MessageText:
//
// An error occurred because there is a property mapping from a variable to a property with a different type. The property type must match the variable type.
//
#define DTS_E_PMVARPROPTYPESDIFFERENT    ((HRESULT)0xC001F02DL)

////////////////////////////////////////////////////////////////////////////
// Happens when passing an unsupported object type to a property mapping

//
// MessageId: DTS_E_PMINVALIDPROPMAPTARGET
//
// MessageText:
//
// Attempted to set property mapping to target unsupported object type. This error occurs when passing an unsupported object type to a property mapping.
//
#define DTS_E_PMINVALIDPROPMAPTARGET     ((HRESULT)0xC001F02EL)

////////////////////////////////////////////////////////////////////////////
// Happens when unsuccessfully attempting to resolve a package path to an object in the package, check the package path to ensure it's valid

//
// MessageId: DTS_E_COULDNOTRESOLVEPACKAGEPATH
//
// MessageText:
//
// Cannot resolve a package path to an object in the package "%1!s!".  Verify that the package path is valid.
//
#define DTS_E_COULDNOTRESOLVEPACKAGEPATH ((HRESULT)0xC001F02FL)

////////////////////////////////////////////////////////////////////////////
// Happens when destination property on a property map is empty string, set the destination property name

//
// MessageId: DTS_E_PMNODESTPROPERTY
//
// MessageText:
//
// The destination property for the property map is empty. Set the destination property name.
//
#define DTS_E_PMNODESTPROPERTY           ((HRESULT)0xC001F030L)

////////////////////////////////////////////////////////////////////////////
// Posted by the package when not all is well with property mappings.

//
// MessageId: DTS_E_INVALIDPROPERTYMAPPINGSFOUND
//
// MessageText:
//
// The package failed to restore at least one property mapping.
//
#define DTS_E_INVALIDPROPERTYMAPPINGSFOUND ((HRESULT)0xC001F031L)

////////////////////////////////////////////////////////////////////////////
// Posted when getting a variable from variables collection using ambiguous name.

//
// MessageId: DTS_E_AMBIGUOUSVARIABLENAME
//
// MessageText:
//
// The variable name is ambiguous because multiple variables with this name exist in different namespaces. Specify namespace-qualified name to prevent ambiguity.
//
#define DTS_E_AMBIGUOUSVARIABLENAME      ((HRESULT)0xC001F032L)

////////////////////////////////////////////////////////////////////////////
// Posted when destination object is not a child of any sequence container.

//
// MessageId: DTS_E_DESTINATIONOBJECTPARENTLESS
//
// MessageText:
//
// The destination object in a property mapping has no parent. The destination object is not a child of any sequence container. It may have been removed from the package.
//
#define DTS_E_DESTINATIONOBJECTPARENTLESS ((HRESULT)0xC001F033L)

////////////////////////////////////////////////////////////////////////////
// An operation involved a property mapping that was invalid. The mapping was ignored.

//
// MessageId: DTS_E_INVALIDPROPERTYMAPPING
//
// MessageText:
//
// The property mapping is not valid. The mapping is ignored.
//
#define DTS_E_INVALIDPROPERTYMAPPING     ((HRESULT)0xC001F036L)

////////////////////////////////////////////////////////////////////////////
// Top level error that is returned on any failed result when removing a potential property mapping target.

//
// MessageId: DTS_E_PMFAILALERTREMOVE
//
// MessageText:
//
// Failure when alerting property mappings that a target is being removed.
//
#define DTS_E_PMFAILALERTREMOVE          ((HRESULT)0xC001F038L)

////////////////////////////////////////////////////////////////////////////
// Happens when For Each property mapping fails to restore

//
// MessageId: DTS_E_INVALIDFOREACHPROPERTYMAPPING
//
// MessageText:
//
// An invalid property mapping is found on the For Each Loop. This occurs when the ForEach property mapping fails to restore.
//
#define DTS_E_INVALIDFOREACHPROPERTYMAPPING ((HRESULT)0xC001F03AL)

////////////////////////////////////////////////////////////////////////////
// Happens when specifying a property on a destination object that isn't found on that object.

//
// MessageId: DTS_E_PMPROPERTYINVALID
//
// MessageText:
//
// A destination property was specified on a property mapping that is invalid. This occurs when a property is specified on a destination object that in not found on that object.
//
#define DTS_E_PMPROPERTYINVALID          ((HRESULT)0xC001F040L)

////////////////////////////////////////////////////////////////////////////
// Happens when the runtime is unable to resolve the given name to create a task, check the name to ensure that it's correct

//
// MessageId: DTS_E_INVALIDTASKMONIKERNOPARAM
//
// MessageText:
//
// Cannot create a task from XML. This occurs when the runtime is unable to resolve the name to create a task. Verify that the name is correct.
//
#define DTS_E_INVALIDTASKMONIKERNOPARAM  ((HRESULT)0xC001F041L)

////////////////////////////////////////////////////////////////////////////
// Checkpoint was successfully created in a temporary file, but the final MoveFile operation has failed.

//
// MessageId: DTS_E_COULDNOTREPLACECHECKPOINTFILE
//
// MessageText:
//
// Cannot replace the existing checkpoint file with the updated checkpoint file. The checkpoint was successfully created in a temporary file, but overwriting the existing file with the new file failed.
//
#define DTS_E_COULDNOTREPLACECHECKPOINTFILE ((HRESULT)0xC001F080L)

////////////////////////////////////////////////////////////////////////////
// CheckpointUsage == DTSCU_ALWAYS, but CheckpointFileName == NULL or ""

//
// MessageId: DTS_E_CHECKPOINTFILENOTSPECIFIED
//
// MessageText:
//
// The package is configured to always restart from a checkpoint, but checkpoint file is not specified.
//
#define DTS_E_CHECKPOINTFILENOTSPECIFIED ((HRESULT)0xC001F081L)

////////////////////////////////////////////////////////////////////////////
// Failed to load checkpoint XML file

//
// MessageId: DTS_E_CHECKPOINTLOADXML
//
// MessageText:
//
// The attempt to load the XML checkpoint file "%1!s!" failed with error 0x%2!8.8X! "%3!s!". Check that the file name specified is correct, and that the file exists.
//
#define DTS_E_CHECKPOINTLOADXML          ((HRESULT)0xC001F082L)

////////////////////////////////////////////////////////////////////////////
// Further execution requires checkpoint file, perhaps because CheckpointUsage = DTSCU_ALWAYS

//
// MessageId: DTS_E_LOADCHECKPOINT
//
// MessageText:
//
// The package failed during execution because the checkpoint file cannot be loaded. Further execution of the package requires a checkpoint file. This error usually occurs when the CheckpointUsage property is set to ALWAYS, which specifies that the package always restarts.
//
#define DTS_E_LOADCHECKPOINT             ((HRESULT)0xC001F083L)

////////////////////////////////////////////////////////////////////////////
// The Evaluation condition expression is empty.  There must be a boolean evaluation expression in the for loop

//
// MessageId: DTS_E_NOEVALEXPRESSION
//
// MessageText:
//
// The evaluation condition expression on the For Loop "%1!s!" is empty. There must be a Boolean evaluation expression in the For Loop.
//
#define DTS_E_NOEVALEXPRESSION           ((HRESULT)0xC001F185L)

////////////////////////////////////////////////////////////////////////////
// The expression result type could not be converted to the type of the variable to which it was to be assigned.

//
// MessageId: DTS_E_EXPREVALASSIGNMENTTYPEMISMATCH
//
// MessageText:
//
// The result of the assignment expression "%1!s!" cannot be converted to a type that is compatible with the variable that it was assigned to.
//
#define DTS_E_EXPREVALASSIGNMENTTYPEMISMATCH ((HRESULT)0xC001F186L)

////////////////////////////////////////////////////////////////////////////
// The expression result cannot be assigned to the variable becuase the variable is read only.

//
// MessageId: DTS_E_EXPREVALASSIGNMENTTOREADONLYVARIABLE
//
// MessageText:
//
// Error using a read-only variable "%1!s!" in an assignment expression. The expression result cannot be assigned to the variable because the variable is read only. Choose a variable that can be written to, or remove the expression from this variable.
//
#define DTS_E_EXPREVALASSIGNMENTTOREADONLYVARIABLE ((HRESULT)0xC001F187L)

////////////////////////////////////////////////////////////////////////////
// The expression result cannot be assigned to the variable becuase the variable was not found, or could not be locked for write access.

//
// MessageId: DTS_E_EXPREVALASSIGNMENTVARIABLELOCKFORWRITEFAILED
//
// MessageText:
//
// Cannot evaluate expression "%1!s!" because the variable "%2!s!" does not exist or cannot be accessed for writing. The expression result cannot be assigned to the variable because the variable was not found, or could not be locked for write access.
//
#define DTS_E_EXPREVALASSIGNMENTVARIABLELOCKFORWRITEFAILED ((HRESULT)0xC001F188L)

////////////////////////////////////////////////////////////////////////////
// The expression result type could not be converted to a type supported by the runtime engine.

//
// MessageId: DTS_E_EXPREVALRESULTTYPENOTSUPPORTED
//
// MessageText:
//
// The expression "%1!s!" has a result type of "%2!s!", which cannot be converted to a supported type.
//
#define DTS_E_EXPREVALRESULTTYPENOTSUPPORTED ((HRESULT)0xC001F189L)

////////////////////////////////////////////////////////////////////////////
// An unexpected error occurred when trying to convert the expression result to a type supported by the runtime engine, even though the type conversion is supported.

//
// MessageId: DTS_E_EXPREVALRESULTTYPECONVERSIONFAILED
//
// MessageText:
//
// The conversion of the result of the expression"%1!s!" from type "%2!s!" to a supported type failed with error code 0x%3!8.8X!. An unexpected error occurred when trying to convert the expression result to a type supported by the runtime engine, even though the type conversion is supported.
//
#define DTS_E_EXPREVALRESULTTYPECONVERSIONFAILED ((HRESULT)0xC001F18AL)

//
// MessageId: DTS_E_DTSNAME_NOTNULL
//
// MessageText:
//
// The object name is not valid. The name cannot be set to NULL.
//
#define DTS_E_DTSNAME_NOTNULL            ((HRESULT)0xC001F200L)

//
// MessageId: DTS_E_DTSNAME_NOTEMPTY
//
// MessageText:
//
// The object name is not valid. The name cannot be empty.
//
#define DTS_E_DTSNAME_NOTEMPTY           ((HRESULT)0xC001F201L)

//
// MessageId: DTS_E_DTSNAME_LEGAL
//
// MessageText:
//
// The object name "%1!s!" is not valid. The name cannot contain any of the following characters: / \ : [ ] . =
//
#define DTS_E_DTSNAME_LEGAL              ((HRESULT)0xC001F202L)

//
// MessageId: DTS_E_DTSNAME_PRINTABLE
//
// MessageText:
//
// Object name "%1!s!" is not valid. The name cannot contain control characters that render it unprintable.
//
#define DTS_E_DTSNAME_PRINTABLE          ((HRESULT)0xC001F203L)

//
// MessageId: DTS_E_DTSNAME_NOLEADWHITESP
//
// MessageText:
//
// Object name "%1!s!" is not valid. Name cannot begin with a whitespace.
//
#define DTS_E_DTSNAME_NOLEADWHITESP      ((HRESULT)0xC001F204L)

//
// MessageId: DTS_E_DTSNAME_NOTRAILWHITESP
//
// MessageText:
//
// Object name "%1!s!" is not valid. Name cannot end with a whitespace.
//
#define DTS_E_DTSNAME_NOTRAILWHITESP     ((HRESULT)0xC001F205L)

//
// MessageId: DTS_E_DTSNAME_BEGINSWITHALPHA
//
// MessageText:
//
// Object name "%1!s!" is not valid. Name must begin with an alphabetical character.
//
#define DTS_E_DTSNAME_BEGINSWITHALPHA    ((HRESULT)0xC001F206L)

//
// MessageId: DTS_E_DTSNAME_BEGINSWITHALPHAUNDERBAR
//
// MessageText:
//
// Object name "%1!s!" is not valid. Name must begin with an alphabetical character or underscore "_".
//
#define DTS_E_DTSNAME_BEGINSWITHALPHAUNDERBAR ((HRESULT)0xC001F207L)

//
// MessageId: DTS_E_DTSNAME_ALPHADIGITUNDERBAR
//
// MessageText:
//
// Object name "%1!s!" is not valid. Name must contain only alphanumeric characters or underscores "_".
//
#define DTS_E_DTSNAME_ALPHADIGITUNDERBAR ((HRESULT)0xC001F208L)

//
// MessageId: DTS_E_DTSNAME_VALIDFILENAME
//
// MessageText:
//
// Object name "%1!s!" is not valid. The name cannot contain any of the following characters: / \ : ? " < > |
//
#define DTS_E_DTSNAME_VALIDFILENAME      ((HRESULT)0xC001F209L)

//
// MessageId: DTS_E_DTSNAME_TOOLONG
//
// MessageText:
//
// The object name is too long. The length of the object name cannot exceed the maximum length.
//
#define DTS_E_DTSNAME_TOOLONG            ((HRESULT)0xC001F20AL)

////////////////////////////////////////////////////////////////////////////
// Unable to translate the saved property to the given type

//
// MessageId: DTS_E_FAILLOADINGPROPERTY
//
// MessageText:
//
// Failed to load the value property "%1!s!" using default persistence.
//
#define DTS_E_FAILLOADINGPROPERTY        ((HRESULT)0xC001F420L)

//
// MessageId: DTS_E_NODELISTENUM_INVALIDCONNMGRTYPE
//
// MessageText:
//
// Connection manager "%1!s!" is not of type "%2!s!"
//
#define DTS_E_NODELISTENUM_INVALIDCONNMGRTYPE ((HRESULT)0xC001F422L)

//
// MessageId: DTS_E_NODELISTENUM_XPATHISEMPTY
//
// MessageText:
//
// "%1!s!" is empty
//
#define DTS_E_NODELISTENUM_XPATHISEMPTY  ((HRESULT)0xC001F423L)

//
// MessageId: DTS_E_NODELISTENUM_INVALIDDATANODE
//
// MessageText:
//
// Invalid data node in the nodelist enumerator section
//
#define DTS_E_NODELISTENUM_INVALIDDATANODE ((HRESULT)0xC001F424L)

//
// MessageId: DTS_E_NODELISTENUM_NOENUMERATORCREATED
//
// MessageText:
//
// No enumerator can be created
//
#define DTS_E_NODELISTENUM_NOENUMERATORCREATED ((HRESULT)0xC001F425L)

//
// MessageId: DTS_E_OPERATIONFAILCACHEINUSE
//
// MessageText:
//
// The operation failed because the cache is in use.
//
#define DTS_E_OPERATIONFAILCACHEINUSE    ((HRESULT)0xC001F427L)

//
// MessageId: DTS_E_PROPERTYCANNOTBEMODIFIED
//
// MessageText:
//
// The property cannot be modified.
//
#define DTS_E_PROPERTYCANNOTBEMODIFIED   ((HRESULT)0xC001F428L)

////////////////////////////////////////////////////////////////////////////
// Failed to upgrade package.

//
// MessageId: DTS_E_PACKAGEUPGRADEFAILED
//
// MessageText:
//
// The package upgrade has failed.
//
#define DTS_E_PACKAGEUPGRADEFAILED       ((HRESULT)0xC001F429L)

////////////////////////////////////////////////////////////////////////////
// This typically happens when loading a Yukon extension in a Katmai runtime

//
// MessageId: DTS_E_INVALIDWRAPPEDOBJECT
//
// MessageText:
//
// An error occurred while accessing an internal object. This could indicate a custom extension built for Integration Services 2005 is being used.
//
#define DTS_E_INVALIDWRAPPEDOBJECT       ((HRESULT)0xC001F430L)

////////////////////////////////////////////////////////////////////////////
// a connection manager declared in the package has the same name as the project connection manager

//
// MessageId: DTS_E_HIDEPROJCONNECTION_NAMECONFLICT
//
// MessageText:
//
// The Project Connection Manager "%1" is not accessible inside this package because a connection manager declared in the package has the same name as the Project Connection Manager. Change the name of either the Project Connection Manager or the Package Connection Manager.
//
#define DTS_E_HIDEPROJCONNECTION_NAMECONFLICT ((HRESULT)0xC001F431L)

////////////////////////////////////////////////////////////////////////////
// An error occurred while trying to commit the transaction. This could mean the transaction was already aborted.

//
// MessageId: DTS_E_COMMITTRANSACTION
//
// MessageText:
//
// The SSIS Runtime has failed to commit the distributed transaction due to error 0x%1!8.8X! "%2!s!".
//
#define DTS_E_COMMITTRANSACTION          ((HRESULT)0xC001F432L)

////////////////////////////////////////////////////////////////////////////
// An error occurred while trying to abort the transaction. This could mean the transaction was already aborted, or the connection dropped.

//
// MessageId: DTS_E_ABORTTRANSACTION
//
// MessageText:
//
// The SSIS Runtime has failed to abort the distributed transaction due to error 0x%1!8.8X! "%2!s!".
//
#define DTS_E_ABORTTRANSACTION           ((HRESULT)0xC001F433L)

//
// MessageId: DTS_E_TRANSACTION
//
// MessageText:
//
// A transaction error occurred. See previous error messages for details.
//
#define DTS_E_TRANSACTION                ((HRESULT)0xC001F434L)

//
// MessageId: DTS_I_STARTINGTRANSACTION
//
// MessageText:
//
// Starting distributed transaction for this container.
//
#define DTS_I_STARTINGTRANSACTION        ((HRESULT)0x4001100AL)

//
// MessageId: DTS_I_COMMITTINGTRANSACTION
//
// MessageText:
//
// Committing distributed transaction started by this container.
//
#define DTS_I_COMMITTINGTRANSACTION      ((HRESULT)0x4001100BL)

//
// MessageId: DTS_I_ABORTINGTRANSACTION
//
// MessageText:
//
// Aborting the current distributed transaction.
//
#define DTS_I_ABORTINGTRANSACTION        ((HRESULT)0x4001100CL)

//
// MessageId: DTS_MSG_PACKAGESTART
//
// MessageText:
//
// Package "%1!s!" started.
//
#define DTS_MSG_PACKAGESTART             ((HRESULT)0x40013000L)

//
// MessageId: DTS_MSG_PACKAGESUCCESS
//
// MessageText:
//
// Package "%1!s!" finished successfully.
//
#define DTS_MSG_PACKAGESUCCESS           ((HRESULT)0x40013001L)

//
// MessageId: DTS_MSG_PACKAGECANCEL
//
// MessageText:
//
// Package "%1!s!" has been cancelled.
//
#define DTS_MSG_PACKAGECANCEL            ((HRESULT)0x40013002L)

//
// MessageId: DTS_MSG_PACKAGEFAILURE
//
// MessageText:
//
// Package "%1!s!" failed.
//
#define DTS_MSG_PACKAGEFAILURE           ((HRESULT)0x40013003L)

////////////////////////////////////////////////////////////////////////////
// The named DLL could not be found on the path, and the product requires that DLL to run.

//
// MessageId: DTS_MSG_CANTDELAYLOADDLL
//
// MessageText:
//
// Module %1 cannot load DLL %2 to call entry point %3 because of error %4. The product requires that DLL to run, but the DLL could not be found on the path.
//
#define DTS_MSG_CANTDELAYLOADDLL         ((HRESULT)0x40013004L)

//
// MessageId: DTS_MSG_CANTDELAYLOADDLLFUNCTION
//
// MessageText:
//
// Module %1 loaded DLL %2, but cannot find entry point %3 because of error %4. The named DLL could not be found on the path, and the product requires that DLL to run.
//
#define DTS_MSG_CANTDELAYLOADDLLFUNCTION ((HRESULT)0x40013005L)

//
// MessageId: DTS_I_GOTMUTEXFROMWAIT
//
// MessageText:
//
// Mutex "%1!s!" was successfully acquired.
//
#define DTS_I_GOTMUTEXFROMWAIT           ((HRESULT)0x40013501L)

//
// MessageId: DTS_I_RELEASEACQUIREDMUTEX
//
// MessageText:
//
// Mutex "%1!s!" was successfully released.
//
#define DTS_I_RELEASEACQUIREDMUTEX       ((HRESULT)0x40013502L)

//
// MessageId: DTS_I_NEWMUTEXCREATED
//
// MessageText:
//
// Mutex "%1!s!" was successfully created.
//
#define DTS_I_NEWMUTEXCREATED            ((HRESULT)0x40013503L)

////////////////////////////////////////////////////////////////////////////
// User specified

//
// MessageId: DTS_I_DUMP_ON_ANY_ERR
//
// MessageText:
//
// Debug dump files will be generated for any error event.
//
#define DTS_I_DUMP_ON_ANY_ERR            ((HRESULT)0x40015101L)

//
// MessageId: DTS_I_DUMP_ON_CODES
//
// MessageText:
//
// Debug dump files will be generated for the following event codes: "%1!s!"
//
#define DTS_I_DUMP_ON_CODES              ((HRESULT)0x40015102L)

//
// MessageId: DTS_I_START_DUMP
//
// MessageText:
//
// Event code, 0x%1!8.8X!, triggered generation of debug dump files in the folder "%2!s!".
//
#define DTS_I_START_DUMP                 ((HRESULT)0x40015103L)

//
// MessageId: DTS_I_SSIS_INFO_DUMP
//
// MessageText:
//
// Creating SSIS information dump file "%1!s!".
//
#define DTS_I_SSIS_INFO_DUMP             ((HRESULT)0x40015104L)

//
// MessageId: DTS_I_FINISH_DUMP
//
// MessageText:
//
// Debug dump files successfully created.
//
#define DTS_I_FINISH_DUMP                ((HRESULT)0x40015106L)

//
// MessageId: DTS_I_PACKAGEMIGRATED
//
// MessageText:
//
// The package format was migrated from version %1!d! to version %2!d!. It must be saved to retain migration changes.
//
#define DTS_I_PACKAGEMIGRATED            ((HRESULT)0x40016019L)

//
// MessageId: DTS_I_SCRIPTSMIGRATED
//
// MessageText:
//
// The scripts in the package were migrated. The package must be saved to retain migration changes.
//
#define DTS_I_SCRIPTSMIGRATED            ((HRESULT)0x4001601AL)

//
// MessageId: DTS_I_FTPRECEIVEFILE
//
// MessageText:
//
// Receiving file "%1!s!".
//
#define DTS_I_FTPRECEIVEFILE             ((HRESULT)0x40016025L)

//
// MessageId: DTS_I_FTPSENDFILE
//
// MessageText:
//
// Sending file "%1!s!".
//
#define DTS_I_FTPSENDFILE                ((HRESULT)0x40016026L)

//
// MessageId: DTS_I_FTPFILEEXISTS
//
// MessageText:
//
// File "%1!s!" already exists.
//
#define DTS_I_FTPFILEEXISTS              ((HRESULT)0x40016027L)

//
// MessageId: DTS_I_FTPERRORLOADINGMSG
//
// MessageText:
//
// Cannot get extra error information due to an internal error.
//
#define DTS_I_FTPERRORLOADINGMSG         ((HRESULT)0x40016028L)

////////////////////////////////////////////////////////////////////////////
// This could happen when the file doesnot exist or you do not have permissions to delete the file.

//
// MessageId: DTS_I_FTPDELETEFILE
//
// MessageText:
//
// The attempt to delete file "%1!s!" failed. This may occur when the file does not exist, the file name was spelled incorrectly, or you do not have permissions to delete the file.
//
#define DTS_I_FTPDELETEFILE              ((HRESULT)0x40016036L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from a registry entry.

//
// MessageId: DTS_I_CONFIGFROMREG
//
// MessageText:
//
// The package is attempting to configure from a registry entry using the registry key "%1!s!".
//
#define DTS_I_CONFIGFROMREG              ((HRESULT)0x40016037L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from an environment variable.

//
// MessageId: DTS_I_CONFIGFROMENVVAR
//
// MessageText:
//
// The package is attempting to configure from the environment variable "%1!s!".
//
#define DTS_I_CONFIGFROMENVVAR           ((HRESULT)0x40016038L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from an INI file.

//
// MessageId: DTS_I_CONFIGFROMINIFILE
//
// MessageText:
//
// The package is attempting to configure from the .ini file "%1!s!".
//
#define DTS_I_CONFIGFROMINIFILE          ((HRESULT)0x40016039L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from an SQL server.

//
// MessageId: DTS_I_CONFIGFROMSQLSERVER
//
// MessageText:
//
// The package is attempting to configure from SQL Server using the configuration string "%1!s!".
//
#define DTS_I_CONFIGFROMSQLSERVER        ((HRESULT)0x40016040L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from an XML file.

//
// MessageId: DTS_I_CONFIGFROMFILE
//
// MessageText:
//
// The package is attempting to configure from the XML file "%1!s!".
//
#define DTS_I_CONFIGFROMFILE             ((HRESULT)0x40016041L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to configure from a parent variable.

//
// MessageId: DTS_I_CONFIGFROMPARENTVARIABLE
//
// MessageText:
//
// The package is attempting to configure from the parent variable "%1!s!".
//
#define DTS_I_CONFIGFROMPARENTVARIABLE   ((HRESULT)0x40016042L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to upgrade the runtime.

//
// MessageId: DTS_I_ATTEMPTINGUPGRADEOFDTS
//
// MessageText:
//
// Attempting an upgrade of SSIS from version "%1!s!" to version "%2!s!". The package is attempting to upgrade the runtime.
//
#define DTS_I_ATTEMPTINGUPGRADEOFDTS     ((HRESULT)0x40016043L)

////////////////////////////////////////////////////////////////////////////
// Package is attempting to upgrade an extensible object.

//
// MessageId: DTS_I_ATTEMPTINGUPGRADEOFANEXTOBJ
//
// MessageText:
//
// Attempting to upgrade "%1!s!". The package is attempting to upgrade an extensible object.
//
#define DTS_I_ATTEMPTINGUPGRADEOFANEXTOBJ ((HRESULT)0x40016044L)

////////////////////////////////////////////////////////////////////////////
// Package is configured to save checkpoints.

//
// MessageId: DTS_I_SAVECHECKPOINTSTOFILE
//
// MessageText:
//
// The package will be saving checkpoints to file "%1!s!" during execution. The package is configured to save checkpoints.
//
#define DTS_I_SAVECHECKPOINTSTOFILE      ((HRESULT)0x40016045L)

////////////////////////////////////////////////////////////////////////////
// Package was configured to restart from checkpoint and it did.

//
// MessageId: DTS_I_RESTARTFROMCHECKPOINTFILE
//
// MessageText:
//
// The package restarted from checkpoint file "%1!s!". The package was configured to restart from checkpoint.
//
#define DTS_I_RESTARTFROMCHECKPOINTFILE  ((HRESULT)0x40016046L)

//
// MessageId: DTS_I_CHECKPOINTSAVEDTOFILE
//
// MessageText:
//
// Checkpoint file "%1!s!" was updated to record completion of this container.
//
#define DTS_I_CHECKPOINTSAVEDTOFILE      ((HRESULT)0x40016047L)

//
// MessageId: DTS_I_CHECKPOINTFILEDELETED
//
// MessageText:
//
// Checkpoint file "%1!s!" was deleted after successful completion of the package.
//
#define DTS_I_CHECKPOINTFILEDELETED      ((HRESULT)0x40016048L)

//
// MessageId: DTS_I_CHECKPOINTSAVINGTOFILE
//
// MessageText:
//
// Checkpoint file "%1!s!" update starting.
//
#define DTS_I_CHECKPOINTSAVINGTOFILE     ((HRESULT)0x40016049L)

//
// MessageId: DTS_I_CHOSENMAXEXECUTABLES
//
// MessageText:
//
// Based on the system configuration, the maximum concurrent executables are set to %1!d!.
//
#define DTS_I_CHOSENMAXEXECUTABLES       ((HRESULT)0x40016051L)

//
// MessageId: DTS_I_MAXEXECUTABLES
//
// MessageText:
//
// Maximum concurrent executables are set to %1!d!.
//
#define DTS_I_MAXEXECUTABLES             ((HRESULT)0x40016052L)

//
// MessageId: DTS_I_PACKAGESTART
//
// MessageText:
//
// Beginning of package execution.
//
#define DTS_I_PACKAGESTART               ((HRESULT)0x40016053L)

//
// MessageId: DTS_I_PACKAGEEND
//
// MessageText:
//
// End of package execution.
//
#define DTS_I_PACKAGEEND                 ((HRESULT)0x40016054L)

////////////////////////////////////////////////////////////////////////////
// Upgrade

//
// MessageId: DTS_I_CONNECTIONPROVIDERCHANGE
//
// MessageText:
//
// The provider name for the connection manager "%1!s!" has been changed from "%2!s!" to "%3!s!".
//
#define DTS_I_CONNECTIONPROVIDERCHANGE   ((HRESULT)0x40019316L)

//
// MessageId: DTS_I_PACKAGEUPGRADED
//
// MessageText:
//
// Succeeded in upgrading the package.
//
#define DTS_I_PACKAGEUPGRADED            ((HRESULT)0x4001F300L)

////////////////////////////////////////////////////////////////////////////
// This is used as a return value from functions that encountered warnings

//
// MessageId: DTS_W_GENERICWARNING
//
// MessageText:
//
// Warning(s) raised. There should be more specific warnings preceding this one that explain the specifics of the warning(s).
//
#define DTS_W_GENERICWARNING             ((HRESULT)0x80010015L)

////////////////////////////////////////////////////////////////////////////
// Happens we are unable to CoCreate an instance of CLSIDDOM_Document.  Check to see that the DOM is installed and registered correctly.

//
// MessageId: DTS_W_FAILEDXMLDOCCREATION
//
// MessageText:
//
// Cannot create an XML document object instance. Verify that MSXML is installed and registered correctly.
//
#define DTS_W_FAILEDXMLDOCCREATION       ((HRESULT)0x80012010L)

////////////////////////////////////////////////////////////////////////////
// Happens when the IXMLDOMDoc::Load call fails.  Check the XML configuration file, may be malformed or invalid

//
// MessageId: DTS_W_FAILEDCONFIGLOAD
//
// MessageText:
//
// Cannot load the XML configuration file. The XML configuration file may be malformed or not valid.
//
#define DTS_W_FAILEDCONFIGLOAD           ((HRESULT)0x80012011L)

////////////////////////////////////////////////////////////////////////////
// The filename specified in the configuration was invalid.  Check the configuration filename.

//
// MessageId: DTS_W_CONFIGFILENAMEINVALID
//
// MessageText:
//
// The configuration file name "%1" is not valid. Check the configuration file name.
//
#define DTS_W_CONFIGFILENAMEINVALID      ((HRESULT)0x80012012L)

////////////////////////////////////////////////////////////////////////////
// Happens after the configuration file successfully loads, but for some reason is not formatted correctly.  An element may be missing or corrupt

//
// MessageId: DTS_W_CONFIGFILEINVALID
//
// MessageText:
//
// The configuration file loaded, but is not valid. The file is not formatted correctly, may be missing an element, or may be damaged.
//
#define DTS_W_CONFIGFILEINVALID          ((HRESULT)0x80012013L)

////////////////////////////////////////////////////////////////////////////
// The configuration specified a file that could not be found.  Check the directory and file name.

//
// MessageId: DTS_W_CONFIGFILENOTFOUND
//
// MessageText:
//
// The configuration file "%1!s!" cannot be found. Check the directory and file name.
//
#define DTS_W_CONFIGFILENOTFOUND         ((HRESULT)0x80012014L)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration entries specifies a registry key that isn't available.  Check the registry to ensure that the key is there.

//
// MessageId: DTS_W_CONFIGKEYNOTFOUND
//
// MessageText:
//
// Configuration registry key "%1!s!" was not found. A configuration entry specifies a registry key that is not available. Check the registry to ensure that the key is there.
//
#define DTS_W_CONFIGKEYNOTFOUND          ((HRESULT)0x80012015L)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration file configuration entries has an invalid ConfiguredType specified

//
// MessageId: DTS_W_CONFIGTYPEINVALID
//
// MessageText:
//
// The configuration type in one of the configuration entries was not valid. Valid types are listed in the DTSConfigurationType enumeration.
//
#define DTS_W_CONFIGTYPEINVALID          ((HRESULT)0x80012016L)

////////////////////////////////////////////////////////////////////////////
// Returned when attempting to resolve a package path to an object that can not be found

//
// MessageId: DTS_W_CANNOTFINDOBJECT
//
// MessageText:
//
// The package path referenced an object that cannot be found: "%1!s!". This occurs when an attempt is made to resolve a package path to an object that cannot be found.
//
#define DTS_W_CANNOTFINDOBJECT           ((HRESULT)0x80012017L)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration file configuration entries has an invalid format: There was no \package delimiter

//
// MessageId: DTS_W_CONFIGFORMATINVALID_PACKAGEDELIMITER
//
// MessageText:
//
// The configuration entry, "%1!s!", has an incorrect format because it does not begin with the package delimiter. Prepend "\package" to the package path.
//
#define DTS_W_CONFIGFORMATINVALID_PACKAGEDELIMITER ((HRESULT)0x80012018L)

////////////////////////////////////////////////////////////////////////////
// Returned for various formatting errors like invalid array delimiter or missing delimiter

//
// MessageId: DTS_W_CONFIGFORMATINVALID
//
// MessageText:
//
// The configuration entry "%1!s!" had an incorrect format. This can occur because of a missing delimiter or formatting errors, like an invalid array delimiter.
//
#define DTS_W_CONFIGFORMATINVALID        ((HRESULT)0x80012019L)

//
// MessageId: DTS_W_NOPARENTVARIABLES
//
// MessageText:
//
// Configuration from a parent variable "%1!s!" did not occur because there was no parent variable collection.
//
#define DTS_W_NOPARENTVARIABLES          ((HRESULT)0x8001201AL)

////////////////////////////////////////////////////////////////////////////
// Happens after the configuration file fails to load

//
// MessageId: DTS_W_CONFIGFILEFAILEDIMPORT
//
// MessageText:
//
// Failure importing configuration file: "%1!s!".
//
#define DTS_W_CONFIGFILEFAILEDIMPORT     ((HRESULT)0x8001201BL)

//
// MessageId: DTS_W_PARENTVARIABLENOTFOUND
//
// MessageText:
//
// Configuration from a parent variable "%1!s!" did not occur because there was no parent variable. Error code: 0x%2!8.8X!.
//
#define DTS_W_PARENTVARIABLENOTFOUND     ((HRESULT)0x8001201CL)

////////////////////////////////////////////////////////////////////////////
// There were no configurations in the configuration file

//
// MessageId: DTS_W_CONFIGFILEEMPTY
//
// MessageText:
//
// The configuration file was empty and contained no configuration entries.
//
#define DTS_W_CONFIGFILEEMPTY            ((HRESULT)0x8001201DL)

////////////////////////////////////////////////////////////////////////////
// Happens when a user attempts to set a configuration object's type property to an invalid configuration type

//
// MessageId: DTS_W_INVALIDCONFIGURATIONTYPE
//
// MessageText:
//
// The configuration type for configuration "%1!s!" is not valid. This may occur when an attempt is made to set the type property of a configuration object to an invalid configuration type.
//
#define DTS_W_INVALIDCONFIGURATIONTYPE   ((HRESULT)0x80012023L)

////////////////////////////////////////////////////////////////////////////
// Add a value called ConfigType to the registry key and should have a string value of one of the following "Variable", "Property", "ConnectionManager", "LoggingProvider", or "ForEachEnumerator"

//
// MessageId: DTS_W_REGISTRYCONFIGURATIONTYPENOTFOUND
//
// MessageText:
//
// The configuration type for the registry configuration was not found in key "%1!s!". Add a value called ConfigType to the registry key and give it a string value of "Variable", "Property", "ConnectionManager", "LoggingProvider", or "ForEachEnumerator".
//
#define DTS_W_REGISTRYCONFIGURATIONTYPENOTFOUND ((HRESULT)0x80012025L)

////////////////////////////////////////////////////////////////////////////
// Add a value called Value to the registry key and should be of type DWORD or string

//
// MessageId: DTS_W_REGISTRYCONFIGURATIONVALUENOTFOUND
//
// MessageText:
//
// The configuration value for the registry configuration was not found in key "%1!s!". Add a value called Value to the registry key of type DWORD or String.
//
#define DTS_W_REGISTRYCONFIGURATIONVALUENOTFOUND ((HRESULT)0x80012026L)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to set the destination property or variable fails.  Check the destination property or variable.

//
// MessageId: DTS_W_PROCESSCONFIGURATIONFAILEDSET
//
// MessageText:
//
// Process configuration failed to set the destination at the package path of "%1!s!". This occurs when attempting to set the destination property or variable fails. Check the destination property or variable.
//
#define DTS_W_PROCESSCONFIGURATIONFAILEDSET ((HRESULT)0x80012028L)

////////////////////////////////////////////////////////////////////////////
// The project connection managers may not be loaded and there may be some load errors while trying to retrieve the project connection manager stream.

//
// MessageId: DTS_W_PROCESSCONFIGURATIONFAILEDLOADSCM
//
// MessageText:
//
// Process configuration failed to load the project connection managers.
//
#define DTS_W_PROCESSCONFIGURATIONFAILEDLOADSCM ((HRESULT)0x8001202AL)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to retrieve the configured value from an ini file.  Check the section in the ini file.

//
// MessageId: DTS_W_CONFIGUREDVALUESECTIONEMPTY
//
// MessageText:
//
// Failed to retrieve value from the .ini file. The ConfiguredValue section is either empty, or does not exist: "%1!s!".
//
#define DTS_W_CONFIGUREDVALUESECTIONEMPTY ((HRESULT)0x80012032L)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to retrieve the configured type from an ini file.  Check the section in the ini file.

//
// MessageId: DTS_W_CONFIGUREDTYPESECTIONEMPTY
//
// MessageText:
//
// Failed to retrieve value from the .ini file. The ConfiguredType section is either empty, or does not exist: "%1!s!".
//
#define DTS_W_CONFIGUREDTYPESECTIONEMPTY ((HRESULT)0x80012033L)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to retrieve the package path from an ini file.  Check the section in the ini file.

//
// MessageId: DTS_W_PACKAGEPATHSECTIONEMPTY
//
// MessageText:
//
// Failed to retrieve value from the .ini file. The PackagePath section is either empty, or does not exist: "%1!s!".
//
#define DTS_W_PACKAGEPATHSECTIONEMPTY    ((HRESULT)0x80012034L)

////////////////////////////////////////////////////////////////////////////
// Happens when attempting to retrieve the configured value type from an ini file.  Check the section in the ini file.

//
// MessageId: DTS_W_CONFIGUREDVALUETYPE
//
// MessageText:
//
// Failed to retrieve value from the .ini file. The ConfiguredValueType section is either empty, or does not exist: "%1!s!".
//
#define DTS_W_CONFIGUREDVALUETYPE        ((HRESULT)0x80012035L)

////////////////////////////////////////////////////////////////////////////
// Happens after the configuration file fails to load

//
// MessageId: DTS_W_SQLSERVERFAILEDIMPORT
//
// MessageText:
//
// Configuration from SQL Server was not successfully imported: "%1!s!".
//
#define DTS_W_SQLSERVERFAILEDIMPORT      ((HRESULT)0x80012051L)

////////////////////////////////////////////////////////////////////////////
// Happens if some INI fields are empty or missing

//
// MessageId: DTS_W_INICONFIGURATIONPROBLEM
//
// MessageText:
//
// The .ini configuration file is not valid due to empty or missing fields.
//
#define DTS_W_INICONFIGURATIONPROBLEM    ((HRESULT)0x80012052L)

////////////////////////////////////////////////////////////////////////////
// Happens when configuring from a Sql server table that has no records for configuration

//
// MessageId: DTS_W_NORECORDSFOUNDINTABLE
//
// MessageText:
//
// Table "%1!s!" does not have any records for configuration. This occurs when configuring from a SQL Server table that has no records for the configuration.
//
#define DTS_W_NORECORDSFOUNDINTABLE      ((HRESULT)0x80012054L)

////////////////////////////////////////////////////////////////////////////
// Different custom events used the same name

//
// MessageId: DTS_W_DUPLICATECUSTOMEVENT
//
// MessageText:
//
// Error using same name for different custom events. The custom event "%1!s!" was defined differently by different children of this container. There may be an error when executing the event handler.
//
#define DTS_W_DUPLICATECUSTOMEVENT       ((HRESULT)0x80012055L)

////////////////////////////////////////////////////////////////////////////
// This error happens when the client tries to configure a read only variable.

//
// MessageId: DTS_W_CONFIGREADONLYVARIABLE
//
// MessageText:
//
// The configuration attempted to change a read-only variable. The variable is at the package path "%1".
//
#define DTS_W_CONFIGREADONLYVARIABLE     ((HRESULT)0x80012057L)

////////////////////////////////////////////////////////////////////////////
// Happens when calling ProcessConfiguration on the package and it fails

//
// MessageId: DTS_W_CONFIGPROCESSCONFIGURATIONFAILED
//
// MessageText:
//
// Calling ProcessConfiguration on the package failed. The configuration attempted to change the property at the package path "%1".
//
#define DTS_W_CONFIGPROCESSCONFIGURATIONFAILED ((HRESULT)0x80012058L)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration settings on the package fails to load.  Check configurations entries and previous warnings to see which configuration failed.  Should be preceeded by another warning describing the configuration that failed.

//
// MessageId: DTS_W_ONEORMORECONFIGLOADFAILED
//
// MessageText:
//
// Failed to load at least one of the configuration entries for the package. Check configuration entries for "%1!s!" and previous warnings to see descriptions of which configuration failed.
//
#define DTS_W_ONEORMORECONFIGLOADFAILED  ((HRESULT)0x80012059L)

////////////////////////////////////////////////////////////////////////////
// Happens when one of the configuration file entries either was invalid or failed to configure the variable.  The name indicates which entry failed, in some cases the name will be unknown

//
// MessageId: DTS_W_CONFIGNODEINVALID
//
// MessageText:
//
// The configuration entry "%1!s!" in the configuration file was not valid, or failed to configure the variable.  The name indicates which entry failed. In some cases, the name will not be available.
//
#define DTS_W_CONFIGNODEINVALID          ((HRESULT)0x8001205AL)

////////////////////////////////////////////////////////////////////////////
// Posted when SaveCheckpoints package property is True and the said condition exists.

//
// MessageId: DTS_W_FAILURENOTRESTARTABLE
//
// MessageText:
//
// This task or container has failed, but because FailPackageOnFailure property is FALSE, the package will continue. This warning is posted when the SaveCheckpoints property of the package is set to TRUE and the task or container fails.
//
#define DTS_W_FAILURENOTRESTARTABLE      ((HRESULT)0x80014058L)

////////////////////////////////////////////////////////////////////////////
// The path is empty

//
// MessageId: DTS_W_EMPTYPATH
//
// MessageText:
//
// The path is empty.
//
#define DTS_W_EMPTYPATH                  ((HRESULT)0x80017101L)

////////////////////////////////////////////////////////////////////////////
// The specified data flow task identification was not found during execution.

//
// MessageId: DTS_W_DATATAP_UNUSEDTASKID
//
// MessageText:
//
// The data flow task identification %1!s! was not found during execution. The specified data tap file %2!s! for path %3!s! was not generated.
//
#define DTS_W_DATATAP_UNUSEDTASKID       ((HRESULT)0x80017205L)

////////////////////////////////////////////////////////////////////////////
// Happens when the number of errors reaches the number specified in MaximumErrorCount.  Either change the MaximumErrorCount or fix errors.

//
// MessageId: DTS_W_MAXIMUMERRORCOUNTREACHED
//
// MessageText:
//
// SSIS Warning Code DTS_W_MAXIMUMERRORCOUNTREACHED.  The Execution method succeeded, but the number of errors raised (%1!d!) reached the maximum allowed (%2!d!); resulting in failure. This occurs when the number of errors reaches the number specified in MaximumErrorCount. Change the MaximumErrorCount or fix the errors.
//
#define DTS_W_MAXIMUMERRORCOUNTREACHED   ((HRESULT)0x80019002L)

////////////////////////////////////////////////////////////////////////////
// Happens when a package specifies an environment variable for a configuration setting but the runtime can't find it.  Check the configurations collection on the package a verify that the specified environment variable is available and valid

//
// MessageId: DTS_W_CONFIGENVVARNOTFOUND
//
// MessageText:
//
// The configuration environment variable was not found.  The environment variable was: "%1!s!". This occurs when a package specifies an environment variable for a configuration setting but it cannot be found. Check the configurations collection in the package and verify that the specified environment variable is available and valid.
//
#define DTS_W_CONFIGENVVARNOTFOUND       ((HRESULT)0x80019003L)

////////////////////////////////////////////////////////////////////////////
// Try to open a project with a wrong password

//
// MessageId: DTS_W_DECRYPTPROJECT_SENSITIVEDATA_PASSWORD
//
// MessageText:
//
// The sensitive data in the project cannot be decrypted because a password has not been specified or is incorrect.
//
#define DTS_W_DECRYPTPROJECT_SENSITIVEDATA_PASSWORD ((HRESULT)0x800190FEL)

////////////////////////////////////////////////////////////////////////////
// Try to open a project encrypted with a different user key

//
// MessageId: DTS_W_DECRYPTPROJECT_SENSITIVEDATA_USERKEY
//
// MessageText:
//
// Unable to decrypt the sensitive data in the project. The project uses a protection level which encrypts sensitive data using a user key. You may not be the user who encrypted the project or you are not using the same computer that was used to save the project.
//
#define DTS_W_DECRYPTPROJECT_SENSITIVEDATA_USERKEY ((HRESULT)0x800190FFL)

////////////////////////////////////////////////////////////////////////////
// Connection string in configuration perhaps is not updated

//
// MessageId: DTS_W_UNCOMMON_PROVIDER_IN_CONFIGURATION
//
// MessageText:
//
// The version of provider name in configuration is older than the current version. The value in configuration will be used, which may cause connection issue. Property path: "%1!s!", current connection string: "%2!s!", connection string in configuration: "%3!s!".
//
#define DTS_W_UNCOMMON_PROVIDER_IN_CONFIGURATION ((HRESULT)0x80019100L)

////////////////////////////////////////////////////////////////////////////
// An exception occurred while attempting to read the 3rd party extension mappings.

//
// MessageId: DTS_W_READEXTMAPFAILED
//
// MessageText:
//
// An exception occurred while reading the upgrade mapping files. The exception is "%1!s!".
//
#define DTS_W_READEXTMAPFAILED           ((HRESULT)0x80019317L)

////////////////////////////////////////////////////////////////////////////
// A duplicate mapping key was found in one of mapping files.

//
// MessageId: DTS_W_DUPLICATEMAPPINGKEY
//
// MessageText:
//
// There is a duplicate mapping in file, "%1!s!". The tag is "%2!s!", and the key is "%3!s!".
//
#define DTS_W_DUPLICATEMAPPINGKEY        ((HRESULT)0x80019318L)

////////////////////////////////////////////////////////////////////////////
// We attempted to upgrade an extension that wasn't explicitly listed in the upgrade mapping files, but found a potential match on the machine.

//
// MessageId: DTS_W_IMPLICITUPGRADEMAPPING
//
// MessageText:
//
// The extension, "%1!s!", was implicitly upgraded to "%2!s!". Add a mapping for this extension to the UpgradeMappings directory.
//
#define DTS_W_IMPLICITUPGRADEMAPPING     ((HRESULT)0x80019319L)

////////////////////////////////////////////////////////////////////////////
// Invalid mapping encountered.

//
// MessageId: DTS_W_INVALIDEXTENSIONMAPPING
//
// MessageText:
//
// A mapping in the file, "%1!s!", is not valid. Values cannot be null or empty. The tag is "%2!s!", the key is "%3!s!", and the value is "%4!s!".
//
#define DTS_W_INVALIDEXTENSIONMAPPING    ((HRESULT)0x8001931AL)

////////////////////////////////////////////////////////////////////////////
// Upgrade

//
// MessageId: DTS_W_ADOCONNECTIONDATATYPECOMPATCHANGE
//
// MessageText:
//
// The DataTypeCompatibility property of ADO type connection manager "%1!s!" was set to 80 for backward compatibility reasons.
//
#define DTS_W_ADOCONNECTIONDATATYPECOMPATCHANGE ((HRESULT)0x8001931CL)

////////////////////////////////////////////////////////////////////////////
// The for each file enumerator either didn't find any files that match the file pattern or the specified directory was empty

//
// MessageId: DTS_W_FILEENUMEMPTY
//
// MessageText:
//
// The For Each File enumerator is empty. The For Each File enumerator did not find any files that matched the file pattern, or the specified directory was empty.
//
#define DTS_W_FILEENUMEMPTY              ((HRESULT)0x8001C004L)

////////////////////////////////////////////////////////////////////////////
// Happens when unsuccessfully attempting to resolve a package path to an object in the package, check the package path to ensure it's valid

//
// MessageId: DTS_W_COULDNOTRESOLVEPACKAGEPATH
//
// MessageText:
//
// Cannot resolve a package path to an object in the package "%1!s!". Verify that the package path is valid.
//
#define DTS_W_COULDNOTRESOLVEPACKAGEPATH ((HRESULT)0x8001F02FL)

////////////////////////////////////////////////////////////////////////////
// Given when the expression in the assignment expression on the ForLoop are not assignment expressions.

//
// MessageId: DTS_W_ITERATIONEXPRESSIONISNOTASSIGNMENT
//
// MessageText:
//
// The iteration expression is not an assignment expression: "%1!s!". This error usually occurs when the expression in the assignment expression on the ForLoop is not an assignment expression.
//
#define DTS_W_ITERATIONEXPRESSIONISNOTASSIGNMENT ((HRESULT)0x8001F203L)

////////////////////////////////////////////////////////////////////////////
// Given when the expression in the iterate expressions on the ForLoop are not assignment expressions.

//
// MessageId: DTS_W_INITIALIZATIONEXPRESSIONISNOTASSIGNMENT
//
// MessageText:
//
// The initialization expression is not an assignment expression: "%1!s!". This error usually occurs when the expression in the iterate expressions on the ForLoop is not an assignment expression.
//
#define DTS_W_INITIALIZATIONEXPRESSIONISNOTASSIGNMENT ((HRESULT)0x8001F204L)

//
// MessageId: DTS_W_LOGPROVIDERNOTDEFINED
//
// MessageText:
//
// The executable "%1!s!" was pasted successfully. However a log provider that was associated with the executable was not found in the collection "LogProviders".  The executable was pasted without log provider information.
//
#define DTS_W_LOGPROVIDERNOTDEFINED      ((HRESULT)0x8001F205L)

////////////////////////////////////////////////////////////////////////////
// This warning is thrown when the user uses a ProgID which has been renamed (not just reversioned)

//
// MessageId: DTS_W_LEGACYPROGID
//
// MessageText:
//
// The "%1!s!" ProgID has been deprecated. The new ProgID for this component "%2!s!" should be used instead.
//
#define DTS_W_LEGACYPROGID               ((HRESULT)0x8001F42BL)

//
// MessageId: DTS_E_TKEXECPACKAGE_UNABLETOLOADFILE
//
// MessageText:
//
// Error 0x%1!8.8X! while loading package file "%3!s!". %2!s!.
//
#define DTS_E_TKEXECPACKAGE_UNABLETOLOADFILE ((HRESULT)0xC00220DEL)

//
// MessageId: DTS_E_TKEXECPACKAGE_UNSPECIFIEDPACKAGE
//
// MessageText:
//
// The package is not specified.
//
#define DTS_E_TKEXECPACKAGE_UNSPECIFIEDPACKAGE ((HRESULT)0xC00220DFL)

//
// MessageId: DTS_E_TKEXECPACKAGE_UNSPECIFIEDCONNECTION
//
// MessageText:
//
// The connection is not specified.
//
#define DTS_E_TKEXECPACKAGE_UNSPECIFIEDCONNECTION ((HRESULT)0xC00220E0L)

//
// MessageId: DTS_E_TKEXECPACKAGE_INCORRECTCONNECTIONMANAGERTYPE
//
// MessageText:
//
// The connection manager "%1!s!" has an unsupported type "%2!s!". Only "FILE" and "OLEDB" connection managers are supported.
//
#define DTS_E_TKEXECPACKAGE_INCORRECTCONNECTIONMANAGERTYPE ((HRESULT)0xC00220E2L)

//
// MessageId: DTS_E_TKEXECPACKAGE_UNABLETOLOADXML
//
// MessageText:
//
// Error 0x%1!8.8X! while loading package file "%3!s!" into an XML document. %2!s!.
//
#define DTS_E_TKEXECPACKAGE_UNABLETOLOADXML ((HRESULT)0xC00220E3L)

//
// MessageId: DTS_E_TKEXECPACKAGE_UNABLETOLOAD
//
// MessageText:
//
// Error 0x%1!8.8X! while preparing to load the package. %2!s!.
//
#define DTS_E_TKEXECPACKAGE_UNABLETOLOAD ((HRESULT)0xC00220E4L)

//
// MessageId: DTS_E_TKEXECPACKAGE_NOPROJECTREFERENCE
//
// MessageText:
//
// There is no project to reference.
//
#define DTS_E_TKEXECPACKAGE_NOPROJECTREFERENCE ((HRESULT)0xC00220E6L)

//
// MessageId: DTS_E_TKEXECPACKAGE_PACKAGENOTEXIST
//
// MessageText:
//
// Failed to locate the specified package in the project.
//
#define DTS_E_TKEXECPACKAGE_PACKAGENOTEXIST ((HRESULT)0xC00220E7L)

////////////////////////////////////////////////////////////////////////////
// error accessing package file

//
// MessageId: DTS_E_TKEXECPACKAGE_FILEACCESSERROR
//
// MessageText:
//
// Error 0x%1!8.8X!. Unable to access the package file, "%2!s!". Make sure that the file exists and that you have permission to access it.
//
#define DTS_E_TKEXECPACKAGE_FILEACCESSERROR ((HRESULT)0xC00220E8L)

////////////////////////////////////////////////////////////////////////////
// Cannot get user name to connect to SQL Server

//
// MessageId: DTS_E_TKEXECPACKAGE_USERNAMEFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to get the user name. Make sure the user name property is specified correctly on the task.
//
#define DTS_E_TKEXECPACKAGE_USERNAMEFAILED ((HRESULT)0xC00220E9L)

////////////////////////////////////////////////////////////////////////////
// Cannot get server name to connect to SQL Server

//
// MessageId: DTS_E_TKEXECPACKAGE_SERVERNAMEFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to get the server name. Make sure the server name property is specified correctly on the task.
//
#define DTS_E_TKEXECPACKAGE_SERVERNAMEFAILED ((HRESULT)0xC00220EAL)

////////////////////////////////////////////////////////////////////////////
// Failed to load package from SQL Server

//
// MessageId: DTS_E_TKEXECPACKAGE_SQLLOADFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to load the package "%2!s!" from SQL Server "%3!s!". Make sure that the package exists on the instance of SQL Server and that you have the correct credentials to access it.
//
#define DTS_E_TKEXECPACKAGE_SQLLOADFAILED ((HRESULT)0xC00220EBL)

////////////////////////////////////////////////////////////////////////////
// Failed to create an instance of child package

//
// MessageId: DTS_E_TKEXECPACKAGE_CREATECHILDPKGFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to create an instance of empty child package. The Distributed Component Object Model (DCOM) configuration or the installation of SQL Server Integration Services, may be corrupted on your machine.
//
#define DTS_E_TKEXECPACKAGE_CREATECHILDPKGFAILED ((HRESULT)0xC00220ECL)

////////////////////////////////////////////////////////////////////////////
// Error working with DOM object properties

//
// MessageId: DTS_E_TKEXECPACKAGE_DOMPROPFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to set properties on the XML Document Object Model object. Your DOM installation might be corrupted.
//
#define DTS_E_TKEXECPACKAGE_DOMPROPFAILED ((HRESULT)0xC00220EDL)

////////////////////////////////////////////////////////////////////////////
// Failed getting xml document

//
// MessageId: DTS_E_TKEXECPACKAGE_DOMDOCUMENTFAILED
//
// MessageText:
//
// Error 0x%1!8.8X!. Failed to get an XML document from the Document Object Model. The package data or your DOM installation might be corrupted.
//
#define DTS_E_TKEXECPACKAGE_DOMDOCUMENTFAILED ((HRESULT)0xC00220EEL)

////////////////////////////////////////////////////////////////////////////
// The child package parameter is not sensitive but the assigned variable contains a sensitive value

//
// MessageId: DTS_E_TKEXECPACKAGE_REQUIRESENSITIVEPARAMETER
//
// MessageText:
//
// Variable "%1!s!" bound to child package parameter "%2!s!" contains a sensitive value. The child package parameter is not sensitive.
//
#define DTS_E_TKEXECPACKAGE_REQUIRESENSITIVEPARAMETER ((HRESULT)0xC00220EFL)

//
// MessageId: DTS_E_TKEXECPACKAGE_VARIABLENOTFOUND
//
// MessageText:
//
// Failed to locate the variable or parameter "%1!s!".
//
#define DTS_E_TKEXECPACKAGE_VARIABLENOTFOUND ((HRESULT)0xC00220FEL)

//
// MessageId: DTS_E_TKEXECPACKAGE_REQUIREDPARAMETERNOTSPECIFIED
//
// MessageText:
//
// One or more required parameters have not been assigned values.
//
#define DTS_E_TKEXECPACKAGE_REQUIREDPARAMETERNOTSPECIFIED ((HRESULT)0xC0022101L)

//
// MessageId: DTS_E_TXEXECPACKAGE_FAILTOEXECUTEPROJECTREF
//
// MessageText:
//
// Error 0x%1!8.8X! while executing package from project reference package "%3!s!". %2!s!.
//
#define DTS_E_TXEXECPACKAGE_FAILTOEXECUTEPROJECTREF ((HRESULT)0xC0022102L)

////////////////////////////////////////////////////////////////////////////
// 0-length delimiter to TOKEN

//
// MessageId: DTS_E_EXPREVALFNTOKEN_EMPTYDELIM
//
// MessageText:
//
// The delimiter must not be an empty string.
//
#define DTS_E_EXPREVALFNTOKEN_EMPTYDELIM ((HRESULT)0xC0022135L)

////////////////////////////////////////////////////////////////////////////
// Normally, task's Validate method must succeed and indicate the result via an out parameter. In this case, Validate failed.

//
// MessageId: DTS_E_TASKVALIDATIONFAILED
//
// MessageText:
//
// The Validate method on the task failed, and returned error code 0x%1!8.8X! (%2!s!). The Validate method must succeed and indicate the result using an "out" parameter.
//
#define DTS_E_TASKVALIDATIONFAILED       ((HRESULT)0xC0024102L)

////////////////////////////////////////////////////////////////////////////
// Normally, task's Execute method must succeed and indicate the result via an out parameter. In this case, Execute failed.

//
// MessageId: DTS_E_TASKEXECUTEFAILED
//
// MessageText:
//
// The Execute method on the task returned error code 0x%1!8.8X! (%2!s!). The Execute method must succeed, and indicate the result using an "out" parameter.
//
#define DTS_E_TASKEXECUTEFAILED          ((HRESULT)0xC0024104L)

////////////////////////////////////////////////////////////////////////////
// The runtime was trying to retrieve dependencies from the tasks dependencies collection when the error occurred, the task may have incorrectly implemented one of the dependency interfaces

//
// MessageId: DTS_E_RETRIEVINGDEPENDENCIES
//
// MessageText:
//
// A failure occurred on task "%1!s!": 0x%2!8.8X! while retrieving dependencies. The runtime was retrieving dependencies from the task's dependencies collection when the error occurred. The task may have incorrectly implemented one of the dependency interfaces.
//
#define DTS_E_RETRIEVINGDEPENDENCIES     ((HRESULT)0xC0024105L)

//
// MessageId: DTS_E_TASKVALIDATIONERROR
//
// MessageText:
//
// There were errors during task validation.
//
#define DTS_E_TASKVALIDATIONERROR        ((HRESULT)0xC0024107L)

////////////////////////////////////////////////////////////////////////////
// Happens when connection string with zero components is set on database connection manager.

//
// MessageId: DTS_E_CONNECTIONSTRINGFORMAT
//
// MessageText:
//
// The connection string format is not valid. It must consist of one or more components of the form X=Y, separated by semicolons. This error occurs when a connection string with zero components is set on database connection manager.
//
#define DTS_E_CONNECTIONSTRINGFORMAT     ((HRESULT)0xC0024108L)

////////////////////////////////////////////////////////////////////////////
// Happens when e.g. InitialCatalog property of a connection contains unquoted semicolon.

//
// MessageId: DTS_E_UNQUOTEDSEMICOLON
//
// MessageText:
//
// The connection string components cannot contain unquoted semicolons. If the value must contain a semicolon, enclose the entire value in quotes. This error occurs when values in the connection string contain unquoted semicolons, such as the InitialCatalog property.
//
#define DTS_E_UNQUOTEDSEMICOLON          ((HRESULT)0xC0024109L)

////////////////////////////////////////////////////////////////////////////
// We refuse to execute if log providers fail to validate.

//
// MessageId: DTS_E_LOGPROVIDERVALIDATIONFAILED
//
// MessageText:
//
// Validation of one or more log providers failed. The package cannot execute. The package does not execute when a log provider fails validation.
//
#define DTS_E_LOGPROVIDERVALIDATIONFAILED ((HRESULT)0xC002410AL)

////////////////////////////////////////////////////////////////////////////
// This happens when a value of the array of values in a variable is invalid (possibly out of range).

//
// MessageId: DTS_E_INVALIDVALUEINARRAY
//
// MessageText:
//
// Invalid value in array.
//
#define DTS_E_INVALIDVALUEINARRAY        ((HRESULT)0xC002410BL)

//
// MessageId: DTS_E_ENUMERATIONELEMENTNOTENUMERABLE
//
// MessageText:
//
// An element of the enumerator returned by the ForEach Enumerator does not implement IEnumerator, contradicting the CollectionEnumerator property of the ForEach Enumerator.
//
#define DTS_E_ENUMERATIONELEMENTNOTENUMERABLE ((HRESULT)0xC002410CL)

////////////////////////////////////////////////////////////////////////////
// The enumerator is empty or the specified index is out of range

//
// MessageId: DTS_E_INVALIDENUMERATORINDEX
//
// MessageText:
//
// The enumerator failed to retrieve element at index "%1!d!".
//
#define DTS_E_INVALIDENUMERATORINDEX     ((HRESULT)0xC002410DL)

//
// MessageId: DTS_E_AXTASK_MISSING_ENTRY_METHOD_NAME
//
// MessageText:
//
// Function not found.
//
#define DTS_E_AXTASK_MISSING_ENTRY_METHOD_NAME ((HRESULT)0xC0029100L)

//
// MessageId: DTS_E_AXTASK_EMPTY_SCRIPT
//
// MessageText:
//
// Function not found.
//
#define DTS_E_AXTASK_EMPTY_SCRIPT        ((HRESULT)0xC0029101L)

//
// MessageId: DTS_E_AXTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// ActiveX Script Task was initiated with a wrong XML element.
//
#define DTS_E_AXTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC0029102L)

//
// MessageId: DTS_E_AXTASK_HANDLER_NOT_FOUND
//
// MessageText:
//
// Handler not found.
//
#define DTS_E_AXTASK_HANDLER_NOT_FOUND   ((HRESULT)0xC0029105L)

//
// MessageId: DTS_E_AXTASKUTIL_ENUMERATE_LANGUAGES_FAILED
//
// MessageText:
//
// An error occurred while attempting to retrieve the scripting languages installed on the system.
//
#define DTS_E_AXTASKUTIL_ENUMERATE_LANGUAGES_FAILED ((HRESULT)0xC0029106L)

//
// MessageId: DTS_E_AXTASKUTIL_SCRIPTHOST_CREATE_FAILED
//
// MessageText:
//
// An error occurred while creating the ActiveX script host. Verify that you have the script host installed properly.
//
#define DTS_E_AXTASKUTIL_SCRIPTHOST_CREATE_FAILED ((HRESULT)0xC0029107L)

//
// MessageId: DTS_E_AXTASKUTIL_SCRIPTHOSTINIT_FAILED
//
// MessageText:
//
// An error occurred while trying to instantiate the script host for the chosen language. Verify that the script language you have chosen is installed on your system.
//
#define DTS_E_AXTASKUTIL_SCRIPTHOSTINIT_FAILED ((HRESULT)0xC0029108L)

//
// MessageId: DTS_E_AXTASKUTIL_ADDVARIABLES_FAILED
//
// MessageText:
//
// An error occurred while adding the SSIS variables to the script host namespace. This might prevent the task from using SSIS variables in the script.
//
#define DTS_E_AXTASKUTIL_ADDVARIABLES_FAILED ((HRESULT)0xC0029109L)

//
// MessageId: DTS_E_AXTASKUTIL_SCRIPT_PARSING_FAILED
//
// MessageText:
//
// A fatal error occurred while trying to parse the script text. Verify that the script engine for the chosen language is installed properly.
//
#define DTS_E_AXTASKUTIL_SCRIPT_PARSING_FAILED ((HRESULT)0xC002910AL)

//
// MessageId: DTS_E_AXTASKUTIL_MSG_BAD_FUNCTION
//
// MessageText:
//
// The function name entered is not valid. Verify that a valid function name has been specified.
//
#define DTS_E_AXTASKUTIL_MSG_BAD_FUNCTION ((HRESULT)0xC002910BL)

//
// MessageId: DTS_E_AXTASKUTIL_EXECUTION_FAILED
//
// MessageText:
//
// An error occurred while executing the script. Verify that the script engine for the selected language is installed properly.
//
#define DTS_E_AXTASKUTIL_EXECUTION_FAILED ((HRESULT)0xC002910CL)

//
// MessageId: DTS_E_AXTASKUTIL_ADDTYPELIB_FAILED
//
// MessageText:
//
// An error occurred while adding the managed type library to the script host. Verify that the DTS 2000 runtime is installed.
//
#define DTS_E_AXTASKUTIL_ADDTYPELIB_FAILED ((HRESULT)0xC002910DL)

//
// MessageId: DTS_E_BITASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// Bulk Insert Task was initiated with a wrong XML element.
//
#define DTS_E_BITASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC002910EL)

//
// MessageId: DTS_E_BITASK_DATA_FILE_NOT_SPECIFIED
//
// MessageText:
//
// Data file name not specified.
//
#define DTS_E_BITASK_DATA_FILE_NOT_SPECIFIED ((HRESULT)0xC002910FL)

//
// MessageId: DTS_E_BITASK_HANDLER_NOT_FOUND
//
// MessageText:
//
// Handler not found.
//
#define DTS_E_BITASK_HANDLER_NOT_FOUND   ((HRESULT)0xC0029110L)

//
// MessageId: DTS_E_BITASK_CANNOT_ACQUIRE_CONNECTION
//
// MessageText:
//
// Failed to acquire the specified connection: "%1!s!".
//
#define DTS_E_BITASK_CANNOT_ACQUIRE_CONNECTION ((HRESULT)0xC0029111L)

//
// MessageId: DTS_E_BITASK_NO_CONNECTION_MANAGER_SPECIFIED
//
// MessageText:
//
// Attempt to obtain the Connection Manager failed.
//
#define DTS_E_BITASK_NO_CONNECTION_MANAGER_SPECIFIED ((HRESULT)0xC0029112L)

//
// MessageId: DTS_E_BITASK_INVALID_CONNECTION
//
// MessageText:
//
// The connection is not valid.
//
#define DTS_E_BITASK_INVALID_CONNECTION  ((HRESULT)0xC0029113L)

//
// MessageId: DTS_E_BITASK_NULL_CONNECTION
//
// MessageText:
//
// The connection is null.
//
#define DTS_E_BITASK_NULL_CONNECTION     ((HRESULT)0xC0029114L)

//
// MessageId: DTS_E_BITASK_EXECUTE_FAILED
//
// MessageText:
//
// Execution failed.
//
#define DTS_E_BITASK_EXECUTE_FAILED      ((HRESULT)0xC0029115L)

//
// MessageId: DTS_E_BITASK_CANNOT_RETRIEVE_TABLES
//
// MessageText:
//
// An error occurred while retrieving the tables from the database.
//
#define DTS_E_BITASK_CANNOT_RETRIEVE_TABLES ((HRESULT)0xC0029116L)

//
// MessageId: DTS_E_BITASK_CANNOT_RETRIEVE_COLUMN_INFO
//
// MessageText:
//
// An error occurred while retrieving the columns of the table.
//
#define DTS_E_BITASK_CANNOT_RETRIEVE_COLUMN_INFO ((HRESULT)0xC0029117L)

//
// MessageId: DTS_E_BITASK_ERROR_IN_DB_OPERATION
//
// MessageText:
//
// An error occurred in the database operation.
//
#define DTS_E_BITASK_ERROR_IN_DB_OPERATION ((HRESULT)0xC0029118L)

//
// MessageId: DTS_E_BITASK_INVALIDSOURCECONNECTIONNAME
//
// MessageText:
//
// The specified connection "%1!s!" is either not valid, or points to an invalid object. To continue, specify a valid connection.
//
#define DTS_E_BITASK_INVALIDSOURCECONNECTIONNAME ((HRESULT)0xC0029119L)

//
// MessageId: DTS_E_BITASK_INVALIDDESTCONNECTIONNAME
//
// MessageText:
//
// The destination connection specified is not valid. Supply a valid connection to continue.
//
#define DTS_E_BITASK_INVALIDDESTCONNECTIONNAME ((HRESULT)0xC002911AL)

//
// MessageId: DTS_E_BITASK_DESTINATION_TABLE_NOT_SPECIFIED
//
// MessageText:
//
// You must specify a table name to continue.
//
#define DTS_E_BITASK_DESTINATION_TABLE_NOT_SPECIFIED ((HRESULT)0xC002911BL)

//
// MessageId: DTS_E_BITASK_ERROR_IN_LOAD_FROM_XML
//
// MessageText:
//
// Error occurred in LoadFromXML at the tag "%1!s!".
//
#define DTS_E_BITASK_ERROR_IN_LOAD_FROM_XML ((HRESULT)0xC002911CL)

//
// MessageId: DTS_E_BITASK_ERROR_IN_SAVE_TO_XML
//
// MessageText:
//
// Error occurred in SaveToXML at the tag "%1!s!".
//
#define DTS_E_BITASK_ERROR_IN_SAVE_TO_XML ((HRESULT)0xC002911DL)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_INVALID_CONNECTION
//
// MessageText:
//
// The connection is not valid.
//
#define DTS_E_BITASKUNMANCONNECTION_INVALID_CONNECTION ((HRESULT)0xC002911EL)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_EXECUTE_FAILED
//
// MessageText:
//
// Execution failed.
//
#define DTS_E_BITASKUNMANCONNECTION_EXECUTE_FAILED ((HRESULT)0xC002911FL)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_CANNOT_RETRIEVE_TABLES
//
// MessageText:
//
// Error occurred while retrieving the tables from the database.
//
#define DTS_E_BITASKUNMANCONNECTION_CANNOT_RETRIEVE_TABLES ((HRESULT)0xC0029120L)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_CANNOT_RETRIEVE_COLUMN_INFO
//
// MessageText:
//
// Error occurred while retrieving the columns of the table.
//
#define DTS_E_BITASKUNMANCONNECTION_CANNOT_RETRIEVE_COLUMN_INFO ((HRESULT)0xC0029121L)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_CANNOT_OPEN_FILE
//
// MessageText:
//
// Error occurred while trying to open the data file.
//
#define DTS_E_BITASKUNMANCONNECTION_CANNOT_OPEN_FILE ((HRESULT)0xC0029122L)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_OEM_CONVERSION_FAILED
//
// MessageText:
//
// Cannot convert the input OEM file to the specified format.
//
#define DTS_E_BITASKUNMANCONNECTION_OEM_CONVERSION_FAILED ((HRESULT)0xC0029123L)

//
// MessageId: DTS_E_BITASKUNMANCONNECTION_ERROR_IN_DB_OPERATION
//
// MessageText:
//
// Error in database operation.
//
#define DTS_E_BITASKUNMANCONNECTION_ERROR_IN_DB_OPERATION ((HRESULT)0xC0029124L)

//
// MessageId: DTS_E_DTSPROCTASK_NOCONNECTIONSPECIFIED
//
// MessageText:
//
// No connection manager specified.
//
#define DTS_E_DTSPROCTASK_NOCONNECTIONSPECIFIED ((HRESULT)0xC0029125L)

//
// MessageId: DTS_E_DTSPROCTASK_CONNECTIONMANAGERNOTOLAP
//
// MessageText:
//
// Connection "%1!s!" is not an Analysis Services connection.
//
#define DTS_E_DTSPROCTASK_CONNECTIONMANAGERNOTOLAP ((HRESULT)0xC0029126L)

//
// MessageId: DTS_E_DTSPROCTASK_UNABLETOLOCATECONNECTIONMANAGER
//
// MessageText:
//
// Unable to locate connection "%1!s!".
//
#define DTS_E_DTSPROCTASK_UNABLETOLOCATECONNECTIONMANAGER ((HRESULT)0xC0029127L)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDTASKDATANODEEXE
//
// MessageText:
//
// Analysis Services Execute DDL task received an invalid task data node.
//
#define DTS_E_DTSPROCTASK_INVALIDTASKDATANODEEXE ((HRESULT)0xC0029128L)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDTASKDATANODEPROC
//
// MessageText:
//
// Analysis Services Processing task received an invalid task data node.
//
#define DTS_E_DTSPROCTASK_INVALIDTASKDATANODEPROC ((HRESULT)0xC0029129L)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDDDL
//
// MessageText:
//
// The DDL is not valid.
//
#define DTS_E_DTSPROCTASK_INVALIDDDL     ((HRESULT)0xC002912AL)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDDDLPROCESSINGCOMMANDS
//
// MessageText:
//
// The DDL found in ProcessingCommands is not valid.
//
#define DTS_E_DTSPROCTASK_INVALIDDDLPROCESSINGCOMMANDS ((HRESULT)0xC002912BL)

//
// MessageId: DTS_E_DTSPROCTASK_CANNOTWRITEINAREADONLYVARIABLE
//
// MessageText:
//
// The Execution result cannot be saved in a read-only variable.
//
#define DTS_E_DTSPROCTASK_CANNOTWRITEINAREADONLYVARIABLE ((HRESULT)0xC002912CL)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDVARIABLE
//
// MessageText:
//
// Variable "%1!s!" it's not defined.
//
#define DTS_E_DTSPROCTASK_INVALIDVARIABLE ((HRESULT)0xC002912DL)

//
// MessageId: DTS_E_DTSPROCTASK_CONNECTIONNOTFOUND
//
// MessageText:
//
// Connection Manager "%1!s!" it's not defined.
//
#define DTS_E_DTSPROCTASK_CONNECTIONNOTFOUND ((HRESULT)0xC002912EL)

//
// MessageId: DTS_E_DTSPROCTASK_INVALIDCONNECTION
//
// MessageText:
//
// Connection Manager "%1!s!" it's not a FILE Connection Manager.
//
#define DTS_E_DTSPROCTASK_INVALIDCONNECTION ((HRESULT)0xC002912FL)

//
// MessageId: DTS_E_DTSPROCTASK_NONEXISTENTATTRIBUTE
//
// MessageText:
//
// "%1!s!" was not found during deserialization.
//
#define DTS_E_DTSPROCTASK_NONEXISTENTATTRIBUTE ((HRESULT)0xC0029130L)

//
// MessageId: DTS_E_DTSPROCTASK_TRACEHASBEENSTOPPED
//
// MessageText:
//
// The trace has been stopped due to an exception.
//
#define DTS_E_DTSPROCTASK_TRACEHASBEENSTOPPED ((HRESULT)0xC0029131L)

//
// MessageId: DTS_E_DTSPROCTASK_DDLEXECUTIONFAILED
//
// MessageText:
//
// Execution of DDL failed.
//
#define DTS_E_DTSPROCTASK_DDLEXECUTIONFAILED ((HRESULT)0xC0029132L)

//
// MessageId: DTS_E_DTSPROCTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// There is no file associated with connection "%1!s!".
//
#define DTS_E_DTSPROCTASK_FILEDOESNOTEXIST ((HRESULT)0xC0029133L)

//
// MessageId: DTS_E_DTSPROCTASK_VARIABLENOTDEFINED
//
// MessageText:
//
// Variable "%1!s!" is not defined.
//
#define DTS_E_DTSPROCTASK_VARIABLENOTDEFINED ((HRESULT)0xC0029134L)

//
// MessageId: DTS_E_DTSPROCTASK_FILECONNECTIONNOTDEFINED
//
// MessageText:
//
// File connection "%1!s!" is not defined.
//
#define DTS_E_DTSPROCTASK_FILECONNECTIONNOTDEFINED ((HRESULT)0xC0029135L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// Execute DTS 2000 Package task is initiated with a wrong XML element.
//
#define DTS_E_EXEC2000PKGTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC0029136L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_HANDLER_NOT_FOUND
//
// MessageText:
//
// Handler not found.
//
#define DTS_E_EXEC2000PKGTASK_HANDLER_NOT_FOUND ((HRESULT)0xC0029137L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_PACKAGE_NAME_NOT_SPECIFIED
//
// MessageText:
//
// Package name is not specified.
//
#define DTS_E_EXEC2000PKGTASK_PACKAGE_NAME_NOT_SPECIFIED ((HRESULT)0xC0029138L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_PACKAGE_ID_NOT_SPECIFIED
//
// MessageText:
//
// Package ID is not specified.
//
#define DTS_E_EXEC2000PKGTASK_PACKAGE_ID_NOT_SPECIFIED ((HRESULT)0xC0029139L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_PACKAGE_VERSIONGUID_NOT_SPECIFIED
//
// MessageText:
//
// Package version GUID is not specified.
//
#define DTS_E_EXEC2000PKGTASK_PACKAGE_VERSIONGUID_NOT_SPECIFIED ((HRESULT)0xC002913AL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_SQLSERVER_NOT_SPECIFIED
//
// MessageText:
//
// SQL Server is not specified.
//
#define DTS_E_EXEC2000PKGTASK_SQLSERVER_NOT_SPECIFIED ((HRESULT)0xC002913BL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_SQL_USERNAME_NOT_SPECIFIED
//
// MessageText:
//
// SQL Server user name not specified.
//
#define DTS_E_EXEC2000PKGTASK_SQL_USERNAME_NOT_SPECIFIED ((HRESULT)0xC002913CL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_FILE_NAME_NOT_SPECIFIED
//
// MessageText:
//
// Storage file name not specified.
//
#define DTS_E_EXEC2000PKGTASK_FILE_NAME_NOT_SPECIFIED ((HRESULT)0xC002913DL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_DTS2000CANTBEEMPTY
//
// MessageText:
//
// The DTS 2000 package property is empty.
//
#define DTS_E_EXEC2000PKGTASK_DTS2000CANTBEEMPTY ((HRESULT)0xC002913EL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_ERROR_IN_PACKAGE_EXECUTE
//
// MessageText:
//
// An error occurred while executing the DTS 2000 package.
//
#define DTS_E_EXEC2000PKGTASK_ERROR_IN_PACKAGE_EXECUTE ((HRESULT)0xC002913FL)

//
// MessageId: DTS_E_EXEC2000PKGTASK_SQLSERVER_NOT_AVAILABLE_NETWORK
//
// MessageText:
//
// Cannot load the available SQL Servers from the network. Check the network connection.
//
#define DTS_E_EXEC2000PKGTASK_SQLSERVER_NOT_AVAILABLE_NETWORK ((HRESULT)0xC0029140L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_DATATYPE_NULL
//
// MessageText:
//
// The data type cannot be null. Please specify the correct data type to use for validating the value.
//
#define DTS_E_EXEC2000PKGTASK_DATATYPE_NULL ((HRESULT)0xC0029141L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_NULL_VALUE
//
// MessageText:
//
// Cannot validate a null against any data type.
//
#define DTS_E_EXEC2000PKGTASK_NULL_VALUE ((HRESULT)0xC0029142L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_NULL_VALUE_ARGUMENT
//
// MessageText:
//
// A required argument is null.
//
#define DTS_E_EXEC2000PKGTASK_NULL_VALUE_ARGUMENT ((HRESULT)0xC0029143L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_CLS_NOT_REGISTRED_EXCEPTION
//
// MessageText:
//
// To execute the DTS 2000 Package task, start SQL Server Setup and use the Advanced button from the Components to Install page to select Legacy Components.
//
#define DTS_E_EXEC2000PKGTASK_CLS_NOT_REGISTRED_EXCEPTION ((HRESULT)0xC0029144L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_NOT_PRIMITIVE_TYPE
//
// MessageText:
//
// "%1!s!" is not a value type.
//
#define DTS_E_EXEC2000PKGTASK_NOT_PRIMITIVE_TYPE ((HRESULT)0xC0029145L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_CONVERT_FAILED
//
// MessageText:
//
// Could not convert "%1!s!" to "%2!s!".
//
#define DTS_E_EXEC2000PKGTASK_CONVERT_FAILED ((HRESULT)0xC0029146L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_ERROR_IN_VALIDATE
//
// MessageText:
//
// Could not validate "%1!s!" against "%2!s!".
//
#define DTS_E_EXEC2000PKGTASK_ERROR_IN_VALIDATE ((HRESULT)0xC0029147L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_ERROR_IN_LOAD_FROM_XML
//
// MessageText:
//
// Error occurred in LoadFromXML at the tag "%1!s!".
//
#define DTS_E_EXEC2000PKGTASK_ERROR_IN_LOAD_FROM_XML ((HRESULT)0xC0029148L)

//
// MessageId: DTS_E_EXEC2000PKGTASK_ERROR_IN_SAVE_TO_XML
//
// MessageText:
//
// Error occurred in SaveToXML at the tag "%1!s!".
//
#define DTS_E_EXEC2000PKGTASK_ERROR_IN_SAVE_TO_XML ((HRESULT)0xC0029149L)

//
// MessageId: DTS_E_EXECPROCTASK_INVALIDTIMEOUT
//
// MessageText:
//
// The time-out value provided is not valid. Specify the number of seconds that the task allows the process to run. The minimum time-out is 0, which indicates that no time-out value is used and the process runs to completion or until an error occurs. The maximum time-out is 2147483 (((2^31) - 1)/1000).
//
#define DTS_E_EXECPROCTASK_INVALIDTIMEOUT ((HRESULT)0xC002914AL)

//
// MessageId: DTS_E_EXECPROCTASK_CANTREDIRECTIO
//
// MessageText:
//
// Cannot redirect streams if the process can continue executing beyond the lifetime of the task.
//
#define DTS_E_EXECPROCTASK_CANTREDIRECTIO ((HRESULT)0xC002914BL)

//
// MessageId: DTS_E_EXECPROCTASK_PROCESSHASTIMEDOUT
//
// MessageText:
//
// The process timed out.
//
#define DTS_E_EXECPROCTASK_PROCESSHASTIMEDOUT ((HRESULT)0xC002914CL)

//
// MessageId: DTS_E_EXECPROCTASK_EXECUTABLENOTSPECIFIED
//
// MessageText:
//
// The executable is not specified.
//
#define DTS_E_EXECPROCTASK_EXECUTABLENOTSPECIFIED ((HRESULT)0xC002914DL)

//
// MessageId: DTS_E_EXECPROCTASK_STDOUTVARREADONLY
//
// MessageText:
//
// The standard out variable is read-only.
//
#define DTS_E_EXECPROCTASK_STDOUTVARREADONLY ((HRESULT)0xC002914EL)

//
// MessageId: DTS_E_EXECPROCTASK_STDERRVARREADONLY
//
// MessageText:
//
// The standard error variable is read-only.
//
#define DTS_E_EXECPROCTASK_STDERRVARREADONLY ((HRESULT)0xC002914FL)

//
// MessageId: DTS_E_EXECPROCTASK_RECEIVEDINVALIDTASKDATANODE
//
// MessageText:
//
// The Execute Process task received a task data node that is not valid.
//
#define DTS_E_EXECPROCTASK_RECEIVEDINVALIDTASKDATANODE ((HRESULT)0xC0029150L)

//
// MessageId: DTS_E_EXECPROCTASK_PROCESSEXITCODEEXCEEDS
//
// MessageText:
//
// In Executing "%2!s!" "%3!s!" at "%1!s!", The process exit code was "%4!s!" while the expected was "%5!s!".
//
#define DTS_E_EXECPROCTASK_PROCESSEXITCODEEXCEEDS ((HRESULT)0xC0029151L)

//
// MessageId: DTS_E_EXECPROCTASK_WORKINGDIRDOESNOTEXIST
//
// MessageText:
//
// The directory "%1!s!" does not exist.
//
#define DTS_E_EXECPROCTASK_WORKINGDIRDOESNOTEXIST ((HRESULT)0xC0029152L)

//
// MessageId: DTS_E_EXECPROCTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File/Process "%1!s!" does not exist in directory "%2!s!".
//
#define DTS_E_EXECPROCTASK_FILEDOESNOTEXIST ((HRESULT)0xC0029153L)

//
// MessageId: DTS_E_EXECPROCTASK_FILENOTINPATH
//
// MessageText:
//
// File/Process "%1!s!" is not in path.
//
#define DTS_E_EXECPROCTASK_FILENOTINPATH ((HRESULT)0xC0029154L)

//
// MessageId: DTS_E_EXECPROCTASK_WORKINGDIRECTORYDOESNOTEXIST
//
// MessageText:
//
// Working Directory "%1!s!" does not exist.
//
#define DTS_E_EXECPROCTASK_WORKINGDIRECTORYDOESNOTEXIST ((HRESULT)0xC0029156L)

//
// MessageId: DTS_E_EXECPROCTASK_ERROREXECUTIONVALUE
//
// MessageText:
//
// The process exited with return code "%1!s!". However, "%2!s!" was expected.
//
#define DTS_E_EXECPROCTASK_ERROREXECUTIONVALUE ((HRESULT)0xC0029157L)

//
// MessageId: DTS_E_FSTASK_SYNCFAILED
//
// MessageText:
//
// Synchronization object failed.
//
#define DTS_E_FSTASK_SYNCFAILED          ((HRESULT)0xC0029158L)

//
// MessageId: DTS_E_FSTASK_INVALIDDATA
//
// MessageText:
//
// The File System task received an invalid task data node.
//
#define DTS_E_FSTASK_INVALIDDATA         ((HRESULT)0xC0029159L)

//
// MessageId: DTS_E_FSTASK_DIRECTORYEXISTS
//
// MessageText:
//
// The Directory already exists.
//
#define DTS_E_FSTASK_DIRECTORYEXISTS     ((HRESULT)0xC002915AL)

//
// MessageId: DTS_E_FSTASK_PATHNOTVALID
//
// MessageText:
//
// "%1!s!" is not valid on operation type "%2!s!".
//
#define DTS_E_FSTASK_PATHNOTVALID        ((HRESULT)0xC002915BL)

//
// MessageId: DTS_E_FSTASK_DESTINATIONNOTSET
//
// MessageText:
//
// Destination property of operation "%1!s!" not set.
//
#define DTS_E_FSTASK_DESTINATIONNOTSET   ((HRESULT)0xC002915CL)

//
// MessageId: DTS_E_FSTASK_SOURCENOTSET
//
// MessageText:
//
// Source property of operation "%1!s!" not set.
//
#define DTS_E_FSTASK_SOURCENOTSET        ((HRESULT)0xC002915DL)

//
// MessageId: DTS_E_FSTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Type of Connection "%1!s!" is not a file.
//
#define DTS_E_FSTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC002915EL)

//
// MessageId: DTS_E_FSTASK_VARIABLEDOESNTEXIST
//
// MessageText:
//
// Variable "%1!s!" does not exist.
//
#define DTS_E_FSTASK_VARIABLEDOESNTEXIST ((HRESULT)0xC002915FL)

//
// MessageId: DTS_E_FSTASK_VARIABLENOTASTRING
//
// MessageText:
//
// Variable "%1!s!" is not a string.
//
#define DTS_E_FSTASK_VARIABLENOTASTRING  ((HRESULT)0xC0029160L)

//
// MessageId: DTS_E_FSTASK_NOATTRIBUTESET
//
// MessageText:
//
// All file attributes for the Set Attributes operation have been configured as No Change. At least one file attribute must be set to True or False.
//
#define DTS_E_FSTASK_NOATTRIBUTESET      ((HRESULT)0xC0029162L)

//
// MessageId: DTS_E_FSTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File or directory "%1!s!" represented by connection "%2!s!" does not exist.
//
#define DTS_E_FSTASK_FILEDOESNOTEXIST    ((HRESULT)0xC0029163L)

//
// MessageId: DTS_E_FSTASK_DESTCONNUSAGETYPEINVALID
//
// MessageText:
//
// The destination file connection manager "%1!s!" has an invalid usage type: "%2!s!".
//
#define DTS_E_FSTASK_DESTCONNUSAGETYPEINVALID ((HRESULT)0xC0029165L)

//
// MessageId: DTS_E_FSTASK_SRCCONNUSAGETYPEINVALID
//
// MessageText:
//
// The source file connection manager "%1!s!" has an invalid usage type "%2!s!".
//
#define DTS_E_FSTASK_SRCCONNUSAGETYPEINVALID ((HRESULT)0xC0029166L)

//
// MessageId: DTS_E_FSTASK_LOGENTRYGETTINGFILEOPERATION
//
// MessageText:
//
// FileSystemOperation
//
#define DTS_E_FSTASK_LOGENTRYGETTINGFILEOPERATION ((HRESULT)0xC0029167L)

//
// MessageId: DTS_E_FSTASK_LOGENTRYGETTINGFILEOPERATIONDESC
//
// MessageText:
//
// Provides information regarding File System operations.
//
#define DTS_E_FSTASK_LOGENTRYGETTINGFILEOPERATIONDESC ((HRESULT)0xC0029168L)

//
// MessageId: DTS_E_FSTASK_TASKDISPLAYNAME
//
// MessageText:
//
// File System Task
//
#define DTS_E_FSTASK_TASKDISPLAYNAME     ((HRESULT)0xC0029169L)

//
// MessageId: DTS_E_FSTASK_TASKDESCRIPTION
//
// MessageText:
//
// Perform file system operations, such as copying and deleting files.
//
#define DTS_E_FSTASK_TASKDESCRIPTION     ((HRESULT)0xC002916AL)

//
// MessageId: DTS_E_FTPTASK_SYNCOBJFAILED
//
// MessageText:
//
// Synchronization object failed.
//
#define DTS_E_FTPTASK_SYNCOBJFAILED      ((HRESULT)0xC002916BL)

//
// MessageId: DTS_E_FTPTASK_UNABLETOOBTAINFILELIST
//
// MessageText:
//
// Unable to obtain the file list.
//
#define DTS_E_FTPTASK_UNABLETOOBTAINFILELIST ((HRESULT)0xC002916CL)

//
// MessageId: DTS_E_FTPTASK_LOCALPATHEMPTY
//
// MessageText:
//
// The local path is empty.
//
#define DTS_E_FTPTASK_LOCALPATHEMPTY     ((HRESULT)0xC002916DL)

//
// MessageId: DTS_E_FTPTASK_REMOTEPATHEMPTY
//
// MessageText:
//
// The remote path is empty.
//
#define DTS_E_FTPTASK_REMOTEPATHEMPTY    ((HRESULT)0xC002916EL)

//
// MessageId: DTS_E_FTPTASK_LOCALVARIBALEEMPTY
//
// MessageText:
//
// The local variable is empty.
//
#define DTS_E_FTPTASK_LOCALVARIBALEEMPTY ((HRESULT)0xC002916FL)

//
// MessageId: DTS_E_FTPTASK_REMOTEVARIBALEEMPTY
//
// MessageText:
//
// The remote variable is empty.
//
#define DTS_E_FTPTASK_REMOTEVARIBALEEMPTY ((HRESULT)0xC0029170L)

//
// MessageId: DTS_E_FTPTASK_FTPRCVDINVLDDATANODE
//
// MessageText:
//
// The FTP task received an invalid task data node.
//
#define DTS_E_FTPTASK_FTPRCVDINVLDDATANODE ((HRESULT)0xC0029171L)

//
// MessageId: DTS_E_FTPTASK_CONNECTION_NAME_NULL
//
// MessageText:
//
// The connection is empty. Verify that a valid FTP connection is provided.
//
#define DTS_E_FTPTASK_CONNECTION_NAME_NULL ((HRESULT)0xC0029172L)

//
// MessageId: DTS_E_FTPTASK_CONNECTION_NOT_FTP
//
// MessageText:
//
// The connection specified is not an FTP connection. Verify that a valid FTP connection is provided.
//
#define DTS_E_FTPTASK_CONNECTION_NOT_FTP ((HRESULT)0xC0029173L)

//
// MessageId: DTS_E_FTPTASK__INITIALIZATION_WITH_NULL_XML_ELEMENT
//
// MessageText:
//
// Cannot initialize the task with a null XML element.
//
#define DTS_E_FTPTASK__INITIALIZATION_WITH_NULL_XML_ELEMENT ((HRESULT)0xC0029175L)

//
// MessageId: DTS_E_FTPTASK_SAVE_TO_NULL_XML_ELEMENT
//
// MessageText:
//
// Cannot save the task to a null XML document.
//
#define DTS_E_FTPTASK_SAVE_TO_NULL_XML_ELEMENT ((HRESULT)0xC0029176L)

//
// MessageId: DTS_E_FTPTASK_ERROR_IN_LOAD_FROM_XML
//
// MessageText:
//
// Error occurred in LoadFromXML at the tag "%1!s!".
//
#define DTS_E_FTPTASK_ERROR_IN_LOAD_FROM_XML ((HRESULT)0xC0029177L)

//
// MessageId: DTS_E_FTPTASK_NOFILESATLOCATION
//
// MessageText:
//
// There are no files at "%1!s!".
//
#define DTS_E_FTPTASK_NOFILESATLOCATION  ((HRESULT)0xC0029178L)

//
// MessageId: DTS_E_FTPTASK_LOCALVARIABLEISEMPTY
//
// MessageText:
//
// The variable "%1!s!" is empty.
//
#define DTS_E_FTPTASK_LOCALVARIABLEISEMPTY ((HRESULT)0xC0029179L)

//
// MessageId: DTS_E_FTPTASK_REMOTEVARIABLEISEMPTY
//
// MessageText:
//
// The variable "%1!s!" is empty.
//
#define DTS_E_FTPTASK_REMOTEVARIABLEISEMPTY ((HRESULT)0xC002917AL)

//
// MessageId: DTS_E_FTPTASK_NOFILESINCONNMGR
//
// MessageText:
//
// The File "%1!s!" doesn't contain file path(s).
//
#define DTS_E_FTPTASK_NOFILESINCONNMGR   ((HRESULT)0xC002917BL)

//
// MessageId: DTS_E_FTPTASK_NOFILEPATHSINLOCALVAR
//
// MessageText:
//
// The variable "%1!s!" doesn't contain file path(s).
//
#define DTS_E_FTPTASK_NOFILEPATHSINLOCALVAR ((HRESULT)0xC002917CL)

//
// MessageId: DTS_E_FTPTASK_VARIABLENOTASTRING
//
// MessageText:
//
// Variable "%1!s!" is not a string.
//
#define DTS_E_FTPTASK_VARIABLENOTASTRING ((HRESULT)0xC002917DL)

//
// MessageId: DTS_E_FTPTASK_VARIABLENOTFOUND
//
// MessageText:
//
// Variable "%1!s!" does not exist.
//
#define DTS_E_FTPTASK_VARIABLENOTFOUND   ((HRESULT)0xC002917EL)

//
// MessageId: DTS_E_FTPTASK_INVALIDPATHONOPERATION
//
// MessageText:
//
// Invalid path on operation "%1!s!".
//
#define DTS_E_FTPTASK_INVALIDPATHONOPERATION ((HRESULT)0xC002917FL)

//
// MessageId: DTS_E_FTPTASK_DIRECTORYEXISTS
//
// MessageText:
//
// "%1!s!" already exists.
//
#define DTS_E_FTPTASK_DIRECTORYEXISTS    ((HRESULT)0xC0029180L)

//
// MessageId: DTS_E_FTPTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Type of Connection "%1!s!" is Not a file.
//
#define DTS_E_FTPTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC0029182L)

//
// MessageId: DTS_E_FTPTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File represented by "%1!s!" does not exist.
//
#define DTS_E_FTPTASK_FILEDOESNOTEXIST   ((HRESULT)0xC0029183L)

//
// MessageId: DTS_E_FTPTASK_INVALIDDIRECTORY
//
// MessageText:
//
// Directory is not specified in the variable "%1!s!".
//
#define DTS_E_FTPTASK_INVALIDDIRECTORY   ((HRESULT)0xC0029184L)

//
// MessageId: DTS_E_FTPTASK_NOFILESFOUND
//
// MessageText:
//
// No files found in "%1!s!".
//
#define DTS_E_FTPTASK_NOFILESFOUND       ((HRESULT)0xC0029185L)

//
// MessageId: DTS_E_FTPTASK_NODIRECTORYPATHINCONMGR
//
// MessageText:
//
// Directory is not specified in the file connection manager "%1!s!".
//
#define DTS_E_FTPTASK_NODIRECTORYPATHINCONMGR ((HRESULT)0xC0029186L)

//
// MessageId: DTS_E_FTPTASK_UNABLETODELETELOCALEFILE
//
// MessageText:
//
// Unable to delete local file "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETODELETELOCALEFILE ((HRESULT)0xC0029187L)

//
// MessageId: DTS_E_FTPTASK_UNABLETOREMOVELOCALDIRECTORY
//
// MessageText:
//
// Unable to remove local directory "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOREMOVELOCALDIRECTORY ((HRESULT)0xC0029188L)

//
// MessageId: DTS_E_FTPTASK_UNABLETOCREATELOCALDIRECTORY
//
// MessageText:
//
// Unable to create local directory "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOCREATELOCALDIRECTORY ((HRESULT)0xC0029189L)

//
// MessageId: DTS_E_FTPTASK_UNABLETORECEIVEFILES
//
// MessageText:
//
// Unable to receive files using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETORECEIVEFILES ((HRESULT)0xC002918AL)

//
// MessageId: DTS_E_FTPTASK_UNABLETOSENDFILES
//
// MessageText:
//
// Unable to send files using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOSENDFILES  ((HRESULT)0xC002918BL)

//
// MessageId: DTS_E_FTPTASK_UNABLETOMAKEDIRREMOTE
//
// MessageText:
//
// Unable to create remote directory using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOMAKEDIRREMOTE ((HRESULT)0xC002918CL)

//
// MessageId: DTS_E_FTPTASK_UNABLETOREMOVEDIRREMOTE
//
// MessageText:
//
// Unable to remove remote directory using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOREMOVEDIRREMOTE ((HRESULT)0xC002918DL)

//
// MessageId: DTS_E_FTPTASK_UNABLETODELETEREMOTEFILES
//
// MessageText:
//
// Unable to delete remote files using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETODELETEREMOTEFILES ((HRESULT)0xC002918EL)

//
// MessageId: DTS_E_FTPTASK_UNABLETOCONNECTTOSERVER
//
// MessageText:
//
// Unable to connect to FTP server using "%1!s!".
//
#define DTS_E_FTPTASK_UNABLETOCONNECTTOSERVER ((HRESULT)0xC002918FL)

//
// MessageId: DTS_E_FTPTASK_INVALIDVARIABLEVALUE
//
// MessageText:
//
// Variable "%1!s!" doesn't start with "/".
//
#define DTS_E_FTPTASK_INVALIDVARIABLEVALUE ((HRESULT)0xC0029190L)

//
// MessageId: DTS_E_FTPTASK_INVALIDREMOTEPATH
//
// MessageText:
//
// Remote path "%1!s!" doesn't start with "/".
//
#define DTS_E_FTPTASK_INVALIDREMOTEPATH  ((HRESULT)0xC0029191L)

//
// MessageId: DTS_E_DTS_E_FTPTASK_CANNOT_ACQUIRE_CONNECTION
//
// MessageText:
//
// There was an error acquiring the FTP connection. Please check if you have specified a valid connection type "%1!s!".
//
#define DTS_E_DTS_E_FTPTASK_CANNOT_ACQUIRE_CONNECTION ((HRESULT)0xC0029192L)

//
// MessageId: DTS_E_MSGQTASKUTIL_CERT_OPEN_STORE_FAILED
//
// MessageText:
//
// Opening the certificate store failed.
//
#define DTS_E_MSGQTASKUTIL_CERT_OPEN_STORE_FAILED ((HRESULT)0xC0029193L)

//
// MessageId: DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_DISPLAY_NAME
//
// MessageText:
//
// An error occurred while retrieving the display name of the certificate.
//
#define DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_DISPLAY_NAME ((HRESULT)0xC0029194L)

//
// MessageId: DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_ISSUER_NAME
//
// MessageText:
//
// An error occurred while retrieving the issuer name of the certificate.
//
#define DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_ISSUER_NAME ((HRESULT)0xC0029195L)

//
// MessageId: DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_FRIENDLY_NAME
//
// MessageText:
//
// An error occurred while retrieving the friendly name of the certificate.
//
#define DTS_E_MSGQTASKUTIL_CERT_FAILED_GETTING_FRIENDLY_NAME ((HRESULT)0xC0029196L)

//
// MessageId: DTS_E_MSMQTASK_NO_CONNECTION
//
// MessageText:
//
// The MSMQ connection name is not set.
//
#define DTS_E_MSMQTASK_NO_CONNECTION     ((HRESULT)0xC0029197L)

//
// MessageId: DTS_E_MSMQTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// Task was initialized with the wrong XML element.
//
#define DTS_E_MSMQTASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC0029198L)

//
// MessageId: DTS_E_MSMQTASK_DATA_FILE_NAME_EMPTY
//
// MessageText:
//
// Data file name is empty.
//
#define DTS_E_MSMQTASK_DATA_FILE_NAME_EMPTY ((HRESULT)0xC0029199L)

//
// MessageId: DTS_E_MSMQTASK_DATA_FILE_SAVE_NAME_EMPTY
//
// MessageText:
//
// The name specified for the data file to save is empty.
//
#define DTS_E_MSMQTASK_DATA_FILE_SAVE_NAME_EMPTY ((HRESULT)0xC002919AL)

//
// MessageId: DTS_E_MSMQTASK_DATA_FILE_SIZE_ERROR
//
// MessageText:
//
// File size should be less than 4 MB.
//
#define DTS_E_MSMQTASK_DATA_FILE_SIZE_ERROR ((HRESULT)0xC002919BL)

//
// MessageId: DTS_E_MSMQTASK_DATA_FILE_SAVE_FAILED
//
// MessageText:
//
// Saving the data file failed.
//
#define DTS_E_MSMQTASK_DATA_FILE_SAVE_FAILED ((HRESULT)0xC002919CL)

//
// MessageId: DTS_E_MSMQTASK_STRING_COMPARE_VALUE_MISSING
//
// MessageText:
//
// String filter value is empty.
//
#define DTS_E_MSMQTASK_STRING_COMPARE_VALUE_MISSING ((HRESULT)0xC002919DL)

//
// MessageId: DTS_E_MSMQTASK_INVALID_QUEUE_PATH
//
// MessageText:
//
// Queue path is not valid.
//
#define DTS_E_MSMQTASK_INVALID_QUEUE_PATH ((HRESULT)0xC002919EL)

//
// MessageId: DTS_E_MSMQTASK_NOT_TRANSACTIONAL
//
// MessageText:
//
// The message queue task does not support enlisting in distributed transactions.
//
#define DTS_E_MSMQTASK_NOT_TRANSACTIONAL ((HRESULT)0xC002919FL)

//
// MessageId: DTS_E_MSMQTASK_INVALID_MESSAGE_TYPE
//
// MessageText:
//
// The message type is not valid.
//
#define DTS_E_MSMQTASK_INVALID_MESSAGE_TYPE ((HRESULT)0xC00291A0L)

//
// MessageId: DTS_E_MSMQTASK_TASK_TIMEOUT
//
// MessageText:
//
// The message queue timed out. No message has been received.
//
#define DTS_E_MSMQTASK_TASK_TIMEOUT      ((HRESULT)0xC00291A1L)

//
// MessageId: DTS_E_MSMQTASK_INVALID_PROPERTY_VALUE
//
// MessageText:
//
// The property specified is not valid. Verify that the argument type is correct.
//
#define DTS_E_MSMQTASK_INVALID_PROPERTY_VALUE ((HRESULT)0xC00291A2L)

//
// MessageId: DTS_E_MSMQTASK_MESSAGE_NON_AUTHENTICATED
//
// MessageText:
//
// Message is not authenticated.
//
#define DTS_E_MSMQTASK_MESSAGE_NON_AUTHENTICATED ((HRESULT)0xC00291A3L)

//
// MessageId: DTS_E_MSMQTASK_INVALID_ENCRYPTION_ALGO_WRAPPER
//
// MessageText:
//
// You are trying to set the value of Encryption Algorithm with an invalid object.
//
#define DTS_E_MSMQTASK_INVALID_ENCRYPTION_ALGO_WRAPPER ((HRESULT)0xC00291A4L)

//
// MessageId: DTS_E_MSMQTASK_VARIABLE_TO_RECEIVE_STRING_MSG_EMPTY
//
// MessageText:
//
// The variable to receive string message is empty.
//
#define DTS_E_MSMQTASK_VARIABLE_TO_RECEIVE_STRING_MSG_EMPTY ((HRESULT)0xC00291A5L)

//
// MessageId: DTS_E_MSMQTASK_RECEIVE_VARIABLE_EMPTY
//
// MessageText:
//
// Variable to receive variable message is empty.
//
#define DTS_E_MSMQTASK_RECEIVE_VARIABLE_EMPTY ((HRESULT)0xC00291A6L)

//
// MessageId: DTS_E_MSMQTASK_CONNECTIONTYPENOTMSMQ
//
// MessageText:
//
// Connection "%1!s!" is not of type MSMQ.
//
#define DTS_E_MSMQTASK_CONNECTIONTYPENOTMSMQ ((HRESULT)0xC00291A7L)

//
// MessageId: DTS_E_MSMQTASK_DATAFILE_ALREADY_EXISTS
//
// MessageText:
//
// The data file "%1!s!" already exists at the specified location. Cannot overwrite the file as the Overwrite option is set to false.
//
#define DTS_E_MSMQTASK_DATAFILE_ALREADY_EXISTS ((HRESULT)0xC00291A8L)

//
// MessageId: DTS_E_MSMQTASK_STRING_MSG_TO_VARIABLE_NOT_FOUND
//
// MessageText:
//
// The specified variable "%1!s!" to receive string message is not found in the package variable collection.
//
#define DTS_E_MSMQTASK_STRING_MSG_TO_VARIABLE_NOT_FOUND ((HRESULT)0xC00291A9L)

//
// MessageId: DTS_E_MSMQTASK_CONNMNGRNULL
//
// MessageText:
//
// The connection manager "%1!s!" is empty.
//
#define DTS_E_MSMQTASK_CONNMNGRNULL      ((HRESULT)0xC00291AAL)

//
// MessageId: DTS_E_MSMQTASK_CONNMNGRDOESNOTEXIST
//
// MessageText:
//
// The connection manager "%1!s!" does not exist.
//
#define DTS_E_MSMQTASK_CONNMNGRDOESNOTEXIST ((HRESULT)0xC00291ABL)

//
// MessageId: DTS_E_SCRIPTTASK_COMPILEERRORMSG
//
// MessageText:
//
// Error "%1!s!": "%2!s!"\r\nLine "%3!s!"   Column "%4!s!" through "%5!s!".
//
#define DTS_E_SCRIPTTASK_COMPILEERRORMSG ((HRESULT)0xC00291ACL)

//
// MessageId: DTS_E_SCRIPTTASK_COMPILEERRORMSG2
//
// MessageText:
//
// There was an error compiling the script: "%1!s!".
//
#define DTS_E_SCRIPTTASK_COMPILEERRORMSG2 ((HRESULT)0xC00291ADL)

//
// MessageId: DTS_E_SCRIPTTASK_COMPILEERRORMSG3
//
// MessageText:
//
// Error "%1!s!": "%2!s!"\r\nLine "%3!s!" Columns "%4!s!"-"%5!s!"\r\nLine Text: "%6!s!".
//
#define DTS_E_SCRIPTTASK_COMPILEERRORMSG3 ((HRESULT)0xC00291AEL)

//
// MessageId: DTS_E_SCRIPTTASK_SCRIPTREPORTEDFAILURE
//
// MessageText:
//
// User script returned a failure result.
//
#define DTS_E_SCRIPTTASK_SCRIPTREPORTEDFAILURE ((HRESULT)0xC00291AFL)

//
// MessageId: DTS_E_SCRIPTTASK_SCRIPTFILESFAILEDTOLOAD
//
// MessageText:
//
// User script files failed to load.
//
#define DTS_E_SCRIPTTASK_SCRIPTFILESFAILEDTOLOAD ((HRESULT)0xC00291B0L)

//
// MessageId: DTS_E_SCRIPTTASK_SCRIPTTHREWEXCEPTION
//
// MessageText:
//
// User script threw an exception: "%1!s!".
//
#define DTS_E_SCRIPTTASK_SCRIPTTHREWEXCEPTION ((HRESULT)0xC00291B1L)

//
// MessageId: DTS_E_SCRIPTTASK_COULDNOTCREATEENTRYPOINTCLASS
//
// MessageText:
//
// Could not create an instance of entrypoint class "%1!s!".
//
#define DTS_E_SCRIPTTASK_COULDNOTCREATEENTRYPOINTCLASS ((HRESULT)0xC00291B2L)

//
// MessageId: DTS_E_SCRIPTTASK_LOADFROMXMLEXCEPTION
//
// MessageText:
//
// There was an exception while loading Script Task from XML: "%1!s!".
//
#define DTS_E_SCRIPTTASK_LOADFROMXMLEXCEPTION ((HRESULT)0xC00291B3L)

//
// MessageId: DTS_E_SCRIPTTASK_SOURCEITEMNOTFOUNDEXCEPTION
//
// MessageText:
//
// Source item "%1!s!" was not found in the package.
//
#define DTS_E_SCRIPTTASK_SOURCEITEMNOTFOUNDEXCEPTION ((HRESULT)0xC00291B4L)

//
// MessageId: DTS_E_SCRIPTTASK_BINARYITEMNOTFOUNDEXCEPTION
//
// MessageText:
//
// Binary item "%1!s!" was not found in the package.
//
#define DTS_E_SCRIPTTASK_BINARYITEMNOTFOUNDEXCEPTION ((HRESULT)0xC00291B5L)

//
// MessageId: DTS_E_SCRIPTTASK_UNRECOGNIZEDSCRIPTLANGUAGEEXCEPTION
//
// MessageText:
//
// "%1!s!" was not recognized as a valid script language.
//
#define DTS_E_SCRIPTTASK_UNRECOGNIZEDSCRIPTLANGUAGEEXCEPTION ((HRESULT)0xC00291B6L)

//
// MessageId: DTS_E_SCRIPTTASK_ILLEGALSCRIPTNAME
//
// MessageText:
//
// The script name is not valid. It cannot contain spaces, slashes, special characters, or begin with a number.
//
#define DTS_E_SCRIPTTASK_ILLEGALSCRIPTNAME ((HRESULT)0xC00291B7L)

//
// MessageId: DTS_E_SCRIPTTASK_INVALIDSCRIPTLANGUAGE
//
// MessageText:
//
// The script language specified is not valid.
//
#define DTS_E_SCRIPTTASK_INVALIDSCRIPTLANGUAGE ((HRESULT)0xC00291B8L)

//
// MessageId: DTS_E_SCRIPTTASK_CANTINITNULLTASK
//
// MessageText:
//
// Cannot initialize to a null task.
//
#define DTS_E_SCRIPTTASK_CANTINITNULLTASK ((HRESULT)0xC00291B9L)

//
// MessageId: DTS_E_SCRIPTTASK_MUSTINITWITHRIGHTTASK
//
// MessageText:
//
// The Script Task user interface must initialize to an Script Task.
//
#define DTS_E_SCRIPTTASK_MUSTINITWITHRIGHTTASK ((HRESULT)0xC00291BAL)

//
// MessageId: DTS_E_SCRIPTTASK_WASNOTINITED
//
// MessageText:
//
// The Script Task user interface is not initialized.
//
#define DTS_E_SCRIPTTASK_WASNOTINITED    ((HRESULT)0xC00291BBL)

//
// MessageId: DTS_E_SCRIPTTASK_HOST_NAME_CANT_EMPTY
//
// MessageText:
//
// Name cannot be empty.
//
#define DTS_E_SCRIPTTASK_HOST_NAME_CANT_EMPTY ((HRESULT)0xC00291BCL)

//
// MessageId: DTS_E_SCRIPTTASK_INVALID_SCRIPT_NAME
//
// MessageText:
//
// The project name is not valid. It cannot contain spaces, slashes, special characters, or begin with a number.
//
#define DTS_E_SCRIPTTASK_INVALID_SCRIPT_NAME ((HRESULT)0xC00291BDL)

//
// MessageId: DTS_E_SCRIPTTASK_INVALID_SCRIPT_LANGUAGE
//
// MessageText:
//
// The script language specified is not valid.
//
#define DTS_E_SCRIPTTASK_INVALID_SCRIPT_LANGUAGE ((HRESULT)0xC00291BEL)

//
// MessageId: DTS_E_SCRIPTTASK_INVALID_ENTRY_POINT
//
// MessageText:
//
// Entry point not found.
//
#define DTS_E_SCRIPTTASK_INVALID_ENTRY_POINT ((HRESULT)0xC00291BFL)

//
// MessageId: DTS_E_SCRIPTTASK_LANGUAGE_EMPTY
//
// MessageText:
//
// The script language is not specified. Verify that a valid script language is specified.
//
#define DTS_E_SCRIPTTASK_LANGUAGE_EMPTY  ((HRESULT)0xC00291C0L)

//
// MessageId: DTS_E_SCRIPTTASK_INITIALIZATION_WITH_NULL_TASK
//
// MessageText:
//
// User interface initialization: The task is null.
//
#define DTS_E_SCRIPTTASK_INITIALIZATION_WITH_NULL_TASK ((HRESULT)0xC00291C1L)

//
// MessageId: DTS_E_SCRIPTTASK_UI_INITIALIZATION_WITH_WRONG_TASK
//
// MessageText:
//
// The Script Task user interface is initialized with an incorrect task.
//
#define DTS_E_SCRIPTTASK_UI_INITIALIZATION_WITH_WRONG_TASK ((HRESULT)0xC00291C2L)

//
// MessageId: DTS_E_SENDMAILTASK_RECIPIENT_EMPTY
//
// MessageText:
//
// No recipient is specified.
//
#define DTS_E_SENDMAILTASK_RECIPIENT_EMPTY ((HRESULT)0xC00291C3L)

//
// MessageId: DTS_E_SENDMAILTASK_SMTP_SERVER_NOT_SPECIFIED
//
// MessageText:
//
// The Simple Mail Transfer Protocol (SMTP) server is not specified. Provide a valid name or IP address of the SMTP server.
//
#define DTS_E_SENDMAILTASK_SMTP_SERVER_NOT_SPECIFIED ((HRESULT)0xC00291C4L)

//
// MessageId: DTS_E_SENDMAILTASK_TASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// Send Mail task is initiated with an incorrect XML element.
//
#define DTS_E_SENDMAILTASK_TASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC00291C5L)

//
// MessageId: DTS_E_SENDMAILTASK_INVALIDATTACHMENT
//
// MessageText:
//
// Either the file "%1!s!" does not exist or you do not have permissions to access the file.
//
#define DTS_E_SENDMAILTASK_INVALIDATTACHMENT ((HRESULT)0xC00291CBL)

//
// MessageId: DTS_E_SENDMAILTASK_CHECK_VALID_SMTP_SERVER
//
// MessageText:
//
// Verify that the Simple Mail Transfer Protocol (SMTP) server specified is valid.
//
#define DTS_E_SENDMAILTASK_CHECK_VALID_SMTP_SERVER ((HRESULT)0xC00291CDL)

//
// MessageId: DTS_E_SENDMAILTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Connection "%1!s!" is not of type File.
//
#define DTS_E_SENDMAILTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC00291CEL)

//
// MessageId: DTS_E_SENDMAILTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// On operation "%1!s!", file "%2!s!" does not exist.
//
#define DTS_E_SENDMAILTASK_FILEDOESNOTEXIST ((HRESULT)0xC00291CFL)

//
// MessageId: DTS_E_SENDMAILTASK_VARIABLETYPEISNOTSTRING
//
// MessageText:
//
// Variable "%1!s!" is not of type string.
//
#define DTS_E_SENDMAILTASK_VARIABLETYPEISNOTSTRING ((HRESULT)0xC00291D0L)

//
// MessageId: DTS_E_SENDMAILTASK_CONNECTIONTYPENOTSMTP
//
// MessageText:
//
// Connection "%1!s!" is not of type SMTP.
//
#define DTS_E_SENDMAILTASK_CONNECTIONTYPENOTSMTP ((HRESULT)0xC00291D1L)

//
// MessageId: DTS_E_SENDMAILTASK_CONNMNGRNULL
//
// MessageText:
//
// Connection "%1!s!" is empty.
//
#define DTS_E_SENDMAILTASK_CONNMNGRNULL  ((HRESULT)0xC00291D2L)

//
// MessageId: DTS_E_SENDMAILTASK_NOCONNMNGR
//
// MessageText:
//
// The specified connection "%1!s!" does not exist.
//
#define DTS_E_SENDMAILTASK_NOCONNMNGR    ((HRESULT)0xC00291D3L)

//
// MessageId: DTS_E_SQLTASK_NOSTATEMENTSPECIFIED
//
// MessageText:
//
// No Transact-SQL statement specified.
//
#define DTS_E_SQLTASK_NOSTATEMENTSPECIFIED ((HRESULT)0xC00291D4L)

//
// MessageId: DTS_E_SQLTASK_NOXMLSUPPORT
//
// MessageText:
//
// The connection does not support XML result sets.
//
#define DTS_E_SQLTASK_NOXMLSUPPORT       ((HRESULT)0xC00291D5L)

//
// MessageId: DTS_E_SQLTASK_NOHANDLERFORCONNECTION
//
// MessageText:
//
// Cannot locate a handler for the specified connection type.
//
#define DTS_E_SQLTASK_NOHANDLERFORCONNECTION ((HRESULT)0xC00291D6L)

//
// MessageId: DTS_E_SQLTASK_NOCONNECTIONMANAGER
//
// MessageText:
//
// No connection manager is specified.
//
#define DTS_E_SQLTASK_NOCONNECTIONMANAGER ((HRESULT)0xC00291D7L)

//
// MessageId: DTS_E_SQLTASK_CANNOTACQUIRECONNMANAGER
//
// MessageText:
//
// Cannot acquire a connection from the connection manager.
//
#define DTS_E_SQLTASK_CANNOTACQUIRECONNMANAGER ((HRESULT)0xC00291D8L)

//
// MessageId: DTS_E_SQLTASK_NULLPARAMETERNAME
//
// MessageText:
//
// Cannot have a null parameter name.
//
#define DTS_E_SQLTASK_NULLPARAMETERNAME  ((HRESULT)0xC00291D9L)

//
// MessageId: DTS_E_SQLTASK_INVALIDPARAMETERNAME
//
// MessageText:
//
// The parameter name is not valid.
//
#define DTS_E_SQLTASK_INVALIDPARAMETERNAME ((HRESULT)0xC00291DAL)

//
// MessageId: DTS_E_SQLTASK_VALIDPARAMETERTYPES
//
// MessageText:
//
// Valid parameter names are of type Int or String.
//
#define DTS_E_SQLTASK_VALIDPARAMETERTYPES ((HRESULT)0xC00291DBL)

//
// MessageId: DTS_E_SQLTASK_READONLYVARIABLE
//
// MessageText:
//
// Variable "%1!s!" cannot be used in a result binding because it is read-only.
//
#define DTS_E_SQLTASK_READONLYVARIABLE   ((HRESULT)0xC00291DCL)

//
// MessageId: DTS_E_SQLTASK_INDESNOTINCOLLECTION
//
// MessageText:
//
// The index is not assigned in this collection.
//
#define DTS_E_SQLTASK_INDESNOTINCOLLECTION ((HRESULT)0xC00291DDL)

//
// MessageId: DTS_E_SQLTASK_ROVARINOUTPARAMETER
//
// MessageText:
//
// The variable "%1!s!" cannot be used as an "out" parameter or return value in a parameter binding because it is read-only.
//
#define DTS_E_SQLTASK_ROVARINOUTPARAMETER ((HRESULT)0xC00291DEL)

//
// MessageId: DTS_E_SQLTASK_OBJECTNOTINCOLLECTION
//
// MessageText:
//
// The object does not exist in this collection.
//
#define DTS_E_SQLTASK_OBJECTNOTINCOLLECTION ((HRESULT)0xC00291DFL)

//
// MessageId: DTS_E_SQLTASK_UNABLETOACQUIREMANAGEDCONN
//
// MessageText:
//
// Cannot acquire a managed connection.
//
#define DTS_E_SQLTASK_UNABLETOACQUIREMANAGEDCONN ((HRESULT)0xC00291E0L)

//
// MessageId: DTS_E_UNABLETOPOPRESULT
//
// MessageText:
//
// Cannot populate the result columns for a single row result type. The query returned an empty result set.
//
#define DTS_E_UNABLETOPOPRESULT          ((HRESULT)0xC00291E1L)

//
// MessageId: DTS_E_SQLTASK_INVALIDNUMOFRESULTBINDINGS
//
// MessageText:
//
// There is an invalid number of result bindings returned for the ResultSetType: "%1!s!".
//
#define DTS_E_SQLTASK_INVALIDNUMOFRESULTBINDINGS ((HRESULT)0xC00291E2L)

//
// MessageId: DTS_E_SQLTASK_RESULTBINDTYPEFORROWSETXML
//
// MessageText:
//
// The result binding name must be set to zero for full result set and XML results.
//
#define DTS_E_SQLTASK_RESULTBINDTYPEFORROWSETXML ((HRESULT)0xC00291E3L)

//
// MessageId: DTS_E_SQLTASK_INVALIDEPARAMDIRECTIONFALG
//
// MessageText:
//
// The parameter directions flag is not valid.
//
#define DTS_E_SQLTASK_INVALIDEPARAMDIRECTIONFALG ((HRESULT)0xC00291E4L)

//
// MessageId: DTS_E_SQLTASK_NOSQLTASKDATAINXMLFRAGMENT
//
// MessageText:
//
// The XML fragment does not contain SQL Task data.
//
#define DTS_E_SQLTASK_NOSQLTASKDATAINXMLFRAGMENT ((HRESULT)0xC00291E5L)

//
// MessageId: DTS_E_SQLTASK_MULTIPLERETURNVALUEPARAM
//
// MessageText:
//
// A parameter with type return value is not the first parameter, or there are more than one parameter of type return value.
//
#define DTS_E_SQLTASK_MULTIPLERETURNVALUEPARAM ((HRESULT)0xC00291E6L)

//
// MessageId: DTS_E_SQLTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Connection "%1!s!" is not a file connection manager.
//
#define DTS_E_SQLTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC00291E7L)

//
// MessageId: DTS_E_SQLTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File represented by "%1!s!" does not exist.
//
#define DTS_E_SQLTASK_FILEDOESNOTEXIST   ((HRESULT)0xC00291E8L)

//
// MessageId: DTS_E_SQLTASK_VARIABLETYPEISNOTSTRING
//
// MessageText:
//
// Type of variable "%1!s!" is not string.
//
#define DTS_E_SQLTASK_VARIABLETYPEISNOTSTRING ((HRESULT)0xC00291E9L)

//
// MessageId: DTS_E_SQLTASK_VARIABLENOTFOUND
//
// MessageText:
//
// Variable "%1!s!" does not exist or could not be locked.
//
#define DTS_E_SQLTASK_VARIABLENOTFOUND   ((HRESULT)0xC00291EAL)

//
// MessageId: DTS_E_SQLTASK_CANNOTLOCATECONNMANAGER
//
// MessageText:
//
// Connection manager "%1!s!" does not exist.
//
#define DTS_E_SQLTASK_CANNOTLOCATECONNMANAGER ((HRESULT)0xC00291EBL)

//
// MessageId: DTS_E_SQLTASK_FAILEDTOACQUIRECONNECTION
//
// MessageText:
//
// Failed to acquire connection "%1!s!". Connection may not be configured correctly or you may not have the right permissions on this connection.
//
#define DTS_E_SQLTASK_FAILEDTOACQUIRECONNECTION ((HRESULT)0xC00291ECL)

//
// MessageId: DTS_E_SQLTASK_RESULTBYNAMENOTSUPPORTED
//
// MessageText:
//
// Result binding by name "%1!s!" is not supported for this connection type.
//
#define DTS_E_SQLTASK_RESULTBYNAMENOTSUPPORTED ((HRESULT)0xC00291EDL)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_NO_ROWS
//
// MessageText:
//
// A result set type of single row is specified, but no rows were returned.
//
#define DTS_E_SQLTASKCONN_ERR_NO_ROWS    ((HRESULT)0xC00291EEL)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_NO_DISCONNECTED_RS
//
// MessageText:
//
// No disconnected record set is available for the Transact-SQL statement.
//
#define DTS_E_SQLTASKCONN_ERR_NO_DISCONNECTED_RS ((HRESULT)0xC00291EFL)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_UNSUPPORTED_TYPE
//
// MessageText:
//
// Unsupported type.
//
#define DTS_E_SQLTASKCONN_ERR_UNSUPPORTED_TYPE ((HRESULT)0xC00291F0L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_UNKNOWN_TYPE
//
// MessageText:
//
// Unknown type.
//
#define DTS_E_SQLTASKCONN_ERR_UNKNOWN_TYPE ((HRESULT)0xC00291F1L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_PARAM_NAME_MIX
//
// MessageText:
//
// Parameter names cannot be an mix of ordinal and named types.
//
#define DTS_E_SQLTASKCONN_ERR_PARAM_NAME_MIX ((HRESULT)0xC00291F3L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_PARAM_DIR
//
// MessageText:
//
// The parameter direction on parameter binding \"%s\" is not valid.
//
#define DTS_E_SQLTASKCONN_ERR_PARAM_DIR  ((HRESULT)0xC00291F4L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_RESULT_DATA_TYPE
//
// MessageText:
//
// The data type on result set binding \"%s\" is not supported.
//
#define DTS_E_SQLTASKCONN_ERR_RESULT_DATA_TYPE ((HRESULT)0xC00291F5L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_RESULT_COL_INDEX
//
// MessageText:
//
// The result column index %d is not valid.
//
#define DTS_E_SQLTASKCONN_ERR_RESULT_COL_INDEX ((HRESULT)0xC00291F6L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_UNKNOWN_RESULT_COL
//
// MessageText:
//
// Cannot find column \"%s\" in the result set.
//
#define DTS_E_SQLTASKCONN_ERR_UNKNOWN_RESULT_COL ((HRESULT)0xC00291F7L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_NOROWSET
//
// MessageText:
//
// No result rowset is associated with the execution of this query.
//
#define DTS_E_SQLTASKCONN_ERR_NOROWSET   ((HRESULT)0xC00291F9L)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_ODBC_DISCONNECTED
//
// MessageText:
//
// Disconnected recordsets are not available from ODBC connections.
//
#define DTS_E_SQLTASKCONN_ERR_ODBC_DISCONNECTED ((HRESULT)0xC00291FAL)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_RESULT_SET_DATA_TYPE
//
// MessageText:
//
// The data type in the result set, column %hd, is not supported.
//
#define DTS_E_SQLTASKCONN_ERR_RESULT_SET_DATA_TYPE ((HRESULT)0xC00291FBL)

//
// MessageId: DTS_E_SQLTASKCONN_ERR_CANT_LOAD_XML
//
// MessageText:
//
// Cannot load XML with query result.
//
#define DTS_E_SQLTASKCONN_ERR_CANT_LOAD_XML ((HRESULT)0xC00291FCL)

//
// MessageId: DTS_E_TTGENTASK_NOCONNORVARIABLE
//
// MessageText:
//
// A connection name or variable name for the package must be specified.
//
#define DTS_E_TTGENTASK_NOCONNORVARIABLE ((HRESULT)0xC00291FDL)

//
// MessageId: DTS_E_TTGENTASK_FAILEDCREATE
//
// MessageText:
//
// Failed to create the package.
//
#define DTS_E_TTGENTASK_FAILEDCREATE     ((HRESULT)0xC00291FEL)

//
// MessageId: DTS_E_TTGENTASK_BADTABLEMETADATA
//
// MessageText:
//
// The TableMetaDataNode is not an XMLNode.
//
#define DTS_E_TTGENTASK_BADTABLEMETADATA ((HRESULT)0xC00291FFL)

//
// MessageId: DTS_E_TTGENTASK_FAILEDCREATEPIPELINE
//
// MessageText:
//
// Failed to create the pipeline.
//
#define DTS_E_TTGENTASK_FAILEDCREATEPIPELINE ((HRESULT)0xC0029200L)

//
// MessageId: DTS_E_TTGENTASK_BADVARIABLETYPE
//
// MessageText:
//
// The variable is not the correct type.
//
#define DTS_E_TTGENTASK_BADVARIABLETYPE  ((HRESULT)0xC0029201L)

//
// MessageId: DTS_E_TTGENTASK_NOTFILECONNECTION
//
// MessageText:
//
// The connection manager specified is not a FILE connection manager.
//
#define DTS_E_TTGENTASK_NOTFILECONNECTION ((HRESULT)0xC0029202L)

//
// MessageId: DTS_E_TTGENTASK_BADFILENAME
//
// MessageText:
//
// Invalid file name specified on the connection manager "%1!s!".
//
#define DTS_E_TTGENTASK_BADFILENAME      ((HRESULT)0xC0029203L)

//
// MessageId: DTS_E_WEBSERVICETASK_CONNECTION_NAME_NULL
//
// MessageText:
//
// The connection is empty. Verify that a valid HTTP connection is specified.
//
#define DTS_E_WEBSERVICETASK_CONNECTION_NAME_NULL ((HRESULT)0xC0029204L)

//
// MessageId: DTS_E_WEBSERVICETASK_CONNECTION_NOT_FOUND
//
// MessageText:
//
// The connection does not exist. Verify that a valid, existing HTTP connection is specified.
//
#define DTS_E_WEBSERVICETASK_CONNECTION_NOT_FOUND ((HRESULT)0xC0029205L)

//
// MessageId: DTS_E_WEBSERVICETASK_CONNECTION_NOT_HTTP
//
// MessageText:
//
// The connection specified is not a HTTP connection. Verify that a valid HTTP connection is specified.
//
#define DTS_E_WEBSERVICETASK_CONNECTION_NOT_HTTP ((HRESULT)0xC0029206L)

//
// MessageId: DTS_E_WEBSERVICETASK_SERVICE_NULL
//
// MessageText:
//
// The Web Service name is empty. Verify that a valid web service name is specified.
//
#define DTS_E_WEBSERVICETASK_SERVICE_NULL ((HRESULT)0xC0029207L)

//
// MessageId: DTS_E_WEBSERVICETASK_METHODNAME_NULL
//
// MessageText:
//
// The web method name is empty. Verify that a valid web method is specified.
//
#define DTS_E_WEBSERVICETASK_METHODNAME_NULL ((HRESULT)0xC0029208L)

//
// MessageId: DTS_E_WEBSERVICETASK_WEBMETHODINFO_NULL
//
// MessageText:
//
// The web method is empty or may not exist. Verify that there is an existing web method to specify.
//
#define DTS_E_WEBSERVICETASK_WEBMETHODINFO_NULL ((HRESULT)0xC0029209L)

//
// MessageId: DTS_E_WEBSERVICETASK_OUTPUTLOC_NULL
//
// MessageText:
//
// The output location is empty. Verify that an existing file connection or variable is specified.
//
#define DTS_E_WEBSERVICETASK_OUTPUTLOC_NULL ((HRESULT)0xC002920AL)

//
// MessageId: DTS_E_WEBSERVICETASK_VARIABLE_NOT_FOUND
//
// MessageText:
//
// The variable cannot be found. Verify that the variable exists in the package.
//
#define DTS_E_WEBSERVICETASK_VARIABLE_NOT_FOUND ((HRESULT)0xC002920BL)

//
// MessageId: DTS_E_WEBSERVICETASK_VARIABLE_READONLY
//
// MessageText:
//
// Cannot save the result. Verify that the variable is not read-only.
//
#define DTS_E_WEBSERVICETASK_VARIABLE_READONLY ((HRESULT)0xC002920CL)

//
// MessageId: DTS_E_WEBSERVICETASK_ERROR_IN_LOAD_FROM_XML
//
// MessageText:
//
// Error occurred in LoadFromXML at the tag "%1!s!".
//
#define DTS_E_WEBSERVICETASK_ERROR_IN_LOAD_FROM_XML ((HRESULT)0xC002920DL)

//
// MessageId: DTS_E_WEBSERVICETASK_ERROR_IN_SAVE_TO_XML
//
// MessageText:
//
// Error occurred in SaveToXML at the tag "%1!s!".
//
#define DTS_E_WEBSERVICETASK_ERROR_IN_SAVE_TO_XML ((HRESULT)0xC002920EL)

//
// MessageId: DTS_E_WEBSERVICETASK_TASK_SAVE_TO_NULL_XML_ELEMENT
//
// MessageText:
//
// Cannot save the task to a null XML document.
//
#define DTS_E_WEBSERVICETASK_TASK_SAVE_TO_NULL_XML_ELEMENT ((HRESULT)0xC002920FL)

//
// MessageId: DTS_E_WEBSERVICETASK_TASK_INITIALIZATION_WITH_NULL_XML_ELEMENT
//
// MessageText:
//
// Cannot initialize the task with a null XML element.
//
#define DTS_E_WEBSERVICETASK_TASK_INITIALIZATION_WITH_NULL_XML_ELEMENT ((HRESULT)0xC0029210L)

//
// MessageId: DTS_E_WEBSERVICETASK_TASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT
//
// MessageText:
//
// The Web Service Task is initiated with an incorrect XML element.
//
#define DTS_E_WEBSERVICETASK_TASK_INITIALIZATION_WITH_WRONG_XML_ELEMENT ((HRESULT)0xC0029211L)

//
// MessageId: DTS_E_WEBSERVICETASK_UNEXPECTED_XML_ELEMENT
//
// MessageText:
//
// Unexpected XML element found.
//
#define DTS_E_WEBSERVICETASK_UNEXPECTED_XML_ELEMENT ((HRESULT)0xC0029212L)

//
// MessageId: DTS_E_WEBSERVICETASK_CANNOT_ACQUIRE_CONNECTION
//
// MessageText:
//
// There was an error acquiring the HTTP connection. Verify that a valid connection type is specified.
//
#define DTS_E_WEBSERVICETASK_CANNOT_ACQUIRE_CONNECTION ((HRESULT)0xC0029213L)

//
// MessageId: DTS_E_WEBSERVICETASK_FILE_CONN_NOT_FOUND
//
// MessageText:
//
// Cannot save the result. Verify that there is an existing file connection.
//
#define DTS_E_WEBSERVICETASK_FILE_CONN_NOT_FOUND ((HRESULT)0xC0029214L)

//
// MessageId: DTS_E_WEBSERVICETASK_FILE_NOT_FOUND
//
// MessageText:
//
// Cannot save the result. Verify that the file exists.
//
#define DTS_E_WEBSERVICETASK_FILE_NOT_FOUND ((HRESULT)0xC0029215L)

//
// MessageId: DTS_E_WEBSERVICETASK_FILE_NULL
//
// MessageText:
//
// Cannot save the result. The file name is empty or the file is in use by another process.
//
#define DTS_E_WEBSERVICETASK_FILE_NULL   ((HRESULT)0xC0029216L)

//
// MessageId: DTS_E_WEBSERVICETASK_CANNOT_ACQUIRE_FILE_CONNECTION
//
// MessageText:
//
// There was an error in acquiring the file connection. Verify that a valid file connection is specified.
//
#define DTS_E_WEBSERVICETASK_CANNOT_ACQUIRE_FILE_CONNECTION ((HRESULT)0xC0029217L)

//
// MessageId: DTS_E_WEBSERVICETASK_DATATYPE_NOT_SUPPORTED
//
// MessageText:
//
// Only Complex Types with Primitive values, Primitive Arrays, and Enumerations are supported.
//
#define DTS_E_WEBSERVICETASK_DATATYPE_NOT_SUPPORTED ((HRESULT)0xC0029218L)

//
// MessageId: DTS_E_WEBSERVICETASK_PARAMTYPE_NOT_SUPPORTED
//
// MessageText:
//
// Only Primitive, Enum, Complex, PrimitiveArray, and ComplexArray types are supported.
//
#define DTS_E_WEBSERVICETASK_PARAMTYPE_NOT_SUPPORTED ((HRESULT)0xC0029219L)

//
// MessageId: DTS_E_WEBSERVICETASK_WSDL_VERSION_NOT_SUPPORTED
//
// MessageText:
//
// This version of WSDL is not supported.
//
#define DTS_E_WEBSERVICETASK_WSDL_VERSION_NOT_SUPPORTED ((HRESULT)0xC002921AL)

//
// MessageId: DTS_E_WEBSERVICETASK_WRONG_XML_ELEMENT
//
// MessageText:
//
// Initialized with an incorrect XML element.
//
#define DTS_E_WEBSERVICETASK_WRONG_XML_ELEMENT ((HRESULT)0xC002921BL)

//
// MessageId: DTS_E_WEBSERVICETASK_XML_ATTRIBUTE_NOT_FOUND
//
// MessageText:
//
// A mandatory attribute is not found.
//
#define DTS_E_WEBSERVICETASK_XML_ATTRIBUTE_NOT_FOUND ((HRESULT)0xC002921CL)

//
// MessageId: DTS_E_WEBSERVICETASK_ENUM_NO_VALUES
//
// MessageText:
//
// The enum "%1!s!" does not have any values. The WSDL is corrupted.
//
#define DTS_E_WEBSERVICETASK_ENUM_NO_VALUES ((HRESULT)0xC002921DL)

//
// MessageId: DTS_E_WEBSERVICETASK_CONNECTIONNOTFOUND
//
// MessageText:
//
// The connection cannot be found.
//
#define DTS_E_WEBSERVICETASK_CONNECTIONNOTFOUND ((HRESULT)0xC002921EL)

//
// MessageId: DTS_E_WEBSERVICETASK_CONNECTION_ALREADY_EXISTS
//
// MessageText:
//
// Connection by this name already exists.
//
#define DTS_E_WEBSERVICETASK_CONNECTION_ALREADY_EXISTS ((HRESULT)0xC002921FL)

//
// MessageId: DTS_E_WEBSERVICETASK_NULL_CONNECTION
//
// MessageText:
//
// Connection cannot be null or empty.
//
#define DTS_E_WEBSERVICETASK_NULL_CONNECTION ((HRESULT)0xC0029220L)

//
// MessageId: DTS_E_WEBSERVICETASK_NOT_HTTP_CONNECTION
//
// MessageText:
//
// The connection specified is not a HTTP connection. Verify that a valid HTTP connection is specified.
//
#define DTS_E_WEBSERVICETASK_NOT_HTTP_CONNECTION ((HRESULT)0xC0029221L)

//
// MessageId: DTS_E_WEBSERVICETASK_WSDL_NOT_FOUND
//
// MessageText:
//
// The specified Uniform Resource Identifier (URI) does not contain a valid WSDL.
//
#define DTS_E_WEBSERVICETASK_WSDL_NOT_FOUND ((HRESULT)0xC0029222L)

//
// MessageId: DTS_E_WEBSERVICETASK_ERROR_IN_DOWNLOAD
//
// MessageText:
//
// Could not read the WSDL file. The input WSDL file is not valid. The reader threw the following error: "%1!s!".
//
#define DTS_E_WEBSERVICETASK_ERROR_IN_DOWNLOAD ((HRESULT)0xC0029223L)

//
// MessageId: DTS_E_WEBSERVICETASK_SERVICE_DESC_NULL
//
// MessageText:
//
// Service Description cannot be null.
//
#define DTS_E_WEBSERVICETASK_SERVICE_DESC_NULL ((HRESULT)0xC0029224L)

//
// MessageId: DTS_E_WEBSERVICETASK_SERVICENULL
//
// MessageText:
//
// Service name cannot be null.
//
#define DTS_E_WEBSERVICETASK_SERVICENULL ((HRESULT)0xC0029225L)

//
// MessageId: DTS_E_WEBSERVICETASK_WSDL_NULL
//
// MessageText:
//
// URL cannot be null.
//
#define DTS_E_WEBSERVICETASK_WSDL_NULL   ((HRESULT)0xC0029226L)

//
// MessageId: DTS_E_WEBSERVICETASK_SERVICE_NOT_FOUND
//
// MessageText:
//
// The service is not currently available.
//
#define DTS_E_WEBSERVICETASK_SERVICE_NOT_FOUND ((HRESULT)0xC0029227L)

//
// MessageId: DTS_E_WEBSERVICETASK_SOAPPORT_NOT_FOUND
//
// MessageText:
//
// The service is not available on the SOAP port.
//
#define DTS_E_WEBSERVICETASK_SOAPPORT_NOT_FOUND ((HRESULT)0xC0029228L)

//
// MessageId: DTS_E_WEBSERVICETASK_SOAPBINDING_NOT_FOUND
//
// MessageText:
//
// Failed to parse the Web Services Description Language (WSDL). Cannot find the Binding that corresponds to the SOAP port.
//
#define DTS_E_WEBSERVICETASK_SOAPBINDING_NOT_FOUND ((HRESULT)0xC0029229L)

//
// MessageId: DTS_E_WEBSERVICETASK_SOAPPORTTYPE_NOT_FOUND
//
// MessageText:
//
// Failed to parse the Web Services Description Language (WSDL). Cannot find a PortType that corresponds to the SOAP port.
//
#define DTS_E_WEBSERVICETASK_SOAPPORTTYPE_NOT_FOUND ((HRESULT)0xC002922AL)

//
// MessageId: DTS_E_WEBSERVICETASK_MSG_NOT_FOUND
//
// MessageText:
//
// Cannot find the message that corresponds to the method specified.
//
#define DTS_E_WEBSERVICETASK_MSG_NOT_FOUND ((HRESULT)0xC002922BL)

//
// MessageId: DTS_E_WEBSERVICETASK_CANNOT_GEN_PROXY
//
// MessageText:
//
// Could not generate the proxy for the given web service. The following errors were encountered while generating the proxy "%1!s!".
//
#define DTS_E_WEBSERVICETASK_CANNOT_GEN_PROXY ((HRESULT)0xC002922CL)

//
// MessageId: DTS_E_WEBSERVICETASK_CANNOT_LOAD_PROXY
//
// MessageText:
//
// Could not load the proxy for the given web service. The exact error is as follows: "%1!s!".
//
#define DTS_E_WEBSERVICETASK_CANNOT_LOAD_PROXY ((HRESULT)0xC002922DL)

//
// MessageId: DTS_E_WEBSERVICETASK_INVALID_SERVICE
//
// MessageText:
//
// Could not find the specified service. The exact error is as follows: "%1!s!".
//
#define DTS_E_WEBSERVICETASK_INVALID_SERVICE ((HRESULT)0xC002922EL)

//
// MessageId: DTS_E_WEBSERVICETASK_WEBMETHOD_INVOKE_FAILED
//
// MessageText:
//
// The Web Service threw the following error during method execution: "%1!s!".
//
#define DTS_E_WEBSERVICETASK_WEBMETHOD_INVOKE_FAILED ((HRESULT)0xC002922FL)

//
// MessageId: DTS_E_WEBSERVICETASK_INVOKE_ERR
//
// MessageText:
//
// Could not execute the web method. The exact error is as follows: "%1!s!".
//
#define DTS_E_WEBSERVICETASK_INVOKE_ERR  ((HRESULT)0xC0029230L)

//
// MessageId: DTS_E_WEBSERVICETASK_METHODINFO_NULL
//
// MessageText:
//
// MethodInfo cannot be null.
//
#define DTS_E_WEBSERVICETASK_METHODINFO_NULL ((HRESULT)0xC0029231L)

//
// MessageId: DTS_E_WEBSERVICETASK_VALUE_NOT_PRIMITIVE
//
// MessageText:
//
// The specified WebMethodInfo is not correct. The ParamValue supplied does not match the ParamType. The DTSParamValue is not of type PrimitiveValue.
//
#define DTS_E_WEBSERVICETASK_VALUE_NOT_PRIMITIVE ((HRESULT)0xC0029232L)

//
// MessageId: DTS_E_WEBSERVICETASK_VALUE_NOT_ENUM
//
// MessageText:
//
// The WebMethodInfo specified is not correct. The ParamValue supplied does not match the ParamType. The DTSParamValue found is not of type EnumValue.
//
#define DTS_E_WEBSERVICETASK_VALUE_NOT_ENUM ((HRESULT)0xC0029233L)

//
// MessageId: DTS_E_VALUE_WEBSERVICETASK_NOT_COMPLEX
//
// MessageText:
//
// The WebMethodInfo specified is not correct. The ParamValue supplied does not match the ParamType. The DTSParamValue found is not of type ComplexValue.
//
#define DTS_E_VALUE_WEBSERVICETASK_NOT_COMPLEX ((HRESULT)0xC0029234L)

//
// MessageId: DTS_E_WEBSERVICETASK_VALUE_NOT_ARRAY
//
// MessageText:
//
// The WebMethodInfo specified is not correct. The ParamValue supplied does not match the ParamType. The DTSParamValue found is not of type ArrayValue.
//
#define DTS_E_WEBSERVICETASK_VALUE_NOT_ARRAY ((HRESULT)0xC0029235L)

//
// MessageId: DTS_E_WEBSERVICETASK_TYPE_NOT_PRIMITIVE
//
// MessageText:
//
// The WebMethodInfo you have specified is wrong. "%1!s!" is not Primitive Type.
//
#define DTS_E_WEBSERVICETASK_TYPE_NOT_PRIMITIVE ((HRESULT)0xC0029236L)

//
// MessageId: DTS_E_WEBSERVICETASK_ARRAY_VALUE_INVALID
//
// MessageText:
//
// The format of the ArrayValue is not valid. There should be at least one element in the array.
//
#define DTS_E_WEBSERVICETASK_ARRAY_VALUE_INVALID ((HRESULT)0xC0029237L)

//
// MessageId: DTS_E_WEBSERVICETASK_SELECTED_VALUE_NULL
//
// MessageText:
//
// The value of the enumeration cannot be null. Select a default value for the enumeration.
//
#define DTS_E_WEBSERVICETASK_SELECTED_VALUE_NULL ((HRESULT)0xC0029238L)

//
// MessageId: DTS_E_WEBSERVICETASK_NULL_VALUE
//
// MessageText:
//
// Cannot validate a null against any datatype.
//
#define DTS_E_WEBSERVICETASK_NULL_VALUE  ((HRESULT)0xC0029239L)

//
// MessageId: DTS_E_WEBSERVICETASK_ENUM_VALUE_NOT_FOUND
//
// MessageText:
//
// The enumeration Value is not correct.
//
#define DTS_E_WEBSERVICETASK_ENUM_VALUE_NOT_FOUND ((HRESULT)0xC002923AL)

//
// MessageId: DTS_E_WEBSERVICETASK_PROP_NOT_EXISTS
//
// MessageText:
//
// The class specified does not contain a public property by the name "%1!s!".
//
#define DTS_E_WEBSERVICETASK_PROP_NOT_EXISTS ((HRESULT)0xC002923BL)

//
// MessageId: DTS_E_WEBSERVICETASK_CONVERT_FAILED
//
// MessageText:
//
// Could not convert "%1!s!" to "%2!s!".
//
#define DTS_E_WEBSERVICETASK_CONVERT_FAILED ((HRESULT)0xC002923CL)

//
// MessageId: DTS_E_WEBSERVICETASK_CLEANUP_FAILED
//
// MessageText:
//
// Cleanup failed. The proxy that was created for the web service may not have been deleted.
//
#define DTS_E_WEBSERVICETASK_CLEANUP_FAILED ((HRESULT)0xC002923DL)

//
// MessageId: DTS_E_WEBSERVICETASK_CREATE_INSTANCE_FAILED
//
// MessageText:
//
// Could not create an object of type "%1!s!". Please check whether the default constructor exists.
//
#define DTS_E_WEBSERVICETASK_CREATE_INSTANCE_FAILED ((HRESULT)0xC002923EL)

//
// MessageId: DTS_E_WEBSERVICETASK_NOT_PRIMITIVE_TYPE
//
// MessageText:
//
// "%1!s!" is not a value type.
//
#define DTS_E_WEBSERVICETASK_NOT_PRIMITIVE_TYPE ((HRESULT)0xC002923FL)

//
// MessageId: DTS_E_WEBSERVICETASK_ERROR_IN_VALIDATE
//
// MessageText:
//
// Could not validate "%1!s!" against "%1!s!".
//
#define DTS_E_WEBSERVICETASK_ERROR_IN_VALIDATE ((HRESULT)0xC0029240L)

//
// MessageId: DTS_E_WEBSERVICETASK_DATATYPE_NULL
//
// MessageText:
//
// The data type cannot be null. Specify the value of the data type to validate.
//
#define DTS_E_WEBSERVICETASK_DATATYPE_NULL ((HRESULT)0xC0029241L)

//
// MessageId: DTS_E_WEBSERVICETASK_INDEX_OUT_OF_BOUNDS
//
// MessageText:
//
// The ParamValue cannot be inserted at this position. The index specified might be lesser than zero or greater than the length.
//
#define DTS_E_WEBSERVICETASK_INDEX_OUT_OF_BOUNDS ((HRESULT)0xC0029242L)

//
// MessageId: DTS_E_WEBSERVICETASK_WRONG_WSDL
//
// MessageText:
//
// The input WSDL file is not valid.
//
#define DTS_E_WEBSERVICETASK_WRONG_WSDL  ((HRESULT)0xC0029243L)

//
// MessageId: DTS_E_WMIDRTASK_SYNCOBJECTFAILED
//
// MessageText:
//
// Synchronization object failed.
//
#define DTS_E_WMIDRTASK_SYNCOBJECTFAILED ((HRESULT)0xC0029244L)

//
// MessageId: DTS_E_WMIDRTASK_MISSINGWQLQUERY
//
// MessageText:
//
// The WQL query is missing.
//
#define DTS_E_WMIDRTASK_MISSINGWQLQUERY  ((HRESULT)0xC0029245L)

//
// MessageId: DTS_E_WMIDRTASK_DESTINATIONMUSTBESET
//
// MessageText:
//
// The destination must be set.
//
#define DTS_E_WMIDRTASK_DESTINATIONMUSTBESET ((HRESULT)0xC0029246L)

//
// MessageId: DTS_E_WMIDRTASK_MISSINGCONNECTION
//
// MessageText:
//
// No WMI connection is set.
//
#define DTS_E_WMIDRTASK_MISSINGCONNECTION ((HRESULT)0xC0029247L)

//
// MessageId: DTS_E_WMIDRTASK_INVALIDDATANODE
//
// MessageText:
//
// WMI Data Reader Task received an invalid task data node.
//
#define DTS_E_WMIDRTASK_INVALIDDATANODE  ((HRESULT)0xC0029248L)

//
// MessageId: DTS_E_WMIDRTASK_FAILEDVALIDATION
//
// MessageText:
//
// The task failed validation.
//
#define DTS_E_WMIDRTASK_FAILEDVALIDATION ((HRESULT)0xC0029249L)

//
// MessageId: DTS_E_WMIDRTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File "%1!s!" does not exist.
//
#define DTS_E_WMIDRTASK_FILEDOESNOTEXIST ((HRESULT)0xC002924AL)

//
// MessageId: DTS_E_WMIDRTASK_CONNECTIONMNGRDOESNTEXIST
//
// MessageText:
//
// Connection manager "%1!s!" does not exist.
//
#define DTS_E_WMIDRTASK_CONNECTIONMNGRDOESNTEXIST ((HRESULT)0xC002924BL)

//
// MessageId: DTS_E_WMIDRTASK_VARIABLETYPEISNOTSTRINGOROBJECT
//
// MessageText:
//
// Variable "%1!s!" is not of type string or object.
//
#define DTS_E_WMIDRTASK_VARIABLETYPEISNOTSTRINGOROBJECT ((HRESULT)0xC002924CL)

//
// MessageId: DTS_E_WMIDRTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Connection "%1!s!" is not of type "FILE".
//
#define DTS_E_WMIDRTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC002924DL)

//
// MessageId: DTS_E_WMIDRTASK_CONNECTIONTYPENOTWMI
//
// MessageText:
//
// Connection "%1!s!" is not of type "WMI".
//
#define DTS_E_WMIDRTASK_CONNECTIONTYPENOTWMI ((HRESULT)0xC002924EL)

//
// MessageId: DTS_E_WMIDRTASK_FILEALREADYEXISTS
//
// MessageText:
//
// File "%1!s!" already exists.
//
#define DTS_E_WMIDRTASK_FILEALREADYEXISTS ((HRESULT)0xC002924FL)

//
// MessageId: DTS_E_WMIDRTASK_CONNECTIONMANAGEREMPTY
//
// MessageText:
//
// Connection manager "%1!s!" is empty.
//
#define DTS_E_WMIDRTASK_CONNECTIONMANAGEREMPTY ((HRESULT)0xC0029250L)

//
// MessageId: DTS_E_WMIDRTASK_VARNOTOBJECT
//
// MessageText:
//
// Variable "%1!s!" should be of type object to be assigned a data table.
//
#define DTS_E_WMIDRTASK_VARNOTOBJECT     ((HRESULT)0xC0029251L)

//
// MessageId: DTS_E_WMIDRTASK_TASKFAILURE
//
// MessageText:
//
// Task failed due to invalid WMI query: "%1!s!".
//
#define DTS_E_WMIDRTASK_TASKFAILURE      ((HRESULT)0xC0029252L)

//
// MessageId: DTS_E_WMIDRTASK_CANTWRITETOVAR
//
// MessageText:
//
// Unable to write to variable "%1!s!" since it set to keep its original value.
//
#define DTS_E_WMIDRTASK_CANTWRITETOVAR   ((HRESULT)0xC0029253L)

//
// MessageId: DTS_E_WMIEWTASK_SYNCOBJECTFAILED
//
// MessageText:
//
// Synchronization object failed.
//
#define DTS_E_WMIEWTASK_SYNCOBJECTFAILED ((HRESULT)0xC0029254L)

//
// MessageId: DTS_E_WMIEWTASK_MISSINGWQLQUERY
//
// MessageText:
//
// The WQL query is missing.
//
#define DTS_E_WMIEWTASK_MISSINGWQLQUERY  ((HRESULT)0xC0029255L)

//
// MessageId: DTS_E_WMIEWTASK_MISSINGCONNECTION
//
// MessageText:
//
// The WMI connection is missing.
//
#define DTS_E_WMIEWTASK_MISSINGCONNECTION ((HRESULT)0xC0029256L)

//
// MessageId: DTS_E_WMIEWTASK_QUERYFAILURE
//
// MessageText:
//
// The task failed to execute the WMI query.
//
#define DTS_E_WMIEWTASK_QUERYFAILURE     ((HRESULT)0xC0029257L)

//
// MessageId: DTS_E_WMIEWTASK_INVALIDDATANODE
//
// MessageText:
//
// The WMI Event Watcher Task received a task data node that is not valid.
//
#define DTS_E_WMIEWTASK_INVALIDDATANODE  ((HRESULT)0xC0029258L)

//
// MessageId: DTS_E_WMIEWTASK_CONNECTIONMNGRDOESNTEXIST
//
// MessageText:
//
// Connection manager "%1!s!" does not exist.
//
#define DTS_E_WMIEWTASK_CONNECTIONMNGRDOESNTEXIST ((HRESULT)0xC0029259L)

//
// MessageId: DTS_E_WMIEWTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// File "%1!s!" does not exist.
//
#define DTS_E_WMIEWTASK_FILEDOESNOTEXIST ((HRESULT)0xC002925AL)

//
// MessageId: DTS_E_WMIEWTASK_VARIABLETYPEISNOTSTRING
//
// MessageText:
//
// Variable "%1!s!" is not of type string.
//
#define DTS_E_WMIEWTASK_VARIABLETYPEISNOTSTRING ((HRESULT)0xC002925BL)

//
// MessageId: DTS_E_WMIEWTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// Connection "%1!s!" is not of type "FILE".
//
#define DTS_E_WMIEWTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC002925CL)

//
// MessageId: DTS_E_WMIEWTASK_CONNECTIONTYPENOTWMI
//
// MessageText:
//
// Connection "%1!s!" is not of type "WMI".
//
#define DTS_E_WMIEWTASK_CONNECTIONTYPENOTWMI ((HRESULT)0xC002925DL)

//
// MessageId: DTS_E_WMIEWTASK_FILEALREADYEXISTS
//
// MessageText:
//
// File "%1!s!" already exists.
//
#define DTS_E_WMIEWTASK_FILEALREADYEXISTS ((HRESULT)0xC002925EL)

//
// MessageId: DTS_E_WMIEWTASK_CONNECTIONMANAGEREMPTY
//
// MessageText:
//
// Connection manager "%1!s!" is empty.
//
#define DTS_E_WMIEWTASK_CONNECTIONMANAGEREMPTY ((HRESULT)0xC002925FL)

//
// MessageId: DTS_E_WMIEWTASK_TIMEOUTOCCURRED
//
// MessageText:
//
// Timeout of "%1!s!" second(s) occurred before event represented by "%2!s!".
//
#define DTS_E_WMIEWTASK_TIMEOUTOCCURRED  ((HRESULT)0xC0029260L)

//
// MessageId: DTS_E_WMIEWTASK_ERRMESSAGE
//
// MessageText:
//
// Watching for the Wql query caused the following system exception: "%1!s!". Check the query for errors or WMI connection for access rights/permissions.
//
#define DTS_E_WMIEWTASK_ERRMESSAGE       ((HRESULT)0xC0029261L)

//
// MessageId: DTS_E_XMLTASK_NODEFAULTOPERTION
//
// MessageText:
//
// The Operations specified is not defined.
//
#define DTS_E_XMLTASK_NODEFAULTOPERTION  ((HRESULT)0xC0029262L)

//
// MessageId: DTS_E_XMLTASK_CONNECTIONTYPENOTFILE
//
// MessageText:
//
// The connection type is not File.
//
#define DTS_E_XMLTASK_CONNECTIONTYPENOTFILE ((HRESULT)0xC0029263L)

//
// MessageId: DTS_E_XMLTASK_CANTGETREADERFROMSOURCE
//
// MessageText:
//
// Cannot get an XmlReader from the source XML document.
//
#define DTS_E_XMLTASK_CANTGETREADERFROMSOURCE ((HRESULT)0xC0029264L)

//
// MessageId: DTS_E_XMLTASK_CANTGETREADERFROMDEST
//
// MessageText:
//
// Cannot get an XmlReader from the changed XML document.
//
#define DTS_E_XMLTASK_CANTGETREADERFROMDEST ((HRESULT)0xC0029265L)

//
// MessageId: DTS_E_XMLTASK_CANTGETREADERFROMDIFFGRAM
//
// MessageText:
//
// Cannot get the XDL diffgram reader from the XDL diffgram XML.
//
#define DTS_E_XMLTASK_CANTGETREADERFROMDIFFGRAM ((HRESULT)0xC0029266L)

//
// MessageId: DTS_E_XMLTASK_EMPTYNODELIST
//
// MessageText:
//
// The node list is empty.
//
#define DTS_E_XMLTASK_EMPTYNODELIST      ((HRESULT)0xC0029268L)

//
// MessageId: DTS_E_XMLTASK_NOELEMENTFOUND
//
// MessageText:
//
// The element was not found.
//
#define DTS_E_XMLTASK_NOELEMENTFOUND     ((HRESULT)0xC0029269L)

//
// MessageId: DTS_E_XMLTASK_UNDEFINEDOPERATION
//
// MessageText:
//
// The Operations specified is not defined.
//
#define DTS_E_XMLTASK_UNDEFINEDOPERATION ((HRESULT)0xC002926AL)

//
// MessageId: DTS_E_XMLTASK_XPATHNAVERROR
//
// MessageText:
//
// Unexpected content item in XPathNavigator.
//
#define DTS_E_XMLTASK_XPATHNAVERROR      ((HRESULT)0xC002926BL)

//
// MessageId: DTS_E_XMLTASK_NOSCHEMAFOUND
//
// MessageText:
//
// No schema found to enforce validation.
//
#define DTS_E_XMLTASK_NOSCHEMAFOUND      ((HRESULT)0xC002926CL)

//
// MessageId: DTS_E_XMLTASK_VALIDATIONERROR
//
// MessageText:
//
// A validation error occurred when validating the instance document.
//
#define DTS_E_XMLTASK_VALIDATIONERROR    ((HRESULT)0xC002926DL)

//
// MessageId: DTS_E_XMLTASK_SYNCOBJECTFAILED
//
// MessageText:
//
// Synchronization object failed.
//
#define DTS_E_XMLTASK_SYNCOBJECTFAILED   ((HRESULT)0xC002926EL)

//
// MessageId: DTS_E_XMLTASK_ROOTNOODESNOTMATCHED
//
// MessageText:
//
// The root nodes do not match.
//
#define DTS_E_XMLTASK_ROOTNOODESNOTMATCHED ((HRESULT)0xC002926FL)

//
// MessageId: DTS_E_XMLTASK_INVALIDEDITSCRIPT
//
// MessageText:
//
// The Edit Script Operation type in the final Edit Script is not valid.
//
#define DTS_E_XMLTASK_INVALIDEDITSCRIPT  ((HRESULT)0xC0029270L)

//
// MessageId: DTS_E_XMLTASK_CDATANODESISSUE
//
// MessageText:
//
// CDATA nodes should be added with DiffgramAddSubtrees class.
//
#define DTS_E_XMLTASK_CDATANODESISSUE    ((HRESULT)0xC0029271L)

//
// MessageId: DTS_E_XMLTASK_COMMENTSNODEISSUE
//
// MessageText:
//
// Comment nodes should be added with DiffgramAddSubtrees class.
//
#define DTS_E_XMLTASK_COMMENTSNODEISSUE  ((HRESULT)0xC0029272L)

//
// MessageId: DTS_E_XMLTASK_TEXTNODEISSUES
//
// MessageText:
//
// Text nodes should be added with DiffgramAddSubtrees class.
//
#define DTS_E_XMLTASK_TEXTNODEISSUES     ((HRESULT)0xC0029273L)

//
// MessageId: DTS_E_XMLTASK_WHITESPACEISSUE
//
// MessageText:
//
// Significant white space nodes should be added with DiffgramAddSubtrees class.
//
#define DTS_E_XMLTASK_WHITESPACEISSUE    ((HRESULT)0xC0029274L)

//
// MessageId: DTS_E_XMLTASK_DIFFENUMISSUE
//
// MessageText:
//
// Correct the OperationCost array so that it reflects the XmlDiffOperation enumeration.
//
#define DTS_E_XMLTASK_DIFFENUMISSUE      ((HRESULT)0xC0029275L)

//
// MessageId: DTS_E_XMLTASK_TASKISEMPTY
//
// MessageText:
//
// There are no operations in the task.
//
#define DTS_E_XMLTASK_TASKISEMPTY        ((HRESULT)0xC0029276L)

//
// MessageId: DTS_E_XMLTASK_DOCUMENTHASDATA
//
// MessageText:
//
// The document already contains data and should not be used again.
//
#define DTS_E_XMLTASK_DOCUMENTHASDATA    ((HRESULT)0xC0029277L)

//
// MessageId: DTS_E_XMLTASK_INVALIDENODETYPE
//
// MessageText:
//
// The node type is not valid.
//
#define DTS_E_XMLTASK_INVALIDENODETYPE   ((HRESULT)0xC0029278L)

//
// MessageId: DTS_E_XMLTASK_INVALIDDATANODE
//
// MessageText:
//
// The XML Task received a task data node that is not valid.
//
#define DTS_E_XMLTASK_INVALIDDATANODE    ((HRESULT)0xC0029279L)

//
// MessageId: DTS_E_XMLTASK_VARIABLETYPEISNOTSTRING
//
// MessageText:
//
// Variable data type is not a String.
//
#define DTS_E_XMLTASK_VARIABLETYPEISNOTSTRING ((HRESULT)0xC002927BL)

//
// MessageId: DTS_E_XMLTASK_COULDNOTGETENCODINGFROMDOCUMENT
//
// MessageText:
//
// Cannot get encoding from XML.
//
#define DTS_E_XMLTASK_COULDNOTGETENCODINGFROMDOCUMENT ((HRESULT)0xC002927CL)

//
// MessageId: DTS_E_XMLTASK_MISSINGSOURCE
//
// MessageText:
//
// Source is not specified.
//
#define DTS_E_XMLTASK_MISSINGSOURCE      ((HRESULT)0xC002927DL)

//
// MessageId: DTS_E_XMLTASK_MISSINGSECONDOPERAND
//
// MessageText:
//
// Second operand is not specified.
//
#define DTS_E_XMLTASK_MISSINGSECONDOPERAND ((HRESULT)0xC002927EL)

//
// MessageId: DTS_E_XMLTASK_INVALIDPATHDESCRIPTOR
//
// MessageText:
//
// Invalid XDL diffgram. "%1!s!" is an invalid path descriptor.
//
#define DTS_E_XMLTASK_INVALIDPATHDESCRIPTOR ((HRESULT)0xC002927FL)

//
// MessageId: DTS_E_XMLTASK_NOMATCHINGNODE
//
// MessageText:
//
// Invalid XDL diffgram. No node matches the path descriptor "%1!s!".
//
#define DTS_E_XMLTASK_NOMATCHINGNODE     ((HRESULT)0xC0029280L)

//
// MessageId: DTS_E_XMLTASK_EXPECTINGDIFFGRAMELEMENT
//
// MessageText:
//
// Invalid XDL diffgram. Expecting xd:xmldiff as a root element with namespace URI "%1!s!".
//
#define DTS_E_XMLTASK_EXPECTINGDIFFGRAMELEMENT ((HRESULT)0xC0029281L)

//
// MessageId: DTS_E_XMLTASK_MISSINGSRCDOCATTRIBUTE
//
// MessageText:
//
// The XDL diffgram is not valid. The srcDocHash attribute on the xd:xmldiff element is missing.
//
#define DTS_E_XMLTASK_MISSINGSRCDOCATTRIBUTE ((HRESULT)0xC0029282L)

//
// MessageId: DTS_E_XMLTASK_MISSINGOPTIONSATTRIBUTE
//
// MessageText:
//
// The XDL diffgram is not valid. The options attribute on the xd:xmldiff element is missing.
//
#define DTS_E_XMLTASK_MISSINGOPTIONSATTRIBUTE ((HRESULT)0xC0029283L)

//
// MessageId: DTS_E_XMLTASK_INVALIDSRCDOCATTRIBUTE
//
// MessageText:
//
// The XDL diffgram is not valid. The srcDocHash attribute has an invalid value.
//
#define DTS_E_XMLTASK_INVALIDSRCDOCATTRIBUTE ((HRESULT)0xC0029284L)

//
// MessageId: DTS_E_XMLTASK_INVALIDOPTIONSATTRIBUTE
//
// MessageText:
//
// The XDL diffgram is not valid. The options attribute has an invalid value.
//
#define DTS_E_XMLTASK_INVALIDOPTIONSATTRIBUTE ((HRESULT)0xC0029285L)

//
// MessageId: DTS_E_XMLTASK_SRCDOCMISMATCH
//
// MessageText:
//
// The XDL diffgram is not applicable to this XML document. The rcDocHash value does not match.
//
#define DTS_E_XMLTASK_SRCDOCMISMATCH     ((HRESULT)0xC0029286L)

//
// MessageId: DTS_E_XMLTASK_MORETHANONENODEMATCHED
//
// MessageText:
//
// Invalid XDL diffgram; more than one node matches the "%1!s!" path descriptor on the xd:node or xd:change element.
//
#define DTS_E_XMLTASK_MORETHANONENODEMATCHED ((HRESULT)0xC0029287L)

//
// MessageId: DTS_E_XMLTASK_XMLDECLMISMATCH
//
// MessageText:
//
// The XDL diffgram is not applicable to this XML document. A new XML declaration cannot be added.
//
#define DTS_E_XMLTASK_XMLDECLMISMATCH    ((HRESULT)0xC0029288L)

//
// MessageId: DTS_E_XMLTASK_INTERNALERRORMORETHANONENODEINLIST
//
// MessageText:
//
// Internal Error. XmlDiffPathSingleNodeList can contain only one node.
//
#define DTS_E_XMLTASK_INTERNALERRORMORETHANONENODEINLIST ((HRESULT)0xC0029289L)

//
// MessageId: DTS_E_XMLTASK_INTERNALERRORMORETHANONENODELEFT
//
// MessageText:
//
// Internal Error. "%1!s!" nodes left after the Patch operation, expecting 1.
//
#define DTS_E_XMLTASK_INTERNALERRORMORETHANONENODELEFT ((HRESULT)0xC002928AL)

//
// MessageId: DTS_E_XMLTASK_XSLTRESULTFILEISNOTXML
//
// MessageText:
//
// The File/Text Produced by the XSLT is not a valid XmlDocument, thus can not be set as result of operation: "%1!s!".
//
#define DTS_E_XMLTASK_XSLTRESULTFILEISNOTXML ((HRESULT)0xC002928BL)

//
// MessageId: DTS_E_XMLTASK_FILEDOESNOTEXIST
//
// MessageText:
//
// There is no file associated with connection "%1!s!".
//
#define DTS_E_XMLTASK_FILEDOESNOTEXIST   ((HRESULT)0xC002928EL)

//
// MessageId: DTS_E_XMLTASK_XMLTEXTEMPTY
//
// MessageText:
//
// Property "%1!s!" has no source Xml text; Xml Text is either invalid, null or empty string.
//
#define DTS_E_XMLTASK_XMLTEXTEMPTY       ((HRESULT)0xC002928FL)

//
// MessageId: DTS_E_XMLTASK_FILEALREADYEXISTS
//
// MessageText:
//
// File "%1!s!" already exists.
//
#define DTS_E_XMLTASK_FILEALREADYEXISTS  ((HRESULT)0xC0029290L)

////////////////////////////////////////////////////////////////////////////
// The source connection was blank

//
// MessageId: DTS_E_TRANSFERTASKS_SRCCONNECTIONREQUIRED
//
// MessageText:
//
// A source connection must be specified.
//
#define DTS_E_TRANSFERTASKS_SRCCONNECTIONREQUIRED ((HRESULT)0xC0029293L)

////////////////////////////////////////////////////////////////////////////
// The destination connection can not be blank

//
// MessageId: DTS_E_TRANSFERTASKS_DESTCONNECTIONREQUIRED
//
// MessageText:
//
// A destination connection must be specified.
//
#define DTS_E_TRANSFERTASKS_DESTCONNECTIONREQUIRED ((HRESULT)0xC0029294L)

////////////////////////////////////////////////////////////////////////////
// The connection can not be found in the connections collection

//
// MessageId: DTS_E_TRANSFERTASKS_CONNECTIONNOTFOUND
//
// MessageText:
//
// The connection "%1!s!" could not be found in the package.
//
#define DTS_E_TRANSFERTASKS_CONNECTIONNOTFOUND ((HRESULT)0xC0029295L)

////////////////////////////////////////////////////////////////////////////
// Must be version 7 or later for transfer

//
// MessageId: DTS_E_TRANSFERTASKS_SERVERVERSIONNOTALLOWED
//
// MessageText:
//
// The connection "%1!s!" specifies a SQL Server instance with a version that is not supported for transfer.  Only versions 7, 2000, and 2005 are supported.
//
#define DTS_E_TRANSFERTASKS_SERVERVERSIONNOTALLOWED ((HRESULT)0xC0029296L)

////////////////////////////////////////////////////////////////////////////
// The src version must be less than or equal to the dest version

//
// MessageId: DTS_E_TRANSFERTASKS_SRCSERVERLESSEQUALDESTSERVER
//
// MessageText:
//
// The source connection "%1!s!" must specify a SQL Server instance with a version earlier than or the same as the destination connection "%2!s!".
//
#define DTS_E_TRANSFERTASKS_SRCSERVERLESSEQUALDESTSERVER ((HRESULT)0xC0029297L)

////////////////////////////////////////////////////////////////////////////
// The source database is blank

//
// MessageId: DTS_E_TRANSFERTASKS_SRCDBREQUIRED
//
// MessageText:
//
// A source database must be specified.
//
#define DTS_E_TRANSFERTASKS_SRCDBREQUIRED ((HRESULT)0xC0029298L)

////////////////////////////////////////////////////////////////////////////
// The source server does not have the specified database name

//
// MessageId: DTS_E_TRANSFERTASKS_SRCDBMUSTEXIST
//
// MessageText:
//
// The source database "%1!s!" must exist on the source server.
//
#define DTS_E_TRANSFERTASKS_SRCDBMUSTEXIST ((HRESULT)0xC0029299L)

////////////////////////////////////////////////////////////////////////////
// The destination database name cannot be blank

//
// MessageId: DTS_E_TRANSFERTASKS_DESTDBREQUIRED
//
// MessageText:
//
// A destination database must be specified.
//
#define DTS_E_TRANSFERTASKS_DESTDBREQUIRED ((HRESULT)0xC002929AL)

////////////////////////////////////////////////////////////////////////////
// The source database name and the destination database name are the same and the source and destination connection specify the same SQL Server

//
// MessageId: DTS_E_TRANSFERTASKS_SRCDBANDDESTDBTHESAME
//
// MessageText:
//
// The source database and the destination database can not be the same.
//
#define DTS_E_TRANSFERTASKS_SRCDBANDDESTDBTHESAME ((HRESULT)0xC002929BL)

////////////////////////////////////////////////////////////////////////////
// The filename part of the fileinfo is missing

//
// MessageId: DTS_E_TRANSFERDBTASK_FILENAMEREQUIRED
//
// MessageText:
//
// The transfer file information %1!s! is missing the filename.
//
#define DTS_E_TRANSFERDBTASK_FILENAMEREQUIRED ((HRESULT)0xC002929CL)

////////////////////////////////////////////////////////////////////////////
// The folder part of the fileinfo is missing

//
// MessageId: DTS_E_TRANSFERDBTASK_FOLDERREQUIRED
//
// MessageText:
//
// The transfer file information %1!s! is missing the folder part.
//
#define DTS_E_TRANSFERDBTASK_FOLDERREQUIRED ((HRESULT)0xC002929DL)

////////////////////////////////////////////////////////////////////////////
// The network share part of the fileinfo is missing

//
// MessageId: DTS_E_TRANSFERTASKS_NETSHAREREQUIRED
//
// MessageText:
//
// The transfer file information %1!s! is missing the network share part.
//
#define DTS_E_TRANSFERTASKS_NETSHAREREQUIRED ((HRESULT)0xC002929EL)

////////////////////////////////////////////////////////////////////////////
// The two transfer files lists have different number of files

//
// MessageId: DTS_E_TRANSFERTASKS_FILELISTSCOUNTMISMATCH
//
// MessageText:
//
// The number of source transfer files and the number of destination transfer files must be the same.
//
#define DTS_E_TRANSFERTASKS_FILELISTSCOUNTMISMATCH ((HRESULT)0xC002929FL)

////////////////////////////////////////////////////////////////////////////
// A transaction was specified but this task does not support enlisting in transactions

//
// MessageId: DTS_E_DOESNOTSUPPORTTRANSACTIONS
//
// MessageText:
//
// Enlisting in transactions is not supported.
//
#define DTS_E_DOESNOTSUPPORTTRANSACTIONS ((HRESULT)0xC00292A0L)

////////////////////////////////////////////////////////////////////////////
// The shown exception occurred during an offline transfer

//
// MessageId: DTS_E_TRANSFERDBTASK_OFFLINEERROR
//
// MessageText:
//
// The following exception occurred during an offline database transfer: %1!s!.
//
#define DTS_E_TRANSFERDBTASK_OFFLINEERROR ((HRESULT)0xC00292A1L)

////////////////////////////////////////////////////////////////////////////
// The share specified for for copying from or to could does not exist

//
// MessageId: DTS_E_TRANSFERDBTASK_NETSHAREDOESNOTEXIST
//
// MessageText:
//
// The network share "%1!s!" could not be found.
//
#define DTS_E_TRANSFERDBTASK_NETSHAREDOESNOTEXIST ((HRESULT)0xC00292A2L)

////////////////////////////////////////////////////////////////////////////
// There was an error accessing the share.  This is usally due to permissions

//
// MessageId: DTS_E_TRANSFERDBTASK_NETSHARENOACCESS
//
// MessageText:
//
// The network share "%1!s! could not be accessed.  The error is: %2!s!.
//
#define DTS_E_TRANSFERDBTASK_NETSHARENOACCESS ((HRESULT)0xC00292A3L)

////////////////////////////////////////////////////////////////////////////
// The user is not a sysadmin or dbo for the specified database

//
// MessageId: DTS_E_TRANSFERDBTASK_USERMUSTBEDBOORSYSADMIN
//
// MessageText:
//
// The user "%1!s!" must be a DBO or a sysadmin for "%2!s!" in order to perform an online database transfer.
//
#define DTS_E_TRANSFERDBTASK_USERMUSTBEDBOORSYSADMIN ((HRESULT)0xC00292A4L)

////////////////////////////////////////////////////////////////////////////
// The user must be a sysadmin to detach and attach a database and that is what is done in an offline transfer

//
// MessageId: DTS_E_TRANSFERDBTASK_USERMUSTBESYSADMIN
//
// MessageText:
//
// The user "%1!s!" must be a sysadmin on "%2!s!" to perform an offline database transfer.
//
#define DTS_E_TRANSFERDBTASK_USERMUSTBESYSADMIN ((HRESULT)0xC00292A5L)

////////////////////////////////////////////////////////////////////////////
// Full text catalogs transfers can only be included when doing an offline transfer between 2 yukon servers

//
// MessageId: DTS_E_TRANSFERDBTASK_FTCATALOGSOFFLINEYUKONONLY
//
// MessageText:
//
// Full text catalogs can only be included when performing an offline database transfer between 2 SQL Server 2005 servers.
//
#define DTS_E_TRANSFERDBTASK_FTCATALOGSOFFLINEYUKONONLY ((HRESULT)0xC00292A6L)

////////////////////////////////////////////////////////////////////////////
// The destination database already exists on the destination server

//
// MessageId: DTS_E_TRANSFERDBTASK_NOOVERWRITEDB
//
// MessageText:
//
// The database "%1!s!" already exists on the destination server "%2!s!".
//
#define DTS_E_TRANSFERDBTASK_NOOVERWRITEDB ((HRESULT)0xC00292A7L)

////////////////////////////////////////////////////////////////////////////
// No source files were specified

//
// MessageId: DTS_E_TRANSFERDBTASK_MUSTHAVESOURCEFILES
//
// MessageText:
//
// At least one source file must be specified.
//
#define DTS_E_TRANSFERDBTASK_MUSTHAVESOURCEFILES ((HRESULT)0xC00292A8L)

////////////////////////////////////////////////////////////////////////////
// A file was specified to be transferred but it no longer exists on the source database

//
// MessageId: DTS_E_TRANSFERDBTASKS_SRCFILENOTFOUND
//
// MessageText:
//
// Could not find the file "%1!s!" in the source database "%2!s!".
//
#define DTS_E_TRANSFERDBTASKS_SRCFILENOTFOUND ((HRESULT)0xC00292A9L)

////////////////////////////////////////////////////////////////////////////
// Overlapping files between source db and destination db

//
// MessageId: DTS_E_TRANSFERTASKS_OVERLAPFILESET
//
// MessageText:
//
// The database file "%1!s!" is already used by the source database. Source and destination databases cannot use the same database files.
//
#define DTS_E_TRANSFERTASKS_OVERLAPFILESET ((HRESULT)0xC00292AAL)

//
// MessageId: DTS_E_MSMQTASK_FIPS1402COMPLIANCE
//
// MessageText:
//
// The operation requested is not allowed in systems compliant with U.S. FIPS 140-2.
//
#define DTS_E_MSMQTASK_FIPS1402COMPLIANCE ((HRESULT)0xC00292B3L)

////////////////////////////////////////////////////////////////////////////
// Happens when the task is not configure correctly (ResultSet property or parameter types are incorrect), or if there is a problem executing the query.

//
// MessageId: DTS_E_SQLTASK_ERROREXECUTINGTHEQUERY
//
// MessageText:
//
// Executing the query "%1!s!" failed with the following error: "%2!s!". Possible failure reasons: Problems with the query, "ResultSet" property not set correctly, parameters not set correctly, or connection not established correctly.
//
#define DTS_E_SQLTASK_ERROREXECUTINGTHEQUERY ((HRESULT)0xC002F210L)

////////////////////////////////////////////////////////////////////////////
// Happens when the format of the persisted stored procedures is corrupted and cannot be loaded into the stored procedure names's string collection of the task

//
// MessageId: DTS_E_TRANSFERSPTASK_ERRORREADINGSPNAMES
//
// MessageText:
//
// Error reading stored procedure names from the xml file.
//
#define DTS_E_TRANSFERSPTASK_ERRORREADINGSPNAMES ((HRESULT)0xC002F300L)

////////////////////////////////////////////////////////////////////////////
// Happens when the xml of Transfer Stored Procedure task's main node's name is corrupted and cannot be loaded into the task.

//
// MessageId: DTS_E_TRANSFERSPTASK_INVALIDDATANODE
//
// MessageText:
//
// Invalid data node for the Transfer Stored Procedure task.
//
#define DTS_E_TRANSFERSPTASK_INVALIDDATANODE ((HRESULT)0xC002F301L)

////////////////////////////////////////////////////////////////////////////
// Happens when the connection manager specified is not of type "SMOServer"

//
// MessageId: DTS_E_TRANSFERTASKS_CONNECTIONTYPEISNOTSMOSERVER
//
// MessageText:
//
// Connection "%1!s!" is not of type "SMOServer".
//
#define DTS_E_TRANSFERTASKS_CONNECTIONTYPEISNOTSMOSERVER ((HRESULT)0xC002F302L)

////////////////////////////////////////////////////////////////////////////
// Happens when some infra structure functionality used by the task failes. The error from the system is wrapped in this message and printed out.

//
// MessageId: DTS_E_TRANSFERSPTASK_EXECUTIONFAILED
//
// MessageText:
//
// Execution failed with the following error "%1!s!".
//
#define DTS_E_TRANSFERSPTASK_EXECUTIONFAILED ((HRESULT)0xC002F303L)

//
// MessageId: DTS_E_ERROROCCURREDWITHFOLLOWINGMESSAGE
//
// MessageText:
//
// An error occurred with the following error message: "%1!s!".
//
#define DTS_E_ERROROCCURREDWITHFOLLOWINGMESSAGE ((HRESULT)0xC002F304L)

//
// MessageId: DTS_E_BITASK_EXECUTION_FAILED
//
// MessageText:
//
// Bulk insert execution failed.
//
#define DTS_E_BITASK_EXECUTION_FAILED    ((HRESULT)0xC002F305L)

//
// MessageId: DTS_E_FSTASK_INVALIDDESTPATH
//
// MessageText:
//
// Invalid destination path.
//
#define DTS_E_FSTASK_INVALIDDESTPATH     ((HRESULT)0xC002F306L)

//
// MessageId: DTS_E_FSTASK_CANTCREATEDIR
//
// MessageText:
//
// Can not create directory. User chose to fail the task if directory exists.
//
#define DTS_E_FSTASK_CANTCREATEDIR       ((HRESULT)0xC002F307L)

//
// MessageId: DTS_E_SQLTASK_ODBCNOSUPPORTTRANSACTION
//
// MessageText:
//
// The task has a transaction option of "Required" and connection "%1!s!" is of type "ODBC". ODBC connections don't support transactions.
//
#define DTS_E_SQLTASK_ODBCNOSUPPORTTRANSACTION ((HRESULT)0xC002F308L)

//
// MessageId: DTS_E_SQLTASK_ERRORASSIGINGVALUETOVAR
//
// MessageText:
//
// An error occurred while assigning a value to variable "%1!s!": "%2!s!".
//
#define DTS_E_SQLTASK_ERRORASSIGINGVALUETOVAR ((HRESULT)0xC002F309L)

//
// MessageId: DTS_E_FSTASK_SOURCEISEMPTY
//
// MessageText:
//
// The source is empty.
//
#define DTS_E_FSTASK_SOURCEISEMPTY       ((HRESULT)0xC002F30AL)

//
// MessageId: DTS_E_FSTASK_DESTINATIONISEMPTY
//
// MessageText:
//
// The destination is empty.
//
#define DTS_E_FSTASK_DESTINATIONISEMPTY  ((HRESULT)0xC002F30BL)

//
// MessageId: DTS_E_FSTASK_FILEDIRNOTFOUND
//
// MessageText:
//
// File or directory "%1!s!" does not exist.
//
#define DTS_E_FSTASK_FILEDIRNOTFOUND     ((HRESULT)0xC002F30CL)

//
// MessageId: DTS_E_FSTASK_VARSRCORDESTISEMPTY
//
// MessageText:
//
// Variable "%1!s!" is used as a source or destination and is empty.
//
#define DTS_E_FSTASK_VARSRCORDESTISEMPTY ((HRESULT)0xC002F30DL)

//
// MessageId: DTS_E_FSTASK_FILEDELETED
//
// MessageText:
//
// File or directory "%1!s!" was deleted.
//
#define DTS_E_FSTASK_FILEDELETED         ((HRESULT)0xC002F30EL)

//
// MessageId: DTS_E_FSTASK_DIRECTORYDELETED
//
// MessageText:
//
// Directory "%1!s!" was deleted.
//
#define DTS_E_FSTASK_DIRECTORYDELETED    ((HRESULT)0xC002F30FL)

//
// MessageId: DTS_E_WMIDRTASK_VARIABLETYPEISNOTOBJECT
//
// MessageText:
//
// The variable "%1!s!" should be of type object to be assigned a data table.
//
#define DTS_E_WMIDRTASK_VARIABLETYPEISNOTOBJECT ((HRESULT)0xC002F310L)

//
// MessageId: DTS_E_WMIDRTASK_VARIABLETYPEISNOTSTRING
//
// MessageText:
//
// The variable "%1!s!" does not have a string data type.
//
#define DTS_E_WMIDRTASK_VARIABLETYPEISNOTSTRING ((HRESULT)0xC002F311L)

//
// MessageId: DTS_E_FTPTASK_CANNOTACQUIRECONNECTION
//
// MessageText:
//
// There was an error acquiring the FTP connection. Verify that a valid connection type is specified in "%1!s!".
//
#define DTS_E_FTPTASK_CANNOTACQUIRECONNECTION ((HRESULT)0xC002F312L)

//
// MessageId: DTS_E_FTPTASK_CONNECTIONNOTFOUND
//
// MessageText:
//
// The FTP connection manager "%1!s!" can not be found.
//
#define DTS_E_FTPTASK_CONNECTIONNOTFOUND ((HRESULT)0xC002F313L)

//
// MessageId: DTS_E_FTPTASK_FILEUSAGETYPEERROR
//
// MessageText:
//
// File usage type of connection "%1!s!" should be "%2!s!" for operation "%3!s!".
//
#define DTS_E_FTPTASK_FILEUSAGETYPEERROR ((HRESULT)0xC002F314L)

//
// MessageId: DTS_E_TRANSFERTASKS_SOURCECANTBESAMEASDESTINATION
//
// MessageText:
//
// The source server can not be the same as the destination server.
//
#define DTS_E_TRANSFERTASKS_SOURCECANTBESAMEASDESTINATION ((HRESULT)0xC002F315L)

//
// MessageId: DTS_E_ERRMSGTASK_EMPTYSOURCELIST
//
// MessageText:
//
// There are no Error Messages to transfer.
//
#define DTS_E_ERRMSGTASK_EMPTYSOURCELIST ((HRESULT)0xC002F316L)

//
// MessageId: DTS_E_ERRMSGTASK_DIFFERENTMESSAGEANDLANGUAGESIZES
//
// MessageText:
//
// The lists of error messages and their corresponding languages are of different sizes.
//
#define DTS_E_ERRMSGTASK_DIFFERENTMESSAGEANDLANGUAGESIZES ((HRESULT)0xC002F317L)

//
// MessageId: DTS_E_ERRMSGTASK_ERRORMESSAGEOUTOFRANGE
//
// MessageText:
//
// The error message id "%1!s!" is out of the allowed range of user defined error messages. User defined error message ids are between 50000 and 2147483647.
//
#define DTS_E_ERRMSGTASK_ERRORMESSAGEOUTOFRANGE ((HRESULT)0xC002F318L)

//
// MessageId: DTS_E_TRANSFERTASKS_NOTRANSACTIONSUPPORT
//
// MessageText:
//
// This task can not participate in a transaction.
//
#define DTS_E_TRANSFERTASKS_NOTRANSACTIONSUPPORT ((HRESULT)0xC002F319L)

//
// MessageId: DTS_E_ERRMSGTASK_FAILEDTOTRANSFERERRORMESSAGES
//
// MessageText:
//
// Failed to transfer some or all of the Error Messages.
//
#define DTS_E_ERRMSGTASK_FAILEDTOTRANSFERERRORMESSAGES ((HRESULT)0xC002F320L)

//
// MessageId: DTS_E_ERRMSGTASK_ERRORMESSAGEALREADYEXISTS
//
// MessageText:
//
// The error message "%1!s!" already exists at destination server.
//
#define DTS_E_ERRMSGTASK_ERRORMESSAGEALREADYEXISTS ((HRESULT)0xC002F321L)

//
// MessageId: DTS_E_ERRMSGTASK_ERRORMESSAGECANTBEFOUND
//
// MessageText:
//
// The error message "%1!s!" can not be found at source server.
//
#define DTS_E_ERRMSGTASK_ERRORMESSAGECANTBEFOUND ((HRESULT)0xC002F324L)

//
// MessageId: DTS_E_TRANSFERTASKS_EXECUTIONFAILED
//
// MessageText:
//
// Execution failed with the following error: "%1!s!".
//
#define DTS_E_TRANSFERTASKS_EXECUTIONFAILED ((HRESULT)0xC002F325L)

//
// MessageId: DTS_E_JOBSTASK_FAILEDTOTRANSFERJOBS
//
// MessageText:
//
// Failed to transfer the Job(s).
//
#define DTS_E_JOBSTASK_FAILEDTOTRANSFERJOBS ((HRESULT)0xC002F327L)

//
// MessageId: DTS_E_JOBSTASK_EMPTYSOURCELIST
//
// MessageText:
//
// There are no Jobs to transfer.
//
#define DTS_E_JOBSTASK_EMPTYSOURCELIST   ((HRESULT)0xC002F330L)

//
// MessageId: DTS_E_JOBSTASK_JOBEXISTSATDEST
//
// MessageText:
//
// The job "%1!s!" already exists at destination server.
//
#define DTS_E_JOBSTASK_JOBEXISTSATDEST   ((HRESULT)0xC002F331L)

//
// MessageId: DTS_E_JOBSTASK_JOBCANTBEFOUND
//
// MessageText:
//
// The job "%1!s!" can not be found at source server.
//
#define DTS_E_JOBSTASK_JOBCANTBEFOUND    ((HRESULT)0xC002F334L)

//
// MessageId: DTS_E_LOGINSTASK_EMPTYLIST
//
// MessageText:
//
// The list of "Logins" to transfer is empty.
//
#define DTS_E_LOGINSTASK_EMPTYLIST       ((HRESULT)0xC002F337L)

//
// MessageId: DTS_E_LOGINSTASK_CANTGETLOGINSNAMELIST
//
// MessageText:
//
// Can not get the list of "Logins" from source server.
//
#define DTS_E_LOGINSTASK_CANTGETLOGINSNAMELIST ((HRESULT)0xC002F338L)

//
// MessageId: DTS_E_LOGINSTASK_ERRORLOGINEXISTS
//
// MessageText:
//
// Login "%1!s!" already exists at destination server.
//
#define DTS_E_LOGINSTASK_ERRORLOGINEXISTS ((HRESULT)0xC002F340L)

//
// MessageId: DTS_E_LOGINSTASK_LOGINNOTFOUND
//
// MessageText:
//
// Login "%1!s!" does not exist at source.
//
#define DTS_E_LOGINSTASK_LOGINNOTFOUND   ((HRESULT)0xC002F342L)

//
// MessageId: DTS_E_LOGINSTASK_FAILEDTOTRANSFERLOGINS
//
// MessageText:
//
// Failed to transfer some or all of the logins.
//
#define DTS_E_LOGINSTASK_FAILEDTOTRANSFERLOGINS ((HRESULT)0xC002F344L)

//
// MessageId: DTS_E_STOREDPROCSTASK_FAILEDTOTRANSFERSPS
//
// MessageText:
//
// Failed to transfer the stored procedure(s). More informative error should have been raised.
//
#define DTS_E_STOREDPROCSTASK_FAILEDTOTRANSFERSPS ((HRESULT)0xC002F345L)

//
// MessageId: DTS_E_STOREDPROCSTASK_STOREDPROCNOTFOUND
//
// MessageText:
//
// Stored Procedure "%1!s!" is not found at the source.
//
#define DTS_E_STOREDPROCSTASK_STOREDPROCNOTFOUND ((HRESULT)0xC002F346L)

//
// MessageId: DTS_E_STOREDPROCSTASK_ERRORSTOREDPROCEDUREEXISTS
//
// MessageText:
//
// Stored procedure "%1!s!" already exists at destination server.
//
#define DTS_E_STOREDPROCSTASK_ERRORSTOREDPROCEDUREEXISTS ((HRESULT)0xC002F349L)

//
// MessageId: DTS_E_STOREDPROCSTASK_EMPTYSOURCELIST
//
// MessageText:
//
// There are no stored procedures to transfer.
//
#define DTS_E_STOREDPROCSTASK_EMPTYSOURCELIST ((HRESULT)0xC002F350L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_FAILEDTOTRANSFEROBJECTS
//
// MessageText:
//
// Failed to transfer the object(s).
//
#define DTS_E_TRANSOBJECTSTASK_FAILEDTOTRANSFEROBJECTS ((HRESULT)0xC002F353L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_EMPTYLIST
//
// MessageText:
//
// The list of "Objects" to transfer is empty.
//
#define DTS_E_TRANSOBJECTSTASK_EMPTYLIST ((HRESULT)0xC002F354L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOSPATSOURCE
//
// MessageText:
//
// Stored procedure "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOSPATSOURCE ((HRESULT)0xC002F355L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_SPALREADYATDEST
//
// MessageText:
//
// Stored procedure "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_SPALREADYATDEST ((HRESULT)0xC002F356L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSPS
//
// MessageText:
//
// An error occurred while trying to get set the Stored Procedures list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSPS ((HRESULT)0xC002F357L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NORULEATSOURCE
//
// MessageText:
//
// Rule "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NORULEATSOURCE ((HRESULT)0xC002F359L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_RULEALREADYATDEST
//
// MessageText:
//
// Rule "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_RULEALREADYATDEST ((HRESULT)0xC002F360L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGRULES
//
// MessageText:
//
// An error occurred while trying to get set the Rules list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGRULES ((HRESULT)0xC002F361L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOTABLEATSOURCE
//
// MessageText:
//
// Table "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOTABLEATSOURCE ((HRESULT)0xC002F363L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_TABLEALREADYATDEST
//
// MessageText:
//
// Table "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_TABLEALREADYATDEST ((HRESULT)0xC002F364L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGTABLES
//
// MessageText:
//
// An error occurred while trying to get set the Tables list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGTABLES ((HRESULT)0xC002F365L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOVIEWATSOURCE
//
// MessageText:
//
// View "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOVIEWATSOURCE ((HRESULT)0xC002F367L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_VIEWALREADYATDEST
//
// MessageText:
//
// View "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_VIEWALREADYATDEST ((HRESULT)0xC002F368L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGVIEWS
//
// MessageText:
//
// An error occurred while trying to get set the Views list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGVIEWS ((HRESULT)0xC002F369L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOUDFATSOURCE
//
// MessageText:
//
// User Defined Function "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOUDFATSOURCE ((HRESULT)0xC002F371L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_UDFALREADYATDEST
//
// MessageText:
//
// User Defined Function "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_UDFALREADYATDEST ((HRESULT)0xC002F372L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUDFS
//
// MessageText:
//
// An error occurred while trying to get set the User Defined Functions list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUDFS ((HRESULT)0xC002F373L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NODEFAULTATSOURCE
//
// MessageText:
//
// Default "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NODEFAULTATSOURCE ((HRESULT)0xC002F375L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_DEFAULTALREADYATDEST
//
// MessageText:
//
// Default "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_DEFAULTALREADYATDEST ((HRESULT)0xC002F376L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGDEFAULTS
//
// MessageText:
//
// An error occurred while trying to get set the Defaults list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGDEFAULTS ((HRESULT)0xC002F377L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOUDDTATSOURCE
//
// MessageText:
//
// User Defined Data Type "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOUDDTATSOURCE ((HRESULT)0xC002F379L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_UDDTALREADYATDEST
//
// MessageText:
//
// User Defined Data Type "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_UDDTALREADYATDEST ((HRESULT)0xC002F380L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUDDTS
//
// MessageText:
//
// An error occurred while trying to get set the User Defined Data Types list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUDDTS ((HRESULT)0xC002F381L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOPFATSOURCE
//
// MessageText:
//
// Partition Function "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOPFATSOURCE ((HRESULT)0xC002F383L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_PFALREADYATDEST
//
// MessageText:
//
// Partition Function "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_PFALREADYATDEST ((HRESULT)0xC002F384L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGPFS
//
// MessageText:
//
// An error occurred while trying to get set the Partition Functions list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGPFS ((HRESULT)0xC002F385L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOPSATSOURCE
//
// MessageText:
//
// Partition Scheme "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOPSATSOURCE ((HRESULT)0xC002F387L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_PSALREADYATDEST
//
// MessageText:
//
// Partition Scheme "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_PSALREADYATDEST ((HRESULT)0xC002F388L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGPSS
//
// MessageText:
//
// An error occurred while trying to get set the Partition Schemes list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGPSS ((HRESULT)0xC002F389L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOSCHEMAATSOURCE
//
// MessageText:
//
// Schema "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOSCHEMAATSOURCE ((HRESULT)0xC002F391L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_SCHEMAALREADYATDEST
//
// MessageText:
//
// Schema "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_SCHEMAALREADYATDEST ((HRESULT)0xC002F392L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSCHEMAS
//
// MessageText:
//
// An error occurred while trying to get set the Schemas list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSCHEMAS ((HRESULT)0xC002F393L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOSQLASSEMBLYATSOURCE
//
// MessageText:
//
// SqlAssembly "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOSQLASSEMBLYATSOURCE ((HRESULT)0xC002F395L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_SQLASSEMBLYALREADYATDEST
//
// MessageText:
//
// SqlAssembly "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_SQLASSEMBLYALREADYATDEST ((HRESULT)0xC002F396L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSQLASSEMBLIES
//
// MessageText:
//
// An error occurred while trying to get set the SqlAssemblies list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGSQLASSEMBLIES ((HRESULT)0xC002F397L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOAGGREGATEATSOURCE
//
// MessageText:
//
// User Defined Aggregate "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOAGGREGATEATSOURCE ((HRESULT)0xC002F399L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_AGGREGATEALREADYATDEST
//
// MessageText:
//
// User Defined Aggregate "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_AGGREGATEALREADYATDEST ((HRESULT)0xC002F400L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGAGGREGATES
//
// MessageText:
//
// An error occurred while trying to get set the User Defined Aggregates list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGAGGREGATES ((HRESULT)0xC002F401L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOTYPEATSOURCE
//
// MessageText:
//
// User Defined Type "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOTYPEATSOURCE ((HRESULT)0xC002F403L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_TYPEALREADYATDEST
//
// MessageText:
//
// User Defined Type "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_TYPEALREADYATDEST ((HRESULT)0xC002F404L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGTYPES
//
// MessageText:
//
// An error occurred while trying to get set the User Defined Types list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGTYPES ((HRESULT)0xC002F405L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOXMLSCHEMACOLLECTIONATSOURCE
//
// MessageText:
//
// XmlSchemaCollection "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOXMLSCHEMACOLLECTIONATSOURCE ((HRESULT)0xC002F407L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_XMLSCHEMACOLLECTIONALREADYATDEST
//
// MessageText:
//
// XmlSchemaCollection "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_XMLSCHEMACOLLECTIONALREADYATDEST ((HRESULT)0xC002F408L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGXMLSCHEMACOLLECTIONS
//
// MessageText:
//
// An error occurred while trying to get set the XmlSchemaCollections list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGXMLSCHEMACOLLECTIONS ((HRESULT)0xC002F409L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_SUPPORTEDONYUKONONLY
//
// MessageText:
//
// Objects of type "%1!s!" are only supported between SQL Server 2005 or newer servers.
//
#define DTS_E_TRANSOBJECTSTASK_SUPPORTEDONYUKONONLY ((HRESULT)0xC002F411L)

//
// MessageId: DTS_E_LOGINSTASK_EMPTYDATABASELIST
//
// MessageText:
//
// The databases list is empty.
//
#define DTS_E_LOGINSTASK_EMPTYDATABASELIST ((HRESULT)0xC002F413L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOLOGINATSOURCE
//
// MessageText:
//
// Login "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOLOGINATSOURCE ((HRESULT)0xC002F414L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_LOGINALREADYATDEST
//
// MessageText:
//
// Login "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_LOGINALREADYATDEST ((HRESULT)0xC002F416L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGLOGINS
//
// MessageText:
//
// An error occurred while trying to get set the Logins list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGLOGINS ((HRESULT)0xC002F417L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_NOUSERATSOURCE
//
// MessageText:
//
// User "%1!s!" does not exist at the source.
//
#define DTS_E_TRANSOBJECTSTASK_NOUSERATSOURCE ((HRESULT)0xC002F419L)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_USERALREADYATDEST
//
// MessageText:
//
// User "%1!s!" already exists at destination.
//
#define DTS_E_TRANSOBJECTSTASK_USERALREADYATDEST ((HRESULT)0xC002F41BL)

//
// MessageId: DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUSERS
//
// MessageText:
//
// An error occurred while trying to get set the Users list to transfer: "%1!s!".
//
#define DTS_E_TRANSOBJECTSTASK_ERRORHANDLINGUSERS ((HRESULT)0xC002F41CL)

//
// MessageId: DTS_E_BITASK_CANNOTRETAINCONNINTRANSACTION
//
// MessageText:
//
// The task can not have a retained connection manager in a transaction.
//
#define DTS_E_BITASK_CANNOTRETAINCONNINTRANSACTION ((HRESULT)0xC002F41FL)

////////////////////////////////////////////////////////////////////////////
// Setting a property on command object that is not supported by provider

//
// MessageId: DTS_E_SQLTASKOUTPUTENCODINGNOTSUPPORTED
//
// MessageText:
//
// Unable to obtain XML data from SQL Server as Unicode because the provider does not support the OUTPUTENCODING property.
//
#define DTS_E_SQLTASKOUTPUTENCODINGNOTSUPPORTED ((HRESULT)0xC002F421L)

//
// MessageId: DTS_E_FTPTASK_FILECONNECTIONNOTFOUND
//
// MessageText:
//
// For the FTP operation "%1!s!", the FILE connection manager "%2!s!" can not be found.
//
#define DTS_E_FTPTASK_FILECONNECTIONNOTFOUND ((HRESULT)0xC002F426L)

////////////////////////////////////////////////////////////////////////////
// Trying to drop objects on a server, when the destination and source are the same, and these objects are server level objects.

//
// MessageId: DTS_E_TRANSOBJECTSTASK_CANNOTDROPOBJECTS
//
// MessageText:
//
// "Logins" are server level objects and can not be dropped first since the source and destination are the same server. Dropping objects first will remove the logins from the source as well.
//
#define DTS_E_TRANSOBJECTSTASK_CANNOTDROPOBJECTS ((HRESULT)0xC002F428L)

////////////////////////////////////////////////////////////////////////////
// Setting a negative value for a parameter size

//
// MessageId: DTS_E_SQLTASK_PARAMSIZEERROR
//
// MessageText:
//
// Parameter "%1!s!" cannot be negative. (-1) is used for the default value.
//
#define DTS_E_SQLTASK_PARAMSIZEERROR     ((HRESULT)0xC002F429L)

////////////////////////////////////////////////////////////////////////////
// Storing a datetime2 column in a DateTime variable

//
// MessageId: DTS_E_SQLTASK_DATETRUNCATION
//
// MessageText:
//
// Possible data truncation on parameter, "%1!d!". To prevent truncation, use a string variable instead of a datetime variable for the output parameter.
//
#define DTS_E_SQLTASK_DATETRUNCATION     ((HRESULT)0xC002F431L)

//
// MessageId: DTS_E_SQLTASK_TYPECONVERSIONERROR
//
// MessageText:
//
// A type conversion error occurred: "%1!s!"
//
#define DTS_E_SQLTASK_TYPECONVERSIONERROR ((HRESULT)0xC002F443L)

//
// MessageId: DTS_E_SQLTASK_TYPEISNOTCONVERTABLE
//
// MessageText:
//
// The value type (%1!s!) can only be converted to variables of type Object.
//
#define DTS_E_SQLTASK_TYPEISNOTCONVERTABLE ((HRESULT)0xC002F444L)

//
// MessageId: DTS_E_OLEDB_CREATEACCESSOR
//
// MessageText:
//
// An error occurred while setting up a binding for the "%1!s!" column. The binding status was "%2!s!".
//
#define DTS_E_OLEDB_CREATEACCESSOR       ((HRESULT)0xC002F445L)

//
// MessageId: DTS_E_OLEDB_CREATEACCESSOR_UNSUPPORTEDCONVERSION
//
// MessageText:
//
// An error occurred while setting up a binding for the "%1!s!" column. The binding status was "%2!s!". The data flow column type is "%3!s!". The conversion from the OLE DB type of "%4!s!" to the destination column type of "%5!s!" might not be supported by this provider.
//
#define DTS_E_OLEDB_CREATEACCESSOR_UNSUPPORTEDCONVERSION ((HRESULT)0xC002F446L)

//
// MessageId: DTS_I_FSTASK_DIRECTORYDELETED
//
// MessageText:
//
// Directory "%1!s!" was deleted.
//
#define DTS_I_FSTASK_DIRECTORYDELETED    ((HRESULT)0x40029161L)

//
// MessageId: DTS_I_FSTASK_FILEDELETED
//
// MessageText:
//
// File or directory "%1!s!" was deleted.
//
#define DTS_I_FSTASK_FILEDELETED         ((HRESULT)0x40029162L)

////////////////////////////////////////////////////////////////////////////
// The database on the destination is being overwritten because it exists and overwrite is set to true

//
// MessageId: DTS_I_TRANSFERDBTASK_OVERWRITEDB
//
// MessageText:
//
// Overwriting the database "%1!s!" on the destination server "%2!s!".
//
#define DTS_I_TRANSFERDBTASK_OVERWRITEDB ((HRESULT)0x400292A8L)

//
// MessageId: DTS_I_SOMETHINGHAPPENED
//
// MessageText:
//
// "%1!s!".
//
#define DTS_I_SOMETHINGHAPPENED          ((HRESULT)0x4002F304L)

//
// MessageId: DTS_I_ERRMSGTASK_SKIPPINGERRORMESSAGEALREADYEXISTS
//
// MessageText:
//
// Skipping error message "%1!s!" since it already exists on the destination server.
//
#define DTS_I_ERRMSGTASK_SKIPPINGERRORMESSAGEALREADYEXISTS ((HRESULT)0x4002F323L)

//
// MessageId: DTS_I_ERRMSGTASK_TRANSFEREDNERRORMESSAGES
//
// MessageText:
//
// "%1!s!" Error Messages were transferred.
//
#define DTS_I_ERRMSGTASK_TRANSFEREDNERRORMESSAGES ((HRESULT)0x4002F326L)

//
// MessageId: DTS_I_STOREDPROCSTASKS_TRANSFEREDNSPS
//
// MessageText:
//
// The task transferred "%1!s!" Stored Procedures.
//
#define DTS_I_STOREDPROCSTASKS_TRANSFEREDNSPS ((HRESULT)0x4002F351L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_TRANSFEREDNOBJECTS
//
// MessageText:
//
// Transferred "%1!s!" objects.
//
#define DTS_I_TRANSOBJECTSTASK_TRANSFEREDNOBJECTS ((HRESULT)0x4002F352L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOSPSTOTRANSFER
//
// MessageText:
//
// There are no Stored Procedures to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOSPSTOTRANSFER ((HRESULT)0x4002F358L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NORULESTOTRANSFER
//
// MessageText:
//
// There are no Rules to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NORULESTOTRANSFER ((HRESULT)0x4002F362L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOTABLESTOTRANSFER
//
// MessageText:
//
// There are no Tables to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOTABLESTOTRANSFER ((HRESULT)0x4002F366L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOVIEWSTOTRANSFER
//
// MessageText:
//
// There are no Views to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOVIEWSTOTRANSFER ((HRESULT)0x4002F370L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOUDFSTOTRANSFER
//
// MessageText:
//
// There are no User Defined Functions to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOUDFSTOTRANSFER ((HRESULT)0x4002F374L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NODEFAULTSTOTRANSFER
//
// MessageText:
//
// There are no Defaults to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NODEFAULTSTOTRANSFER ((HRESULT)0x4002F378L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOUDDTSTOTRANSFER
//
// MessageText:
//
// There are no User Defined Data Types to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOUDDTSTOTRANSFER ((HRESULT)0x4002F382L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOPFSTOTRANSFER
//
// MessageText:
//
// There are no Partition Functions to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOPFSTOTRANSFER ((HRESULT)0x4002F386L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOPSSTOTRANSFER
//
// MessageText:
//
// There are no Partition Schemes to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOPSSTOTRANSFER ((HRESULT)0x4002F390L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOSCHEMASTOTRANSFER
//
// MessageText:
//
// There are no Schemas to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOSCHEMASTOTRANSFER ((HRESULT)0x4002F394L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOSQLASSEMBLIESTOTRANSFER
//
// MessageText:
//
// There are no SqlAssemblies to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOSQLASSEMBLIESTOTRANSFER ((HRESULT)0x4002F398L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOAGGREGATESTOTRANSFER
//
// MessageText:
//
// There are no User Defined Aggregates to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOAGGREGATESTOTRANSFER ((HRESULT)0x4002F402L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOTYPESTOTRANSFER
//
// MessageText:
//
// There are no User Defined Types to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOTYPESTOTRANSFER ((HRESULT)0x4002F406L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOXMLSCHEMACOLLECTIONSTOTRANSFER
//
// MessageText:
//
// There are no XmlSchemaCollections to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOXMLSCHEMACOLLECTIONSTOTRANSFER ((HRESULT)0x4002F410L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOLOGINSTOTRANSFER
//
// MessageText:
//
// There are no Logins to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOLOGINSTOTRANSFER ((HRESULT)0x4002F418L)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_NOUSERSTOTRANSFER
//
// MessageText:
//
// There are no Users to transfer.
//
#define DTS_I_TRANSOBJECTSTASK_NOUSERSTOTRANSFER ((HRESULT)0x4002F41DL)

//
// MessageId: DTS_I_TRANSOBJECTSTASK_TRUNCATINGTABLE
//
// MessageText:
//
// Truncating table "%1!s!"
//
#define DTS_I_TRANSOBJECTSTASK_TRUNCATINGTABLE ((HRESULT)0x4002F41EL)

//
// MessageId: DTS_W_FTPTASK_OPERATIONFAILURE
//
// MessageText:
//
// Operation "%1!s!" failed.
//
#define DTS_W_FTPTASK_OPERATIONFAILURE   ((HRESULT)0x80020918L)

////////////////////////////////////////////////////////////////////////////
// MSMQ only uses RC2 and RC4 to encrypt data.

//
// MessageId: DTS_W_MSMQTASK_USE_WEAK_ENCRYPTION
//
// MessageText:
//
// The encryption algorithm "%1!s!" uses weak encryption.
//
#define DTS_W_MSMQTASK_USE_WEAK_ENCRYPTION ((HRESULT)0x800283A5L)

//
// MessageId: DTS_W_FSTASK_OPERATIONFAILURE
//
// MessageText:
//
// Task failed to execute operation "%1!s!".
//
#define DTS_W_FSTASK_OPERATIONFAILURE    ((HRESULT)0x80029164L)

//
// MessageId: DTS_W_EXECPROCTASK_FILENOTINPATH
//
// MessageText:
//
// File/Process "%1!s!" is not in path.
//
#define DTS_W_EXECPROCTASK_FILENOTINPATH ((HRESULT)0x80029185L)

//
// MessageId: DTS_W_SENDMAILTASK_SUBJECT_MISSING
//
// MessageText:
//
// The subject is empty.
//
#define DTS_W_SENDMAILTASK_SUBJECT_MISSING ((HRESULT)0x800291C6L)

//
// MessageId: DTS_W_SENDMAILTASK_ERROR_IN_TO_LINE
//
// MessageText:
//
// The address in the "To" line is malformed. It is either missing the "@" symbol or is not valid.
//
#define DTS_W_SENDMAILTASK_ERROR_IN_TO_LINE ((HRESULT)0x800291C7L)

//
// MessageId: DTS_W_SENDMAILTASK_AT_MISSING_IN_FROM
//
// MessageText:
//
// The address in the "From" line is malformed. It is either missing the "@" symbol or is not valid.
//
#define DTS_W_SENDMAILTASK_AT_MISSING_IN_FROM ((HRESULT)0x800291C8L)

//
// MessageId: DTS_w_SENDMAILTASK_ERROR_IN_CC_LINE
//
// MessageText:
//
// The address in the "Cc" line is malformed. It is either missing the "@" symbol or is not valid.
//
#define DTS_w_SENDMAILTASK_ERROR_IN_CC_LINE ((HRESULT)0x800291C9L)

//
// MessageId: DTS_w_SENDMAILTASK_ERROR_IN_BCC_LINE
//
// MessageText:
//
// The address in the "Bcc" line is malformed. It is either missing the "@" symbol or is not valid.
//
#define DTS_w_SENDMAILTASK_ERROR_IN_BCC_LINE ((HRESULT)0x800291CAL)

//
// MessageId: DTS_W_XMLTASK_DIFFFAILURE
//
// MessageText:
//
// The two XML documents are different.
//
#define DTS_W_XMLTASK_DIFFFAILURE        ((HRESULT)0x8002927AL)

//
// MessageId: DTS_W_XMLTASK_DTDVALIDATIONWARNING
//
// MessageText:
//
// DTD Validation will use the DTD file defined in the DOCTYPE line in the XML document. It will not use what is assigned to the property "%1!s!".
//
#define DTS_W_XMLTASK_DTDVALIDATIONWARNING ((HRESULT)0x8002928CL)

//
// MessageId: DTS_W_XMLTASK_VALIDATIONFAILURE
//
// MessageText:
//
// Task failed to validate "%1!s!".
//
#define DTS_W_XMLTASK_VALIDATIONFAILURE  ((HRESULT)0x8002928DL)

////////////////////////////////////////////////////////////////////////////
// The value in the XML was invalid so it is being set to copy

//
// MessageId: DTS_W_TRANSFERDBTASK_ACTIONSETTOCOPY
//
// MessageText:
//
// The transfer action value was invalid.  It is being set to copy.
//
#define DTS_W_TRANSFERDBTASK_ACTIONSETTOCOPY ((HRESULT)0x80029291L)

////////////////////////////////////////////////////////////////////////////
// The value in the XML was invalid and it is being set to an online transfer

//
// MessageId: DTS_W_TRANSFERDBTASK_METHODSETTOONLINE
//
// MessageText:
//
// The transfer method value was invalid.  It is being set to an online transfer.
//
#define DTS_W_TRANSFERDBTASK_METHODSETTOONLINE ((HRESULT)0x80029292L)

//
// MessageId: DTS_W_PROBLEMOCCURREDWITHFOLLOWINGMESSAGE
//
// MessageText:
//
// A problem occurred with the following messages: "%1!s!".
//
#define DTS_W_PROBLEMOCCURREDWITHFOLLOWINGMESSAGE ((HRESULT)0x8002F304L)

//
// MessageId: DTS_W_ERRMSGTASK_ERRORMESSAGEALREADYEXISTS
//
// MessageText:
//
// The error message "%1!s!" already exists at destination server.
//
#define DTS_W_ERRMSGTASK_ERRORMESSAGEALREADYEXISTS ((HRESULT)0x8002F322L)

//
// MessageId: DTS_W_JOBSTASK_JOBEXISTSATDEST
//
// MessageText:
//
// The job "%1!s!" already exists at destination server.
//
#define DTS_W_JOBSTASK_JOBEXISTSATDEST   ((HRESULT)0x8002F331L)

//
// MessageId: DTS_W_JOBSTASK_SKIPPINGJOBEXISTSATDEST
//
// MessageText:
//
// Skipping the transfer of job "%1!s!" since it already exists at destination.
//
#define DTS_W_JOBSTASK_SKIPPINGJOBEXISTSATDEST ((HRESULT)0x8002F332L)

//
// MessageId: DTS_W_JOBSTASK_OVERWRITINGJOB
//
// MessageText:
//
// Overwriting the job "%1!s!" at destination server.
//
#define DTS_W_JOBSTASK_OVERWRITINGJOB    ((HRESULT)0x8002F333L)

//
// MessageId: DTS_W_LOGINSTASK_ENUMVALUEINCORRECT
//
// MessageText:
//
// Persisted enumeration value of property "FailIfExists" was changed and rendered invalid. Resetting to default.
//
#define DTS_W_LOGINSTASK_ENUMVALUEINCORRECT ((HRESULT)0x8002F339L)

//
// MessageId: DTS_W_LOGINSTASK_OVERWRITINGLOGINATDEST
//
// MessageText:
//
// Overwriting Login "%1!s!" at destination.
//
#define DTS_W_LOGINSTASK_OVERWRITINGLOGINATDEST ((HRESULT)0x8002F343L)

//
// MessageId: DTS_E_STOREDPROCSTASK_OVERWRITINGSPATDESTINATION
//
// MessageText:
//
// Overwriting Stored Procedure "%1!s!" at destination.
//
#define DTS_E_STOREDPROCSTASK_OVERWRITINGSPATDESTINATION ((HRESULT)0x8002F347L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_SPALREADYATDEST
//
// MessageText:
//
// Stored procedure "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_SPALREADYATDEST ((HRESULT)0x8002F356L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_RULEALREADYATDEST
//
// MessageText:
//
// Rule "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_RULEALREADYATDEST ((HRESULT)0x8002F360L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_TABLEALREADYATDEST
//
// MessageText:
//
// Table "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_TABLEALREADYATDEST ((HRESULT)0x8002F364L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_VIEWALREADYATDEST
//
// MessageText:
//
// View "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_VIEWALREADYATDEST ((HRESULT)0x8002F368L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_UDFALREADYATDEST
//
// MessageText:
//
// User Defined Function "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_UDFALREADYATDEST ((HRESULT)0x8002F372L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_DEFAULTALREADYATDEST
//
// MessageText:
//
// Default "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_DEFAULTALREADYATDEST ((HRESULT)0x8002F376L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_UDDTALREADYATDEST
//
// MessageText:
//
// User Defined Data Type "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_UDDTALREADYATDEST ((HRESULT)0x8002F380L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_PFALREADYATDEST
//
// MessageText:
//
// Partition Function "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_PFALREADYATDEST ((HRESULT)0x8002F384L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_PSALREADYATDEST
//
// MessageText:
//
// Partition Scheme "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_PSALREADYATDEST ((HRESULT)0x8002F388L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_SCHEMAALREADYATDEST
//
// MessageText:
//
// Schema "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_SCHEMAALREADYATDEST ((HRESULT)0x8002F391L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_SQLASSEMBLYALREADYATDEST
//
// MessageText:
//
// SqlAssembly "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_SQLASSEMBLYALREADYATDEST ((HRESULT)0x8002F396L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_AGGREGATEALREADYATDEST
//
// MessageText:
//
// User Defined Aggregate "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_AGGREGATEALREADYATDEST ((HRESULT)0x8002F400L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_TYPEALREADYATDEST
//
// MessageText:
//
// User Defined Type "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_TYPEALREADYATDEST ((HRESULT)0x8002F404L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_XMLSCHEMACOLLECTIONALREADYATDEST
//
// MessageText:
//
// XmlSchemaCollection "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_XMLSCHEMACOLLECTIONALREADYATDEST ((HRESULT)0x8002F408L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_NOELEMENTSPECIFIEDTOTRANSFER
//
// MessageText:
//
// There are no elements specified to transfer.
//
#define DTS_W_TRANSOBJECTSTASK_NOELEMENTSPECIFIEDTOTRANSFER ((HRESULT)0x8002F412L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_LOGINALREADYATDEST
//
// MessageText:
//
// Login "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_LOGINALREADYATDEST ((HRESULT)0x8002F415L)

//
// MessageId: DTS_W_TRANSOBJECTSTASK_USERALREADYATDEST
//
// MessageText:
//
// User "%1!s!" already exists at destination.
//
#define DTS_W_TRANSOBJECTSTASK_USERALREADYATDEST ((HRESULT)0x8002F41AL)

//
// MessageId: DTS_W_SQLTASK_POSSIBLEDATETRUNCATION
//
// MessageText:
//
// Possible data truncation on output parameter, "%1!d!". The task cannot determine the datetime type of the output parameter because the BypassPrepare property is set to True. If the output parameter type is datetime2, use a string variable instead of a datetime variable for the output parameter to prevent truncation. To allow the task to determine the output parameter type in the future, set BypassPrepare to False.
//
#define DTS_W_SQLTASK_POSSIBLEDATETRUNCATION ((HRESULT)0x8002F500L)

//
// MessageId: DTS_E_FAILED_EXECUTE_IS_SERVER_PACKAGE
//
// MessageText:
//
// Failed to execute the pacakge that has been deployed to the Integration Services catalog.
//
#define DTS_E_FAILED_EXECUTE_IS_SERVER_PACKAGE ((HRESULT)0xC0100037L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY            ((HRESULT)0x40103100L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_PREEXECUTE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_PREEXECUTE ((HRESULT)0x40103101L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_POSTEXECUTE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_POSTEXECUTE ((HRESULT)0x40103102L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_PREVALIDATE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_PREVALIDATE ((HRESULT)0x40103103L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_POSTVALIDATE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_POSTVALIDATE ((HRESULT)0x40103104L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_WARNING
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_WARNING    ((HRESULT)0x40103105L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_ERROR
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_ERROR      ((HRESULT)0x40103106L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_TASKFAILED
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_TASKFAILED ((HRESULT)0x40103107L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_PROGRESS
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_PROGRESS   ((HRESULT)0x40103108L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_EXECSTATCHANGE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_EXECSTATCHANGE ((HRESULT)0x40103109L)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_VARVALCHANGE
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_VARVALCHANGE ((HRESULT)0x4010310AL)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_CUSTOMEVENT
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_CUSTOMEVENT ((HRESULT)0x4010310BL)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_PACKAGESTART
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_PACKAGESTART ((HRESULT)0x4010310CL)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_PACKAGEEND
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_PACKAGEEND ((HRESULT)0x4010310DL)

//
// MessageId: DTS_MSG_EVENTLOGENTRY_INFORMATION
//
// MessageText:
//
//   Event Name: %1%r Message: %9%r Operator: %2%r Source Name: %3%r Source ID: %4%r Execution ID: %5%r Start Time: %6%r End Time: %7%r Data Code: %8
//
#define DTS_MSG_EVENTLOGENTRY_INFORMATION ((HRESULT)0x4010310EL)

