function do_ajax_diagram() {

    $("#loading_diagram").html("<img src=\"/Content/images/loading.gif\" />");
    //make the AJAX request with the given data from the `ajaxes` array of objects
    $.ajax({

        url: base_api_url + '/API/Diagram/Get',
        data: { 'from_date': $("#fromdate").val(), 'to_date': $("#todate").val() },
        type: "GET",
        dataType: "json",
        cache: false,

        success: function (serverResponse) {

            $("#loading_diagram").html("");
            returnedData = serverResponse.Data;
            //console.log(returnedData);
            //  console.log(diagram.shapes[0]);

            $.each(returnedData, function (k, v) {
                /// do stuff

                //console.log(GAS_BOILER_Text_1.options.content.text);
                //GAS_BOILER_Text_1.options.content.text = "45465446546";


                var tb = v.Value_String.format(2, 3, ',', '.') + v.Mertric_Unit.Unit_Symbol;
                //var tb = new kendo.dataviz.diagram.TextBlock({
                //    text: v.Value_String + v.Mertric_Unit.Unit_Symbol,
                //    color: "#000000",
                //    fontSize: font_size
                //});


                if (v.Metric_Id == 6213) {
                    //GAS_BOILER_Text_1.visual.append(tb);
                    $("#gas_boiler").html(tb);
                }
                else if (v.Metric_Id == 6214) {
                    //GAS_CHP_Text_1.visual.append(tb);
                    $("#gas_chp").html(tb);
                }
                else if (v.Metric_Id == 6215) {
                    //BIOFUEL_CHP_Text_1.visual.append(tb);
                    $("#biofuel_chp").html(tb);
                }
                else if (v.Metric_Id == 6216) {
                    //GRID_ELEC_ELECTRICITY_Text_1.visual.append(tb);
                    $("#gridelec_electricity").html(tb);
                }
                else if (v.Metric_Id == 6217) {
                    //PV_ELEC_ELECTRICITY_Text_1.visual.append(tb);
                    $("#pvcelec_electricity").html(tb);
                }
                else if (v.Metric_Id == 6218) {
                    ////GAS_CHP_Text_1.visual.append(tb);
                    //$("#gas_boiler").html(tb);
                }
                else if (v.Metric_Id == 6219) {
                    //BOILER_POINT_Text_1.visual.append(tb);
                    $("#boiler_first_total").html(tb);
                }
                else if (v.Metric_Id == 6220) {
                    //SEC_TOTAL_TEXT.visual.append(tb);
                    $("#sec_total").html(tb);
                }
                else if (v.Metric_Id == 6221) {
                    //CHP_POINT_Text_1.visual.append(tb);
                    $("#chp_first_total").html(tb);
                }
                else if (v.Metric_Id == 6222) {
                    //CHP_ELECTRICITY_Text.visual.append(tb);
                    $("#chp_electricity").html(tb);
                }
                else if (v.Metric_Id == 6224) {
                    //THIRD_TOTAL_TEXT.visual.append(tb);
                    $("#third_total").html(tb);
                }
                else if (v.Metric_Id == 6225) {
                    //POINT_ABSORPTION_CHILLER_TEXT.visual.append(tb);
                    $("#first_total_absorption_chiller").html(tb);
                }
                else if (v.Metric_Id == 6227) {
                    //TOTAL_TEXT.visual.append(tb);
                    $("#grand_total").html(tb);
                }
                else if (v.Metric_Id == 6228) {
                    ////CHP_ELECTRICITY_Text.visual.append(tb);
                    //$("#gas_boiler").html(tb);
                }
                else if (v.Metric_Id == 6229) {
                    //FIRST_TOTAL_TEXT.visual.append(tb);
                    $("#first_total").html(tb);
                }
                else if (v.Metric_Id == 6239) {
                    //ELECTRICITY_AIR_COOLED_CHILLER_TEXT.visual.append(tb);
                    $("#electricity_aircooled_chiller").html(tb);
                }
                else if (v.Metric_Id == 6240) {
                    //ASHP_Point_TEXT.visual.append(tb);
                    $("#ashp_first_total").html(tb);
                }
                else if (v.Metric_Id == 6242) {
                    // AIR_COOLED_CHILLER_POINT_TEXT.visual.append(tb);
                    $("#aircooled_chiller_sec_total").html(tb);
                }

                else if (v.Metric_Id == 6243) {
                    //GSHP_Point_TEXT_1.visual.append(tb);
                    $("#gshp_first_total").html(tb);
                }

                else if (v.Metric_Id == 6244) {
                    //GSHP_Point_TEXT_2.visual.append(tb);
                    $("#gshp_sec_total").html(tb);
                }

                else if (v.Metric_Id == 6246) {
                    //ABSORPTION_CHILLER_POINT_TEXT.visual.append(tb);
                    $("#absorption_chiller_sec_total").html(tb);
                }

            });


        },
        error: function () {
            $("#loading_diagram").html("Error in getting data");
        }
    });


    //Initialize
    //var x_First_Row = 10;
    //var x_Sec_Row = 300;
    //var x_Third_Row = 800;
    //var Point = kendo.dataviz.diagram.Point;
    //$("#diagram").html('');
    //var diagram = $("#diagram").kendoDiagram({

    //    readOnly: false,
    //    editable: false,


    //    shapeDefaults: {
    //        selectable: false,
    //        editable: true,

    //        //hover: {
    //        //    fill: "Orange"
    //        //}
    //    },
    //    connectionDefaults: {
    //        selectable: false,
    //        readOnly: false,
    //        editable: false
    //    }




    //}).getKendoDiagram();





    //var GAS = diagram.addShape(
    //  {
    //      x: x_First_Row,
    //      y: 10,
    //      width: 150,
    //      height: 45,
    //      fill: "#FFFF00",
    //      content: {
    //          text: "GAS",
    //          color: "#0101DF"

    //      },

    //      stroke: {
    //          width: 2
    //      },

    //  });

    //var BIOFUEL = diagram.addShape(
    //   {
    //       x: x_First_Row,
    //       y: 150,
    //       width: 150,
    //       height: 45,

    //       content: {
    //           text: "BIO FUEL",
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#04B45F"
    //   });

    //var BOILER = diagram.addShape(
    //  {
    //      x: x_Sec_Row,
    //      y: 10,
    //      width: 150,
    //      height: 45,
    //      content: {
    //          text: "BOILER"
    //       ,
    //          color: "#0101DF",
    //      },
    //      stroke: {
    //          width: 2
    //      }
    //   , fill: "#FFFFFF"
    //  });

    //var GRIDELEC = diagram.addShape(
    //   {
    //       x: x_First_Row,
    //       y: 450,
    //       width: 150,
    //       height: 45,
    //       content: {
    //           text: "GRID ELEC"
    //        ,
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#2ECCFA"
    //   });

    //var PVELEC = diagram.addShape(
    //   {
    //       x: x_First_Row,
    //       y: 530,
    //       width: 150,
    //       height: 45,
    //       content: {
    //           text: "PV ELEC"
    //        ,
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#04B45F"
    //   });

    //var CHP = diagram.addShape(
    //   {
    //       x: x_Sec_Row,
    //       y: 100,
    //       width: 150,
    //       height: 45,
    //       content: {
    //           text: "CHP"
    //        ,
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#FFFFFF"
    //   });

    //var ELECTRICITY = diagram.addShape(
    //    {
    //        x: x_Sec_Row,
    //        y: 450,
    //        width: 150,
    //        height: 45,
    //        content: {
    //            text: "ELECTRICITY"
    //         ,
    //            color: "#0101DF",
    //        },
    //        stroke: {
    //            width: 2
    //        }
    //     , fill: "#2ECCFA"
    //    });


    //var CHPHEATREJECTION = diagram.addShape(
    //    {
    //        x: x_Third_Row,
    //        y: 100,
    //        width: 200,
    //        height: 45,
    //        content: {
    //            text: "CHP HEAT REJECTION"
    //         ,
    //            color: "#0101DF",
    //        },
    //        stroke: {
    //            width: 2
    //        }
    //     , fill: "#FFFFFF"
    //    });

    //var ASHP = diagram.addShape(
    //    {
    //        x: x_Third_Row,
    //        y: 160,
    //        width: 200,
    //        height: 45,
    //        content: {
    //            text: "ASHP"
    //         ,
    //            color: "#0101DF",
    //        },
    //        stroke: {
    //            width: 2
    //        }
    //     , fill: "#FFFFFF"
    //    });

    //var GSHP = diagram.addShape(
    //   {
    //       x: x_Third_Row,
    //       y: 225,
    //       width: 200,
    //       height: 45,
    //       content: {
    //           text: "GSHP"
    //        ,
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#FFFFFF"
    //   });

    //var ABSORPTIONCHILLER = diagram.addShape(
    //   {
    //       x: x_Third_Row,
    //       y: 300,
    //       width: 225,
    //       height: 45,
    //       content: {
    //           text: "ABSORPTION CHILLER"
    //        ,
    //           color: "#0101DF",
    //       },
    //       stroke: {
    //           width: 2
    //       }
    //    , fill: "#FFFFFF"
    //   });

    //var AIRCOOLEDCHILLER = diagram.addShape(
    //    {
    //        x: x_Third_Row,
    //        y: 400,
    //        width: 200,
    //        height: 45,
    //        content: {
    //            text: "AIR COOLED CHILLER"
    //         ,
    //            color: "#0101DF",
    //        },
    //        stroke: {
    //            width: 2
    //        }
    //     , fill: "#FFFFFF"
    //    });

    //var GAS_BOILER = diagram.connect(GAS, BOILER,

    //  {

    //      selectable: false,
    //      content: { text: "" },
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  });
    //var GAS_CHP = diagram.connect(

    //  new Point(80, 55), new Point(300, 120),

    //  {

    //      points: [new Point(80, 120)],

    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }


    //  }

    //                                 );



    //var BIO_FUEL_CHP = diagram.connect(
    //  new Point(160, 180), new Point(320, 150),

    //{

    //    points: [new Point(320, 180)],
    //    endCap: {
    //        type: "ArrowEnd",
    //        color: "yellow",
    //        fill: {
    //            color: "red",

    //        },
    //        stroke: {
    //            color: "#04B45F",
    //            width: 5
    //        }
    //    },
    //    stroke: {
    //        color: "#04B45F",
    //        width: 5
    //    }
    //}

    //);


    //var CHP_ELECTRICITY = diagram.connect(
    //   CHP, ELECTRICITY, {
    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "orange",
    //               width: 8
    //           }
    //       },
    //       stroke: {
    //           color: "orange",
    //           width: 8
    //       }
    //   }

    //  );

    //var GRIDELEC_ELECTRICITY = diagram.connect(
    //    GRIDELEC, ELECTRICITY, {
    //        endCap: {
    //            type: "ArrowEnd",
    //            color: "yellow",
    //            fill: {
    //                color: "red",

    //            },
    //            stroke: {
    //                color: "orange",
    //                width: 5
    //            }
    //        },
    //        stroke: {
    //            color: "orange",
    //            width: 5
    //        }
    //    }

    //   );
    //var PVELEC_ELECTRICITY = diagram.connect(
    //    new Point(160, 550), new Point(350, 500),

    //  {

    //      points: [new Point(350, 550)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    //  );


    //var Electricity_X_First_Bend = 500;
    //var Electricity_Y_First_Bend = 472;

    //var Electricity_X_Sec_Bend = 500;

    //var ELECTRICITY_CHPHEATREJECTION = diagram.connect(
    //  ELECTRICITY, CHPHEATREJECTION, {
    //      points: [new Point(Electricity_X_First_Bend, Electricity_Y_First_Bend), new Point(Electricity_X_Sec_Bend, 120)],

    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    // );


    //var ELECTRICITY_ASHP = diagram.connect(
    //  ELECTRICITY, ASHP, {
    //      points: [new Point(Electricity_X_First_Bend, Electricity_Y_First_Bend), new Point(Electricity_X_Sec_Bend, 185)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    // );

    //var ELECTRICITY_GSHP = diagram.connect(
    //  ELECTRICITY, GSHP, {
    //      points: [new Point(Electricity_X_First_Bend, Electricity_Y_First_Bend), new Point(Electricity_X_Sec_Bend, 250)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    // );

    //var ELECTRICITY_ABSORPTIONCHILLER = diagram.connect(
    //  ELECTRICITY, ABSORPTIONCHILLER, {
    //      points: [new Point(Electricity_X_First_Bend, Electricity_Y_First_Bend), new Point(Electricity_X_Sec_Bend, 325)],
    //      endCap: {

    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    // );

    //var ELECTRICITY_AIRCOOLEDCHILLER = diagram.connect(
    //  ELECTRICITY, AIRCOOLEDCHILLER, {
    //      points: [new Point(Electricity_X_First_Bend, Electricity_Y_First_Bend), new Point(Electricity_X_Sec_Bend, 425)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "orange",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "orange",
    //          width: 5
    //      }
    //  }

    // );


    //var ELECTRICITY_TOTAL_POINT = diagram.connect(
    // new Point(450, 490), new Point(1200, 490), {

    //     endCap: {
    //         type: "ArrowEnd",
    //         color: "yellow",
    //         fill: {
    //             color: "red",

    //         },
    //         stroke: {
    //             color: "orange",
    //             width: 5
    //         }
    //     },
    //     stroke: {
    //         color: "orange",
    //         width: 5
    //     }
    // }

    //);


    //var BOILER_TO_POINT = diagram.connect(
    //   new Point(450, 30), new Point(550, 55), {
    //       points: [new Point(550, 30)],
    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "red",
    //               width: 3
    //           }
    //       },
    //       stroke: {
    //           color: "red",
    //           width: 3
    //       }
    //   }

    //  );


    //var CHP_TO_POINT = diagram.connect(
    //   new Point(450, 110), new Point(550, 85), {
    //       points: [new Point(550, 110)],
    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "red",
    //               width: 3
    //           }
    //       },
    //       stroke: {
    //           color: "red",
    //           width: 3
    //       }
    //   }

    //  );

    //var BOILER_CHP_TO_POINT = diagram.connect(
    //   new Point(550, 65), new Point(1200, 65), {

    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "red",
    //               width: 5
    //           }
    //       },
    //       stroke: {
    //           color: "red",
    //           width: 5
    //       }
    //   }

    //  );

    //var POINT_TO_CHP_HEAT_REJECTION = diagram.connect(
    //   new Point(700, 65), new Point(800, 110), {

    //       points: [new Point(700, 110)],

    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "red",
    //               width: 2
    //           }
    //       },
    //       stroke: {
    //           color: "red",
    //           width: 2
    //       }
    //   }

    //  );

    //var POINT_TO_ABSORPTION_CHILLER = diagram.connect(
    //   new Point(600, 65), new Point(800, 310), {

    //       points: [new Point(600, 310)],

    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "red",
    //               width: 2
    //           }
    //       },
    //       stroke: {
    //           color: "red",
    //           width: 2
    //       }
    //   }

    //  );

    //var AIR_COOLED_CHILLER_TO_POINT = diagram.connect(
    //   new Point(1000, 425), new Point(1200, 425), {

    //       endCap: {
    //           type: "ArrowEnd",
    //           color: "yellow",
    //           fill: {
    //               color: "red",

    //           },
    //           stroke: {
    //               color: "blue",
    //               width: 5
    //           }
    //       },
    //       stroke: {
    //           color: "blue",
    //           width: 5
    //       }
    //   }

    //  );

    //var ABSORPTION_CHILLER_TO_POINT = diagram.connect(
    //  new Point(1025, 325), new Point(1075, 415), {
    //      points: [new Point(1075, 325)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "blue",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "blue",
    //          width: 5
    //      }
    //  }

    // );


    //var GSHP_TO_POINT_BLUE = diagram.connect(
    //  new Point(1000, 250), new Point(1100, 415), {
    //      points: [new Point(1100, 250)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "blue",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "blue",
    //          width: 5
    //      }
    //  }

    // );

    //var GSHP_TO_POINT_RED = diagram.connect(
    //  new Point(1000, 240), new Point(1150, 75), {
    //      points: [new Point(1150, 240)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "red",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "red",
    //          width: 5
    //      }
    //  }

    // );

    //var ASHP_TO_POINT_RED = diagram.connect(
    //  new Point(1000, 170), new Point(1100, 75), {
    //      points: [new Point(1100, 170)],
    //      endCap: {
    //          type: "ArrowEnd",
    //          color: "yellow",
    //          fill: {
    //              color: "red",

    //          },
    //          stroke: {
    //              color: "red",
    //              width: 5
    //          }
    //      },
    //      stroke: {
    //          color: "red",
    //          width: 5
    //      }
    //  }

    // );

    //var font_size = 10;

    ////Primary
    //var GAS_BOILER_Text_1 = diagram.addShape(
    //   {
    //       x: 175,
    //       y: 5,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });
    ////CHP Primary1
    //var GAS_CHP_Text_1 = diagram.addShape(
    //   {
    //       x: 175,
    //       y: 95,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var BIOFUEL_CHP_Text_1 = diagram.addShape(
    //    {
    //        x: 175,
    //        y: 155,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var GRID_ELEC_ELECTRICITY_Text_1 = diagram.addShape(
    //    {
    //        x: 175,
    //        y: 450,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var PV_ELEC_ELECTRICITY_Text_1 = diagram.addShape(
    //    {
    //        x: 175,
    //        y: 525,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var CHP_POINT_Text_1 = diagram.addShape(
    //   {
    //       x: 475,
    //       y: 80,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var CHP_ELECTRICITY_Text = diagram.addShape(
    //    {
    //        x: 250,
    //        y: 375,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });


    ////Boiler Sec
    //var BOILER_POINT_Text_1 = diagram.addShape(
    //   {
    //       x: 475,
    //       y: 10,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var POINT_RED_Text_1 = diagram.addShape(
    //   {
    //       x: 600,
    //       y: 35,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var POINT_RED_Text_2 = diagram.addShape(
    //    {
    //        x: 700,
    //        y: 35,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var POINT_RED_Text_3 = diagram.addShape(
    //   {
    //       x: 900,
    //       y: 35,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var POINT_CHP_HEAT_REJECTION_TEXT = diagram.addShape(
    //   {
    //       x: 720,
    //       y: 80,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var POINT_ABSORPTION_CHILLER_TEXT = diagram.addShape(
    //   {
    //       x: 720,
    //       y: 280,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var ELECTRICITY_CHP_HEAT_REJECTION_TEXT = diagram.addShape(
    //    {
    //        x: 720,
    //        y: 130,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var ELECTRICITY_CHP_HEAT_ASHP_TEXT = diagram.addShape(
    //    {
    //        x: 720,
    //        y: 160,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var ASHP_Point_TEXT = diagram.addShape(
    //   {
    //       x: 1025,
    //       y: 140,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var GSHP_Point_TEXT_1 = diagram.addShape(
    //    {
    //        x: 1025,
    //        y: 210,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var GSHP_Point_TEXT_2 = diagram.addShape(
    //   {
    //       x: 1025,
    //       y: 260,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var ELECTRICITY_TEXT = diagram.addShape(
    //   {
    //       x: 430,
    //       y: 375,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var ELECTRICITY_CHP_HEAT_GSHP_TEXT = diagram.addShape(
    //   {
    //       x: 720,
    //       y: 220,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var ELECTRICITY_ABSORPTION_CHILLER_TEXT = diagram.addShape(
    //   {
    //       x: 720,
    //       y: 330,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var ABSORPTION_CHILLER_POINT_TEXT = diagram.addShape(
    //    {
    //        x: 1000,
    //        y: 350,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var ELECTRICITY_AIR_COOLED_CHILLER_TEXT = diagram.addShape(
    //    {
    //        x: 720,
    //        y: 430,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var AIR_COOLED_CHILLER_POINT_TEXT = diagram.addShape(
    //    {
    //        x: 1025,
    //        y: 430,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var FIRST_TOTAL_TEXT = diagram.addShape(
    //   {
    //       x: 1200,
    //       y: 35,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var SEC_TOTAL_TEXT = diagram.addShape(
    //   {
    //       x: 1200,
    //       y: 400,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });

    //var THIRD_TOTAL_TEXT = diagram.addShape(
    //    {
    //        x: 1200,
    //        y: 465,
    //        width: 50,
    //        height: 15,
    //        fill: "#FFFFFF",
    //        content: {
    //            text: "",
    //            color: "#000000",
    //            fontSize: font_size
    //        }
    //    });

    //var TOTAL_TEXT = diagram.addShape(
    //   {
    //       x: 1250,
    //       y: 525,
    //       width: 50,
    //       height: 15,
    //       fill: "#FFFFFF",
    //       content: {
    //           text: "",
    //           color: "#000000",
    //           fontSize: font_size
    //       }
    //   });
    //End Initialize



  
}