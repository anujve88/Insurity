//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Evaluate JavaScript code Utils.addAutoHeader('App...id PERF', false)", "snapshot=Action_1.inf");
	lr_start_transaction("Orchid_001_New_Submission - 01 - Navigate to Orchid PERF");
	truclient_step("2", "Navigate to 'http://orchidperf103.pe...widebridge.com/'", "snapshot=Action_2.inf");
	lr_end_transaction("Orchid_001_New_Submission - 01 - Navigate to Orchid PERF",0);
	truclient_step("4", "Click on E mail * textbox", "snapshot=Action_4.inf");
	truclient_step("5", "Type perfuser1@oceanwide.com in E mail * textbox", "snapshot=Action_5.inf");
	truclient_step("6", "Type ************** in Password * passwordbox", "snapshot=Action_6.inf");
	truclient_step("7", "Evaluate JavaScript code Utils.addAutoHeader('App...id PERF', false)", "snapshot=Action_7.inf");
	lr_start_transaction("Orchid_001_New_Submission - 02 - Login to Orchid PERF");
	truclient_step("8", "Press Enter key on Password * passwordbox", "snapshot=Action_8.inf");
	lr_end_transaction("Orchid_001_New_Submission - 02 - Login to Orchid PERF",0);
	truclient_step("9", "Click on Quotes & Policies", "snapshot=Action_9.inf");
	truclient_step("10", "Evaluate JavaScript code Utils.addAutoHeader('App...w Quote', false)", "snapshot=Action_10.inf");
	lr_start_transaction("Orchid_001_New_Submission - 03 - Click on Create New Quote");
	truclient_step("11", "Click on Create New Quote link", "snapshot=Action_11.inf");
	lr_end_transaction("Orchid_001_New_Submission - 03 - Click on Create New Quote",0);
	truclient_step("12", "Click on File Not Available image", "snapshot=Action_12.inf");
	truclient_step("13", "Evaluate JavaScript code Utils.addAutoHeader('App... Agency', false)", "snapshot=Action_13.inf");
	lr_start_transaction("Orchid_001_New_Submission - 04 - Select Agency");
	truclient_step("15", "Click on 1 Source Insurance Agency,... link", "snapshot=Action_15.inf");
	lr_end_transaction("Orchid_001_New_Submission - 04 - Select Agency",0);
	truclient_step("16", "Evaluate JavaScript code Utils.addAutoHeader('App... Client', false)", "snapshot=Action_16.inf");
	lr_start_transaction("Orchid_001_New_Submission - 05 - Select Totally New Client");
	truclient_step("18", "Click on #37 test link", "snapshot=Action_18.inf");
	lr_end_transaction("Orchid_001_New_Submission - 05 - Select Totally New Client",0);
	truclient_step("20", "Click on link (1) image", "snapshot=Action_20.inf");
	truclient_step("21", "Move mouse over September, 2016SuMoTuWeT...2345678Today:...", "snapshot=Action_21.inf");
	truclient_step("22", "Set Effective Date * datepicker to 30", "snapshot=Action_22.inf");
	truclient_step("24", "Select Yes from YesYesNoNo radiogroup", "snapshot=Action_24.inf");
	truclient_step("27", "Click on Please Select textbox", "snapshot=Action_27.inf");
	truclient_step("28", "Type Computer in Please Select textbox", "snapshot=Action_28.inf");
	truclient_step("30", "Select 11160 Computer Stores from Please Select autocomplete", "snapshot=Action_30.inf");
	truclient_step("33", "Select Business Owner Policy from BOPBusiness Owner Policy...pertyMonoline... radiogroup", "snapshot=Action_33.inf");
	truclient_step("34", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_34.inf");
	lr_start_transaction("Orchid_001_New_Submission - 06 - Click Save on Eligibility and Coverage Screen");
	truclient_step("37", "Click on Save button", "snapshot=Action_37.inf");
	lr_end_transaction("Orchid_001_New_Submission - 06 - Click Save on Eligibility and Coverage Screen",0);
	truclient_step("38", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_38.inf");
	lr_start_transaction("Orchid_001_New_Submission - 07 - Click Next on Elibility and Coverage Screen");
	truclient_step("39", "Click on > button", "snapshot=Action_39.inf");
	lr_end_transaction("Orchid_001_New_Submission - 07 - Click Next on Elibility and Coverage Screen",0);
	truclient_step("42", "Click on Please Select textbox", "snapshot=Action_42.inf");
	truclient_step("44", "Select option #1 from Please Select listbox", "snapshot=Action_44.inf");
	truclient_step("47", "Click on Years in Business * textbox", "snapshot=Action_47.inf");
	truclient_step("48", "Type 5 in Years in Business * textbox", "snapshot=Action_48.inf");
	truclient_step("50", "Select Owner from radiogroup (1) radiogroup", "snapshot=Action_50.inf");
	truclient_step("51", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_51.inf");
	lr_start_transaction("Orchid_001_New_Submission - 08 - Click Save on General Information Screen");
	truclient_step("53", "Click on Save button", "snapshot=Action_53.inf");
	lr_end_transaction("Orchid_001_New_Submission - 08 - Click Save on General Information Screen",0);
	truclient_step("54", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_54.inf");
	lr_start_transaction("Orchid_001_New_Submission - 09 - Click Next on General Information Screen");
	truclient_step("56", "Click on > button", "snapshot=Action_56.inf");
	lr_end_transaction("Orchid_001_New_Submission - 09 - Click Next on General Information Screen",0);
	truclient_step("57", "Evaluate JavaScript code Utils.addAutoHeader('App...on Grid', false)", "snapshot=Action_57.inf");
	lr_start_transaction("Orchid_001_New_Submission - 10 - Click Add on Location Grid");
	truclient_step("58", "Click on Add button", "snapshot=Action_58.inf");
	lr_end_transaction("Orchid_001_New_Submission - 10 - Click Add on Location Grid",0);
	truclient_step("60", "Select Yes from YesYesNoNo radiogroup", "snapshot=Action_60.inf");
	truclient_step("61", "Evaluate JavaScript code Utils.addAutoHeader('App...n Modal', false)", "snapshot=Action_61.inf");
	lr_start_transaction("Orchid_001_New_Submission - 11 - Click Save and Close on Location Information Modal");
	truclient_step("63", "Click on Save & Close button", "snapshot=Action_63.inf");
	lr_end_transaction("Orchid_001_New_Submission - 11 - Click Save and Close on Location Information Modal",0);
	truclient_step("64", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_64.inf");
	lr_start_transaction("Orchid_001_New_Submission - 12 - Click Save on Location Screen");
	truclient_step("66", "Click on Save button", "snapshot=Action_66.inf");
	lr_end_transaction("Orchid_001_New_Submission - 12 - Click Save on Location Screen",0);
	truclient_step("67", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_67.inf");
	lr_start_transaction("Orchid_001_New_Submission - 13 - Click Next on Location Screen");
	truclient_step("68", "Click on > button", "snapshot=Action_68.inf");
	lr_end_transaction("Orchid_001_New_Submission - 13 - Click Next on Location Screen",0);
	truclient_step("69", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_69.inf");
	lr_start_transaction("Orchid_001_New_Submission - 14 - Click Add on Building Screen");
	truclient_step("71", "Click on Add button", "snapshot=Action_71.inf");
	lr_end_transaction("Orchid_001_New_Submission - 14 - Click Add on Building Screen",0);
	truclient_step("72", "Wait for Building Information", "snapshot=Action_72.inf");
	truclient_step("73", "Click on Please Select textbox", "snapshot=Action_73.inf");
	truclient_step("75", "Click on 1 gridcell", "snapshot=Action_75.inf");
	truclient_step("77", "Click on Building # * textbox", "snapshot=Action_77.inf");
	truclient_step("78", "Type 1 in Building # * textbox", "snapshot=Action_78.inf");
	truclient_step("79", "Click on Building Limit textbox", "snapshot=Action_79.inf");
	truclient_step("80", "Type 1000000 in Building Limit textbox", "snapshot=Action_80.inf");
	truclient_step("81", "Click on BPP Limit textbox", "snapshot=Action_81.inf");
	truclient_step("82", "Type 50000 in BPP Limit textbox", "snapshot=Action_82.inf");
	truclient_step("84", "Click on BI Limit textbox", "snapshot=Action_84.inf");
	truclient_step("85", "Type 50000 in BI Limit textbox", "snapshot=Action_85.inf");
	truclient_step("87", "Select 1/3 from BI Limit of Indemnity listbox", "snapshot=Action_87.inf");
	truclient_step("89", "Select $1,000 from AOP Deductible * listbox", "snapshot=Action_89.inf");
	truclient_step("90", "Mouse Over", "snapshot=Action_90.inf");
	{
		truclient_step("90.3", "Move mouse over Please Select select gridcell", "snapshot=Action_90.3.inf");
	}
	truclient_step("93", "Select 2% from AOWH Deductible listbox", "snapshot=Action_93.inf");
	truclient_step("95", "Click on Please Select textbox", "snapshot=Action_95.inf");
	truclient_step("97", "Select 2% from Please Select listbox", "snapshot=Action_97.inf");
	truclient_step("99", "Select 1 from Protection Class listbox", "snapshot=Action_99.inf");
	truclient_step("101", "Click on Year Built textbox", "snapshot=Action_101.inf");
	truclient_step("102", "Type 2010 in Year Built textbox", "snapshot=Action_102.inf");
	truclient_step("104", "Select Fire-Resistive from Construction Type * listbox", "snapshot=Action_104.inf");
	truclient_step("106", "Click on Sq. Feet * textbox", "snapshot=Action_106.inf");
	truclient_step("107", "Type 100000 in Sq. Feet * textbox", "snapshot=Action_107.inf");
	truclient_step("109", "Click on # of Stories * textbox", "snapshot=Action_109.inf");
	truclient_step("110", "Click on # of Stories * textbox", "snapshot=Action_110.inf");
	truclient_step("111", "Type 2 in # of Stories * textbox", "snapshot=Action_111.inf");
	truclient_step("113", "Select Concrete fill from Roofing Covering Type * listbox", "snapshot=Action_113.inf");
	truclient_step("117", "Select Gable (high pitch) roof ...2 (26.5 degrees) from Roof Shape * listbox", "snapshot=Action_117.inf");
	truclient_step("120", "Select Less Than 1000 Feet from Distance to Coast * listbox", "snapshot=Action_120.inf");
	truclient_step("123", "Click on 1.00 textbox", "snapshot=Action_123.inf");
	truclient_step("127", "Select 2% from Hurricane/Named Storm... listbox", "snapshot=Action_127.inf");
	truclient_step("129", "Click on Central Station Fire Alarm radiogroup", "snapshot=Action_129.inf");
	truclient_step("131", "Click on gridcell (18) gridcell", "snapshot=Action_131.inf");
	truclient_step("132", "Click on 2% gridcell", "snapshot=Action_132.inf");
	truclient_step("133", "Click on 1% gridcell", "snapshot=Action_133.inf");
	truclient_step("139", "Select Occurrence from OccurrenceOccurrenceCale...rYearCalendar... radiogroup", "snapshot=Action_139.inf");
	truclient_step("140", "Evaluate JavaScript code Utils.addAutoHeader('App...ion Tab', false)", "snapshot=Action_140.inf");
	lr_start_transaction("Orchid_001_New_Submission - 15 - Click Save and Close on Building Information Tab");
	truclient_step("142", "Click on Save & Close button", "snapshot=Action_142.inf");
	lr_end_transaction("Orchid_001_New_Submission - 15 - Click Save and Close on Building Information Tab",0);
	truclient_step("143", "Catch 'Any' error on the previous step", "snapshot=Action_143.inf");
	{
		truclient_step("143.4", "If Previous Row button exists", "snapshot=Action_143.4.inf");
		{
			truclient_step("143.4.1", "Click on ? ? Copy Save Add Save...", "snapshot=Action_143.4.1.inf");
			truclient_step("143.4.2", "If Save & Close 's Has Focus Equal true", "snapshot=Action_143.4.2.inf");
			{
				truclient_step("143.4.2.1", "Click on Save & Close button", "snapshot=Action_143.4.2.1.inf");
			}
		}
	}
	truclient_step("144", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_144.inf");
	lr_start_transaction("Orchid_001_New_Submission - 16 - Click Save on Buildings Screen");
	truclient_step("148", "Click on Save button", "snapshot=Action_148.inf");
	lr_end_transaction("Orchid_001_New_Submission - 16 - Click Save on Buildings Screen",0);
	truclient_step("149", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_149.inf");
	lr_start_transaction("Orchid_001_New_Submission - 17 - Click Next on Buildings Screen");
	truclient_step("151", "Click on > button", "snapshot=Action_151.inf");
	lr_end_transaction("Orchid_001_New_Submission - 17 - Click Next on Buildings Screen",0);
	truclient_step("152", "Click on Please Select gridcell", "snapshot=Action_152.inf");
	truclient_step("153", "Catch 'Any' error on the previous step", "snapshot=Action_153.inf");
	{
		truclient_step("153.1", "If Building(s) exists", "snapshot=Action_153.1.inf");
		{
			truclient_step("153.1.2", "Click on > button", "snapshot=Action_153.1.2.inf");
		}
	}
	truclient_step("155", "Select $1 000 000 from Please Select listbox", "snapshot=Action_155.inf");
	truclient_step("156", "Evaluate JavaScript code Utils.addAutoHeader('App...ss code', false)", "snapshot=Action_156.inf");
	lr_start_transaction("Orchid_001_New_Submission - 18 - Click Add on Schedule of Hazards to add class code");
	truclient_step("158", "Click on Add button", "snapshot=Action_158.inf");
	lr_end_transaction("Orchid_001_New_Submission - 18 - Click Add on Schedule of Hazards to add class code",0);
	truclient_step("160", "Click on Please Select textbox", "snapshot=Action_160.inf");
	truclient_step("162", "Click on 1 gridcell", "snapshot=Action_162.inf");
	truclient_step("163", "Mouse Over", "snapshot=Action_163.inf");
	{
		truclient_step("163.3", "Move mouse over Please Select gridcell", "snapshot=Action_163.3.inf");
	}
	truclient_step("164", "Click on Please Select textbox", "snapshot=Action_164.inf");
	truclient_step("166", "Type 11160 in Please Select textbox", "snapshot=Action_166.inf");
	truclient_step("168", "Click on Computer Stores gridcell", "snapshot=Action_168.inf");
	truclient_step("169", "Click on Exposure * textbox", "snapshot=Action_169.inf");
	truclient_step("170", "Type 100000 in Exposure * textbox", "snapshot=Action_170.inf");
	truclient_step("171", "Evaluate JavaScript code Utils.addAutoHeader('App...s Modal', false)", "snapshot=Action_171.inf");
	lr_start_transaction("Orchid_001_New_Submission - 19 - Click Save and Close on Schedule of Hazards Modal");
	truclient_step("173", "Click on Save & Close button", "snapshot=Action_173.inf");
	lr_end_transaction("Orchid_001_New_Submission - 19 - Click Save and Close on Schedule of Hazards Modal",0);
	truclient_step("174", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_174.inf");
	lr_start_transaction("Orchid_001_New_Submission - 20 - Click Save on General Liability Screen");
	truclient_step("176", "Click on Save button", "snapshot=Action_176.inf");
	lr_end_transaction("Orchid_001_New_Submission - 20 - Click Save on General Liability Screen",0);
	truclient_step("177", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_177.inf");
	lr_start_transaction("Orchid_001_New_Submission - 21 - Click Next on General Liability Screen");
	truclient_step("178", "Click on > button", "snapshot=Action_178.inf");
	lr_end_transaction("Orchid_001_New_Submission - 21 - Click Next on General Liability Screen",0);
	truclient_step("179", "Select No from Terrorism radiogroup", "snapshot=Action_179.inf");
	truclient_step("180", "Catch 'Any' error on the previous step", "snapshot=Action_180.inf");
	{
		truclient_step("180.1", "Mouse Over", "snapshot=Action_180.1.inf");
		{
			truclient_step("180.1.1", "Move mouse over Quotes & Policies", "snapshot=Action_180.1.1.inf");
		}
		truclient_step("180.2", "Click on Quotes & Policies", "snapshot=Action_180.2.inf");
		truclient_step("180.3", "Click on Search link", "snapshot=Action_180.3.inf");
		truclient_step("180.6", "Click on 0000019925 link", "snapshot=Action_180.6.inf");
		truclient_step("180.7", "Mouse Over", "snapshot=Action_180.7.inf");
		{
			truclient_step("180.7.1", "Move mouse over Main form", "snapshot=Action_180.7.1.inf");
		}
		truclient_step("180.8", "Click on RISK INFORMATION", "snapshot=Action_180.8.inf");
		truclient_step("180.10", "Click on General Liability link", "snapshot=Action_180.10.inf");
		truclient_step("180.13", "Click on Please Select textbox", "snapshot=Action_180.13.inf");
		truclient_step("180.14", "Select $1 000 000 from Please Select listbox", "snapshot=Action_180.14.inf");
		truclient_step("180.15", "Click on Add button", "snapshot=Action_180.15.inf");
		truclient_step("180.16", "Click on Please Select textbox", "snapshot=Action_180.16.inf");
		truclient_step("180.17", "Click on 1 gridcell", "snapshot=Action_180.17.inf");
		truclient_step("180.18", "Mouse Over", "snapshot=Action_180.18.inf");
		{
			truclient_step("180.18.3", "Move mouse over Please Select gridcell", "snapshot=Action_180.18.3.inf");
		}
		truclient_step("180.19", "Click on Please Select textbox", "snapshot=Action_180.19.inf");
		truclient_step("180.20", "Type 11160 in Please Select textbox", "snapshot=Action_180.20.inf");
		truclient_step("180.21", "Click on Computer Stores gridcell", "snapshot=Action_180.21.inf");
		truclient_step("180.22", "Click on Exposure * textbox", "snapshot=Action_180.22.inf");
		truclient_step("180.23", "Type 100000 in Exposure * textbox", "snapshot=Action_180.23.inf");
		truclient_step("180.24", "Click on Save & Close button", "snapshot=Action_180.24.inf");
		truclient_step("180.25", "Click on Save button", "snapshot=Action_180.25.inf");
		truclient_step("180.26", "Click on > button", "snapshot=Action_180.26.inf");
	}
	truclient_step("181", "Select No from Terrorism radiogroup", "snapshot=Action_181.inf");
	truclient_step("182", "Click on # of Employees (Full... textbox", "snapshot=Action_182.inf");
	truclient_step("183", "Type 10 in # of Employees (Full... textbox", "snapshot=Action_183.inf");
	truclient_step("184", "Click on Employee Benefits Limit textbox", "snapshot=Action_184.inf");
	truclient_step("185", "Move mouse over Limit None $25 000 /...", "snapshot=Action_185.inf");
	truclient_step("187", "Click on Employee Benefits Limit textbox", "snapshot=Action_187.inf");
	truclient_step("189", "Select option #2 from Employee Benefit Drop Down List listbox", "snapshot=Action_189.inf");
	truclient_step("191", "Select $25,000 / $25,000 from Employee Benefit Drop Down List listbox", "snapshot=Action_191.inf");
	truclient_step("194", "Select Yes from personnel familiar? radiogroup", "snapshot=Action_194.inf");
	truclient_step("195", "Select Yes from programs in compliance with Cobra? radiogroup", "snapshot=Action_195.inf");
	truclient_step("197", "Select Yes from optional employee benefits radiogroup", "snapshot=Action_197.inf");
	truclient_step("199", "Click on Employee Dishonesty Limit textbox", "snapshot=Action_199.inf");
	truclient_step("201", "Select option #2 from Employee Benefit Drop Down List listbox", "snapshot=Action_201.inf");
	truclient_step("204", "Select No from Countersignature check required? radiogroup", "snapshot=Action_204.inf");
	truclient_step("207", "Click on textbox (5) textbox", "snapshot=Action_207.inf");
	truclient_step("208", "Type perfuser1 in textbox (5) textbox", "snapshot=Action_208.inf");
	truclient_step("209", "Select Yes from Equipment Breakdown radiogroup", "snapshot=Action_209.inf");
	truclient_step("211", "Select Monthly from Frequency of Audits * listbox", "snapshot=Action_211.inf");
	truclient_step("212", "Click on textbox (1) textbox", "snapshot=Action_212.inf");
	truclient_step("213", "Type 5 in textbox (1) textbox", "snapshot=Action_213.inf");
	truclient_step("216", "Select No from Has there been more than...ment breakdown? radiogroup", "snapshot=Action_216.inf");
	truclient_step("217", "Select No from greater than 250kw of electricity? radiogroup", "snapshot=Action_217.inf");
	truclient_step("219", "Click on For optional employee...", "snapshot=Action_219.inf");
	truclient_step("221", "Click on Equipment Breakdown Limit... textbox", "snapshot=Action_221.inf");
	truclient_step("222", "Type 1000 in Equipment Breakdown Limit... textbox", "snapshot=Action_222.inf");
	truclient_step("223", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_223.inf");
	lr_start_transaction("Orchid_001_New_Submission - 22 - Click Save on Optional Coverages Screen");
	truclient_step("224", "Click on Save button", "snapshot=Action_224.inf");
	lr_end_transaction("Orchid_001_New_Submission - 22 - Click Save on Optional Coverages Screen",0);
	truclient_step("225", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_225.inf");
	lr_start_transaction("Orchid_001_New_Submission - 23 - Click Next on Optional Coverages Screen");
	truclient_step("226", "Click on > button", "snapshot=Action_226.inf");
	lr_end_transaction("Orchid_001_New_Submission - 23 - Click Next on Optional Coverages Screen",0);
	truclient_step("228", "Select Contractor from Who performs snow and... listbox", "snapshot=Action_228.inf");
	truclient_step("230", "Click on YesYesNoNo radiogroup", "snapshot=Action_230.inf");
	truclient_step("231", "Evaluate JavaScript code Utils.addAutoHeader('App...estions', false)", "snapshot=Action_231.inf");
	lr_start_transaction("Orchid_001_New_Submission - 24 - Click Save on General Underwriting Questions");
	truclient_step("233", "Click on Save button", "snapshot=Action_233.inf");
	lr_end_transaction("Orchid_001_New_Submission - 24 - Click Save on General Underwriting Questions",0);
	truclient_step("234", "Evaluate JavaScript code Utils.addAutoHeader('App...estions', false)", "snapshot=Action_234.inf");
	lr_start_transaction("Orchid_001_New_Submission - 25 - Click Next on General Underwriting Questions");
	truclient_step("236", "Click on > button", "snapshot=Action_236.inf");
	lr_end_transaction("Orchid_001_New_Submission - 25 - Click Next on General Underwriting Questions",0);
	truclient_step("238", "Click on Please Select textbox", "snapshot=Action_238.inf");
	truclient_step("240", "Select 12 QBE 455054 from Please Select listbox", "snapshot=Action_240.inf");
	truclient_step("242", "Click on Allow Agent to Request Bind checkbox", "snapshot=Action_242.inf");
	truclient_step("243", "Evaluate JavaScript code Utils.addAutoHeader('App...icense)', false)", "snapshot=Action_243.inf");
	lr_start_transaction("Orchid_001_New_Submission - 26 - Click Save on Quote Summary Screen (Integration call - Query License)");
	truclient_step("246", "Click on Save button", "snapshot=Action_246.inf");
	lr_end_transaction("Orchid_001_New_Submission - 26 - Click Save on Quote Summary Screen (Integration call - Query License)",0);
	truclient_step("247", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_247.inf");
	lr_start_transaction("Orchid_001_New_Submission - 27 - Click Next on Quote Summary Screen");
	truclient_step("248", "Click on > button", "snapshot=Action_248.inf");
	lr_end_transaction("Orchid_001_New_Submission - 27 - Click Next on Quote Summary Screen",0);
	truclient_step("250", "Select Owner from Contact Type * listbox", "snapshot=Action_250.inf");
	truclient_step("251", "Click on Contact Name * textbox", "snapshot=Action_251.inf");
	truclient_step("252", "Type perfuser in Contact Name * textbox", "snapshot=Action_252.inf");
	truclient_step("253", "Click on textbox (1) textbox", "snapshot=Action_253.inf");
	truclient_step("254", "Click on textbox (1) textbox", "snapshot=Action_254.inf");
	truclient_step("255", "Type 1235367262 in textbox (1) textbox", "snapshot=Action_255.inf");
	truclient_step("257", "Click on Contact Email * textbox", "snapshot=Action_257.inf");
	truclient_step("258", "Type perfuser1@oceanwide.com in Contact Email * textbox", "snapshot=Action_258.inf");
	truclient_step("263", "Select No from YesYesNoNo radiogroup", "snapshot=Action_263.inf");
	truclient_step("268", "Select Yes from YesYesNoNo radiogroup", "snapshot=Action_268.inf");
	truclient_step("269", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_269.inf");
	lr_start_transaction("Orchid_001_New_Submission - 28 - Click Next on Request To Bind Screen");
	truclient_step("272", "Click on Save button", "snapshot=Action_272.inf");
	lr_end_transaction("Orchid_001_New_Submission - 28 - Click Next on Request To Bind Screen",0);
	truclient_step("274", "Click on UNDERWRITING REVIEW", "snapshot=Action_274.inf");
	truclient_step("275", "Click on Referral Management link", "snapshot=Action_275.inf");
	truclient_step("277", "Click on Approval Notes * textbox", "snapshot=Action_277.inf");
	truclient_step("278", "Type NA in Approval Notes * textbox", "snapshot=Action_278.inf");
	truclient_step("280", "If Duplicate Submission... listbox exists", "snapshot=Action_280.inf");
	{
		truclient_step("280.1", "Select Bryan Schofield from Duplicate Submission... listbox", "snapshot=Action_280.1.inf");
	}
	truclient_step("281", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_281.inf");
	lr_start_transaction("Orchid_001_New_Submission - 29 - Click Save on Referral Management Screen");
	truclient_step("283", "Click on Save button", "snapshot=Action_283.inf");
	lr_end_transaction("Orchid_001_New_Submission - 29 - Click Save on Referral Management Screen",0);
	truclient_step("284", "Evaluate JavaScript code Utils.addAutoHeader('App... Screen', false)", "snapshot=Action_284.inf");
	lr_start_transaction("Orchid_001_New_Submission - 30 - Click Next on Referral management Screen");
	truclient_step("286", "Click on > button", "snapshot=Action_286.inf");
	lr_end_transaction("Orchid_001_New_Submission - 30 - Click Next on Referral management Screen",0);
	truclient_step("287", "Evaluate JavaScript code Utils.addAutoHeader('App...e Quote', false)", "snapshot=Action_287.inf");
	lr_start_transaction("Orchid_001_New_Submission - 30 - Click on Issue Quote");
	truclient_step("289", "Click on Issue Quote", "snapshot=Action_289.inf");
	lr_end_transaction("Orchid_001_New_Submission - 30 - Click on Issue Quote",0);
	truclient_step("290", "Evaluate JavaScript code Utils.addAutoHeader('App...ck Bind', false)", "snapshot=Action_290.inf");
	lr_start_transaction("Orchid_001_New_Submission - 31 - Click Bind");
	truclient_step("301", "Click on Bind", "snapshot=Action_301.inf");
	lr_end_transaction("Orchid_001_New_Submission - 31 - Click Bind",0);
	truclient_step("302", "Click on Performance Test User 1", "snapshot=Action_302.inf");
	truclient_step("303", "Evaluate JavaScript code Utils.addAutoHeader('App...Log off', false)", "snapshot=Action_303.inf");
	lr_start_transaction("Orchid_001_New_Submission - 32 - Click Log off");
	truclient_step("305", "Click on Log Off link", "snapshot=Action_305.inf");
	lr_end_transaction("Orchid_001_New_Submission - 32 - Click Log off",0);

	return 0;
}
