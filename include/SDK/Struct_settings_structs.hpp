#pragma once

/*
* SDK generated by Dumper-7
*
* https://github.com/Encryqed/Dumper-7
*/

// Package: Struct_settings

#include "Basic.hpp"

#include "Enum_controllerType_structs.hpp"
#include "CoreUObject_structs.hpp"
#include "Enum_difficulty_structs.hpp"
#include "Enum_crosshairType_structs.hpp"


namespace SDK
{

// UserDefinedStruct struct_settings.struct_settings
// 0x0100 (0x0100 - 0x0000)
struct FStruct_settings final
{
public:
	int32                                         V_resolution_21_395E4C2845DFA89D8A4FAC9CA460EC85;  // 0x0000(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_viewDistance_22_6F5E3CAB4AC5220216D263AC9987650C; // 0x0004(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_AA_23_9F75EDB240341717FFAB149EDC2E6064;          // 0x0008(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_PP_24_B1BE00FF4EDD0398E29211A3010CA787;          // 0x000C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_shadows_25_596A6A894F9619BD8D3FABBA2BB24713;     // 0x0010(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_textures_26_B149D8244DA2CFD6A405C1B63DD72066;    // 0x0014(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_effects_27_472E1D124CBD2612F82CC9B4B3AA1354;     // 0x0018(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_foliage_28_E619E5C2490255608AB7FC8CC9C396F3;     // 0x001C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         V_shading_29_39AA11284DCA35EAFBDCF481C151B09A;     // 0x0020(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         S_master_42_62D1C2AB45646494E91FC88BF257CD31;      // 0x0024(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         S_effects_43_10B3B10B4A7E74D3E3A10FAFDD04A028;     // 0x0028(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         S_ambience_44_F0E1D35F428337BC9D04AAB11C7B1059;    // 0x002C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         S_ui_45_40E8B12541459FBA9B7C5BB5449A4BC2;          // 0x0030(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         S_music_46_B735D49F4B2692030AFE57B5FB29DE19;       // 0x0034(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_hovertext_50_966DCEC84A9DAB33328BD29ECF13A6C8;   // 0x0038(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_colorF_52_AB4FB4784D361A35A224479D4903CD8D;      // 0x0039(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_3A[0x2];                                       // 0x003A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         M_mouseSm_59_5BF973664F8FDBF12CA98990A8A42055;     // 0x003C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_mouseSPD_60_F82B13AF41C393E8139C8C95A116A4AD;    // 0x0040(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_fps_63_9768EF8143893BEACF7D268A9DD2A42A;         // 0x0044(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_vsync_66_4C2DC30B42F2DB76DE45B7AEF8BCCB15;       // 0x0048(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_physSnd_68_9AA2D7574BB82B462C8EE5A623EE2D88;     // 0x0049(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_disBorders_71_7D2F15644EB19D6D7F3A798F4A67E856;  // 0x004A(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_4B[0x1];                                       // 0x004B(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	struct FIntPoint                              M_asRatio_75_6047628647620F6CF832358A25EC631C;     // 0x004C(0x0008)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_invertX_77_632FFB1B471BFBAB3E8A18B54041575C;     // 0x0054(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_invertY_82_BC77C1224441909EB7EA9CBCF362890A;     // 0x0055(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_backgroundMusic_83_08433AFE457172203832BD8C3BBA0050; // 0x0056(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_propKicking_85_3C349F884D60FB613FD64A91FCF094EA; // 0x0057(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                         M_defaultFOV_88_8E67129440609D8931D598808D2CF797;  // 0x0058(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         M_panelFOV_90_A0FAE7F14C4B865A663A028CBC975F06;    // 0x005C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         M_autosave_94_04887DEB4D9BF45FDFEB1D92B0FA0735;    // 0x0060(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_disablePopups_96_3D6AAFB242030C96F6A2279C2892B2EF; // 0x0064(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_difficulty                               M_difficulty_100_14406B0542D1E1B9D9D354868E0F0077; // 0x0065(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          M_cdishnames_102_134CC98944DFADBDEB4DAC97EA6EC76F; // 0x0066(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableReportFees_104_16EDFDAC4F03CFD35DA953B434877784; // 0x0067(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableAchivPopups_106_5F435BC14BCE1EAB13F72E80E4481902; // 0x0068(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          MirrorMode_109_14F5C0FF4197477ADA92D88C1E18A399;   // 0x0069(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_6A[0x2];                                       // 0x006A(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         MotionBlur_a_112_F428A3A74DE7BCBB34D35E8253977C6B; // 0x006C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Upscale_114_585154EE4EB0C6B9C0489BAB057DAB73;      // 0x0070(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Saturation_121_34BCC35C4D6F29387654DF84B57D29F4;   // 0x0074(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Contrast_122_9F0ADE6A41775E71AF6D9A8598DB2C9A;     // 0x0078(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         Gamma_123_95ED7124485763463B00D7AB03D2D1A7;        // 0x007C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         Lightshafts_126_D7B7275641D8C8919B3E5BA91077BD09;  // 0x0080(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          HideInterface_128_64BAC0B34B2EC34A3E274CB087C98B51; // 0x0084(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ScreenAutoset_130_A0B46AA84F3645F7C31916BB4C23B7A7; // 0x0085(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Autoscreenshot_132_ACA01B754F83DFEEF4AE7284CBCA8320; // 0x0086(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          E_dmgInd_135_665715B143B3E27057BC29A6AC22B84A;     // 0x0087(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          V_sshadows_137_12FD4C5740B34BFB762DDDA996F2884D;   // 0x0088(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_89[0x3];                                       // 0x0089(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Hue_140_EC5129524737D60D2BBBBA8462C8434B;          // 0x008C(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         MaxRoaches_143_0EE6F8114F7A60C5CA1E38845BC821BD;   // 0x0090(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          ReplaceRoaches_146_8F179E814359C55025D4688D65F2F2DE; // 0x0094(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          M_boundingbox_148_1013F4384CCBA0EA3901A9B9CC99D4B7; // 0x0095(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          NewSigNotif_150_8B2252F143F9596E19A8CF985B303FE4;  // 0x0096(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_97[0x1];                                       // 0x0097(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         TonemapperFilm_153_3490B249412BCF6B0F1CB8BB16D54252; // 0x0098(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          DisableSpoil_155_B0D3640C49FB9051652C099C074E0B4B; // 0x009C(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisableTolerance_157_81E70C15431BBBD0671BDB882121A5AF; // 0x009D(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          DisablePlayerShadow_159_75EF0A7F438A158815C0809C31C95DB1; // 0x009E(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          VolumFog_161_9D098FDA4AD743E7B4FF1092B8CAD57B;     // 0x009F(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AtvTirePropCollide_164_14AE11984E5E385BB120F68662E38E53; // 0x00A0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ActionMenuIndex_165_F58E77AB4899D79B884D53A4F402C2DF; // 0x00A1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          Funny_168_D9B8A1CD48C713DB9BEC9D8472DEA12F;        // 0x00A2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_A3[0x1];                                       // 0x00A3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         PanelFps_170_2C990F604D8AC1FEE3B9A4933F6C312F;     // 0x00A4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         ShadowDist_173_245848BF428EF76A8046A5B4260E75D1;   // 0x00A8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          GrabKeepUp_175_0DCB5970481F31B9559AD5B46B9B3257;   // 0x00AC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_AD[0x3];                                       // 0x00AD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         HeadbobStr_180_39FAFB214CE2B6F87996639486C313E2;   // 0x00B0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                         HeadbobTilt_181_8F513EFC40E97B386CE24B891BC436B0;  // 0x00B4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          RadialSelectMenu_183_A10E98CC49A28E7BD11C7CA9F530E7EA; // 0x00B8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          ArirRepDebug_185_97E37D0D472315C88724B99A548EB95F; // 0x00B9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_BA[0x2];                                       // 0x00BA(0x0002)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         Daylength_188_0F721A65449230C6261EDC9A6812ACC8;    // 0x00BC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Upsample_191_C2B2FDD548FEDB880590F488F41B14EE;     // 0x00C0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_C1[0x3];                                       // 0x00C1(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         Sharpness_193_F2B4E32F4B0853BD4620668DF5A97391;    // 0x00C4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         TonemapperQ_195_C2B68288414352A7A48BE48F488A2067;  // 0x00C8(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Enablehdr_197_6479A3CA4B04DEB3F8BC89ACF6FC932C;    // 0x00CC(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_CD[0x3];                                       // 0x00CD(0x0003)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         HdrGamut_202_B78A166742A682B77417C4B7E7E6E957;     // 0x00D0(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                         HdrOutput_203_A16D674F4CE2E423A2FF77965947B7F2;    // 0x00D4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                 CustomAssetFolder_206_A737DC344CF1BB99CD0E9DB13D992123; // 0x00D8(0x0010)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	Enum_controllerType                           ControllerType_209_853B1B0B47D8ED921597E1BFA837FE76; // 0x00E8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          CeilingLightIES_211_9AAAD3B24465EA23A26D87A443CB87E8; // 0x00E9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          AutoGetup_213_0E9ACB8B4B906DA77126EB8469B0CE99;    // 0x00EA(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                         Pad_EB[0x1];                                       // 0x00EB(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	int32                                         DitherColorDepth_221_DEBECF73408EB1C1C0E6E8AC9D396421; // 0x00EC(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          UseDither_220_CB392C2F46C2626444B123936CDAEFFE;    // 0x00F0(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          HidePlayermodel_224_FB7C7CC64B76C5637A864B9C8CB4615A; // 0x00F1(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	Enum_crosshairType                            CrosshairType_228_0CD1D89241962F56B260EAB2EF1F7E43; // 0x00F2(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                         Pad_F3[0x1];                                       // 0x00F3(0x0001)(Fixing Size After Last Property [ Dumper-7 ])
	float                                         CrosshairOpacity_232_CC4271D04127E0D27153758D52E06FB3; // 0x00F4(0x0004)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                          Combat_234_DB9718E344DFE9F2F1097689BA6F2009;       // 0x00F8(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                          VelmaMode_236_CE6CD9024AB00BB8546A6B93FA987BD8;    // 0x00F9(0x0001)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
};
static_assert(alignof(FStruct_settings) == 0x000008, "Wrong alignment on FStruct_settings");
static_assert(sizeof(FStruct_settings) == 0x000100, "Wrong size on FStruct_settings");
static_assert(offsetof(FStruct_settings, V_resolution_21_395E4C2845DFA89D8A4FAC9CA460EC85) == 0x000000, "Member 'FStruct_settings::V_resolution_21_395E4C2845DFA89D8A4FAC9CA460EC85' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_viewDistance_22_6F5E3CAB4AC5220216D263AC9987650C) == 0x000004, "Member 'FStruct_settings::V_viewDistance_22_6F5E3CAB4AC5220216D263AC9987650C' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_AA_23_9F75EDB240341717FFAB149EDC2E6064) == 0x000008, "Member 'FStruct_settings::V_AA_23_9F75EDB240341717FFAB149EDC2E6064' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_PP_24_B1BE00FF4EDD0398E29211A3010CA787) == 0x00000C, "Member 'FStruct_settings::V_PP_24_B1BE00FF4EDD0398E29211A3010CA787' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_shadows_25_596A6A894F9619BD8D3FABBA2BB24713) == 0x000010, "Member 'FStruct_settings::V_shadows_25_596A6A894F9619BD8D3FABBA2BB24713' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_textures_26_B149D8244DA2CFD6A405C1B63DD72066) == 0x000014, "Member 'FStruct_settings::V_textures_26_B149D8244DA2CFD6A405C1B63DD72066' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_effects_27_472E1D124CBD2612F82CC9B4B3AA1354) == 0x000018, "Member 'FStruct_settings::V_effects_27_472E1D124CBD2612F82CC9B4B3AA1354' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_foliage_28_E619E5C2490255608AB7FC8CC9C396F3) == 0x00001C, "Member 'FStruct_settings::V_foliage_28_E619E5C2490255608AB7FC8CC9C396F3' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_shading_29_39AA11284DCA35EAFBDCF481C151B09A) == 0x000020, "Member 'FStruct_settings::V_shading_29_39AA11284DCA35EAFBDCF481C151B09A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, S_master_42_62D1C2AB45646494E91FC88BF257CD31) == 0x000024, "Member 'FStruct_settings::S_master_42_62D1C2AB45646494E91FC88BF257CD31' has a wrong offset!");
static_assert(offsetof(FStruct_settings, S_effects_43_10B3B10B4A7E74D3E3A10FAFDD04A028) == 0x000028, "Member 'FStruct_settings::S_effects_43_10B3B10B4A7E74D3E3A10FAFDD04A028' has a wrong offset!");
static_assert(offsetof(FStruct_settings, S_ambience_44_F0E1D35F428337BC9D04AAB11C7B1059) == 0x00002C, "Member 'FStruct_settings::S_ambience_44_F0E1D35F428337BC9D04AAB11C7B1059' has a wrong offset!");
static_assert(offsetof(FStruct_settings, S_ui_45_40E8B12541459FBA9B7C5BB5449A4BC2) == 0x000030, "Member 'FStruct_settings::S_ui_45_40E8B12541459FBA9B7C5BB5449A4BC2' has a wrong offset!");
static_assert(offsetof(FStruct_settings, S_music_46_B735D49F4B2692030AFE57B5FB29DE19) == 0x000034, "Member 'FStruct_settings::S_music_46_B735D49F4B2692030AFE57B5FB29DE19' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_hovertext_50_966DCEC84A9DAB33328BD29ECF13A6C8) == 0x000038, "Member 'FStruct_settings::M_hovertext_50_966DCEC84A9DAB33328BD29ECF13A6C8' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_colorF_52_AB4FB4784D361A35A224479D4903CD8D) == 0x000039, "Member 'FStruct_settings::M_colorF_52_AB4FB4784D361A35A224479D4903CD8D' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_mouseSm_59_5BF973664F8FDBF12CA98990A8A42055) == 0x00003C, "Member 'FStruct_settings::M_mouseSm_59_5BF973664F8FDBF12CA98990A8A42055' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_mouseSPD_60_F82B13AF41C393E8139C8C95A116A4AD) == 0x000040, "Member 'FStruct_settings::M_mouseSPD_60_F82B13AF41C393E8139C8C95A116A4AD' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_fps_63_9768EF8143893BEACF7D268A9DD2A42A) == 0x000044, "Member 'FStruct_settings::M_fps_63_9768EF8143893BEACF7D268A9DD2A42A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_vsync_66_4C2DC30B42F2DB76DE45B7AEF8BCCB15) == 0x000048, "Member 'FStruct_settings::M_vsync_66_4C2DC30B42F2DB76DE45B7AEF8BCCB15' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_physSnd_68_9AA2D7574BB82B462C8EE5A623EE2D88) == 0x000049, "Member 'FStruct_settings::M_physSnd_68_9AA2D7574BB82B462C8EE5A623EE2D88' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_disBorders_71_7D2F15644EB19D6D7F3A798F4A67E856) == 0x00004A, "Member 'FStruct_settings::M_disBorders_71_7D2F15644EB19D6D7F3A798F4A67E856' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_asRatio_75_6047628647620F6CF832358A25EC631C) == 0x00004C, "Member 'FStruct_settings::M_asRatio_75_6047628647620F6CF832358A25EC631C' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_invertX_77_632FFB1B471BFBAB3E8A18B54041575C) == 0x000054, "Member 'FStruct_settings::M_invertX_77_632FFB1B471BFBAB3E8A18B54041575C' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_invertY_82_BC77C1224441909EB7EA9CBCF362890A) == 0x000055, "Member 'FStruct_settings::M_invertY_82_BC77C1224441909EB7EA9CBCF362890A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_backgroundMusic_83_08433AFE457172203832BD8C3BBA0050) == 0x000056, "Member 'FStruct_settings::M_backgroundMusic_83_08433AFE457172203832BD8C3BBA0050' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_propKicking_85_3C349F884D60FB613FD64A91FCF094EA) == 0x000057, "Member 'FStruct_settings::M_propKicking_85_3C349F884D60FB613FD64A91FCF094EA' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_defaultFOV_88_8E67129440609D8931D598808D2CF797) == 0x000058, "Member 'FStruct_settings::M_defaultFOV_88_8E67129440609D8931D598808D2CF797' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_panelFOV_90_A0FAE7F14C4B865A663A028CBC975F06) == 0x00005C, "Member 'FStruct_settings::M_panelFOV_90_A0FAE7F14C4B865A663A028CBC975F06' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_autosave_94_04887DEB4D9BF45FDFEB1D92B0FA0735) == 0x000060, "Member 'FStruct_settings::M_autosave_94_04887DEB4D9BF45FDFEB1D92B0FA0735' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_disablePopups_96_3D6AAFB242030C96F6A2279C2892B2EF) == 0x000064, "Member 'FStruct_settings::M_disablePopups_96_3D6AAFB242030C96F6A2279C2892B2EF' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_difficulty_100_14406B0542D1E1B9D9D354868E0F0077) == 0x000065, "Member 'FStruct_settings::M_difficulty_100_14406B0542D1E1B9D9D354868E0F0077' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_cdishnames_102_134CC98944DFADBDEB4DAC97EA6EC76F) == 0x000066, "Member 'FStruct_settings::M_cdishnames_102_134CC98944DFADBDEB4DAC97EA6EC76F' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DisableReportFees_104_16EDFDAC4F03CFD35DA953B434877784) == 0x000067, "Member 'FStruct_settings::DisableReportFees_104_16EDFDAC4F03CFD35DA953B434877784' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DisableAchivPopups_106_5F435BC14BCE1EAB13F72E80E4481902) == 0x000068, "Member 'FStruct_settings::DisableAchivPopups_106_5F435BC14BCE1EAB13F72E80E4481902' has a wrong offset!");
static_assert(offsetof(FStruct_settings, MirrorMode_109_14F5C0FF4197477ADA92D88C1E18A399) == 0x000069, "Member 'FStruct_settings::MirrorMode_109_14F5C0FF4197477ADA92D88C1E18A399' has a wrong offset!");
static_assert(offsetof(FStruct_settings, MotionBlur_a_112_F428A3A74DE7BCBB34D35E8253977C6B) == 0x00006C, "Member 'FStruct_settings::MotionBlur_a_112_F428A3A74DE7BCBB34D35E8253977C6B' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Upscale_114_585154EE4EB0C6B9C0489BAB057DAB73) == 0x000070, "Member 'FStruct_settings::Upscale_114_585154EE4EB0C6B9C0489BAB057DAB73' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Saturation_121_34BCC35C4D6F29387654DF84B57D29F4) == 0x000074, "Member 'FStruct_settings::Saturation_121_34BCC35C4D6F29387654DF84B57D29F4' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Contrast_122_9F0ADE6A41775E71AF6D9A8598DB2C9A) == 0x000078, "Member 'FStruct_settings::Contrast_122_9F0ADE6A41775E71AF6D9A8598DB2C9A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Gamma_123_95ED7124485763463B00D7AB03D2D1A7) == 0x00007C, "Member 'FStruct_settings::Gamma_123_95ED7124485763463B00D7AB03D2D1A7' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Lightshafts_126_D7B7275641D8C8919B3E5BA91077BD09) == 0x000080, "Member 'FStruct_settings::Lightshafts_126_D7B7275641D8C8919B3E5BA91077BD09' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HideInterface_128_64BAC0B34B2EC34A3E274CB087C98B51) == 0x000084, "Member 'FStruct_settings::HideInterface_128_64BAC0B34B2EC34A3E274CB087C98B51' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ScreenAutoset_130_A0B46AA84F3645F7C31916BB4C23B7A7) == 0x000085, "Member 'FStruct_settings::ScreenAutoset_130_A0B46AA84F3645F7C31916BB4C23B7A7' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Autoscreenshot_132_ACA01B754F83DFEEF4AE7284CBCA8320) == 0x000086, "Member 'FStruct_settings::Autoscreenshot_132_ACA01B754F83DFEEF4AE7284CBCA8320' has a wrong offset!");
static_assert(offsetof(FStruct_settings, E_dmgInd_135_665715B143B3E27057BC29A6AC22B84A) == 0x000087, "Member 'FStruct_settings::E_dmgInd_135_665715B143B3E27057BC29A6AC22B84A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, V_sshadows_137_12FD4C5740B34BFB762DDDA996F2884D) == 0x000088, "Member 'FStruct_settings::V_sshadows_137_12FD4C5740B34BFB762DDDA996F2884D' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Hue_140_EC5129524737D60D2BBBBA8462C8434B) == 0x00008C, "Member 'FStruct_settings::Hue_140_EC5129524737D60D2BBBBA8462C8434B' has a wrong offset!");
static_assert(offsetof(FStruct_settings, MaxRoaches_143_0EE6F8114F7A60C5CA1E38845BC821BD) == 0x000090, "Member 'FStruct_settings::MaxRoaches_143_0EE6F8114F7A60C5CA1E38845BC821BD' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ReplaceRoaches_146_8F179E814359C55025D4688D65F2F2DE) == 0x000094, "Member 'FStruct_settings::ReplaceRoaches_146_8F179E814359C55025D4688D65F2F2DE' has a wrong offset!");
static_assert(offsetof(FStruct_settings, M_boundingbox_148_1013F4384CCBA0EA3901A9B9CC99D4B7) == 0x000095, "Member 'FStruct_settings::M_boundingbox_148_1013F4384CCBA0EA3901A9B9CC99D4B7' has a wrong offset!");
static_assert(offsetof(FStruct_settings, NewSigNotif_150_8B2252F143F9596E19A8CF985B303FE4) == 0x000096, "Member 'FStruct_settings::NewSigNotif_150_8B2252F143F9596E19A8CF985B303FE4' has a wrong offset!");
static_assert(offsetof(FStruct_settings, TonemapperFilm_153_3490B249412BCF6B0F1CB8BB16D54252) == 0x000098, "Member 'FStruct_settings::TonemapperFilm_153_3490B249412BCF6B0F1CB8BB16D54252' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DisableSpoil_155_B0D3640C49FB9051652C099C074E0B4B) == 0x00009C, "Member 'FStruct_settings::DisableSpoil_155_B0D3640C49FB9051652C099C074E0B4B' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DisableTolerance_157_81E70C15431BBBD0671BDB882121A5AF) == 0x00009D, "Member 'FStruct_settings::DisableTolerance_157_81E70C15431BBBD0671BDB882121A5AF' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DisablePlayerShadow_159_75EF0A7F438A158815C0809C31C95DB1) == 0x00009E, "Member 'FStruct_settings::DisablePlayerShadow_159_75EF0A7F438A158815C0809C31C95DB1' has a wrong offset!");
static_assert(offsetof(FStruct_settings, VolumFog_161_9D098FDA4AD743E7B4FF1092B8CAD57B) == 0x00009F, "Member 'FStruct_settings::VolumFog_161_9D098FDA4AD743E7B4FF1092B8CAD57B' has a wrong offset!");
static_assert(offsetof(FStruct_settings, AtvTirePropCollide_164_14AE11984E5E385BB120F68662E38E53) == 0x0000A0, "Member 'FStruct_settings::AtvTirePropCollide_164_14AE11984E5E385BB120F68662E38E53' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ActionMenuIndex_165_F58E77AB4899D79B884D53A4F402C2DF) == 0x0000A1, "Member 'FStruct_settings::ActionMenuIndex_165_F58E77AB4899D79B884D53A4F402C2DF' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Funny_168_D9B8A1CD48C713DB9BEC9D8472DEA12F) == 0x0000A2, "Member 'FStruct_settings::Funny_168_D9B8A1CD48C713DB9BEC9D8472DEA12F' has a wrong offset!");
static_assert(offsetof(FStruct_settings, PanelFps_170_2C990F604D8AC1FEE3B9A4933F6C312F) == 0x0000A4, "Member 'FStruct_settings::PanelFps_170_2C990F604D8AC1FEE3B9A4933F6C312F' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ShadowDist_173_245848BF428EF76A8046A5B4260E75D1) == 0x0000A8, "Member 'FStruct_settings::ShadowDist_173_245848BF428EF76A8046A5B4260E75D1' has a wrong offset!");
static_assert(offsetof(FStruct_settings, GrabKeepUp_175_0DCB5970481F31B9559AD5B46B9B3257) == 0x0000AC, "Member 'FStruct_settings::GrabKeepUp_175_0DCB5970481F31B9559AD5B46B9B3257' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HeadbobStr_180_39FAFB214CE2B6F87996639486C313E2) == 0x0000B0, "Member 'FStruct_settings::HeadbobStr_180_39FAFB214CE2B6F87996639486C313E2' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HeadbobTilt_181_8F513EFC40E97B386CE24B891BC436B0) == 0x0000B4, "Member 'FStruct_settings::HeadbobTilt_181_8F513EFC40E97B386CE24B891BC436B0' has a wrong offset!");
static_assert(offsetof(FStruct_settings, RadialSelectMenu_183_A10E98CC49A28E7BD11C7CA9F530E7EA) == 0x0000B8, "Member 'FStruct_settings::RadialSelectMenu_183_A10E98CC49A28E7BD11C7CA9F530E7EA' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ArirRepDebug_185_97E37D0D472315C88724B99A548EB95F) == 0x0000B9, "Member 'FStruct_settings::ArirRepDebug_185_97E37D0D472315C88724B99A548EB95F' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Daylength_188_0F721A65449230C6261EDC9A6812ACC8) == 0x0000BC, "Member 'FStruct_settings::Daylength_188_0F721A65449230C6261EDC9A6812ACC8' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Upsample_191_C2B2FDD548FEDB880590F488F41B14EE) == 0x0000C0, "Member 'FStruct_settings::Upsample_191_C2B2FDD548FEDB880590F488F41B14EE' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Sharpness_193_F2B4E32F4B0853BD4620668DF5A97391) == 0x0000C4, "Member 'FStruct_settings::Sharpness_193_F2B4E32F4B0853BD4620668DF5A97391' has a wrong offset!");
static_assert(offsetof(FStruct_settings, TonemapperQ_195_C2B68288414352A7A48BE48F488A2067) == 0x0000C8, "Member 'FStruct_settings::TonemapperQ_195_C2B68288414352A7A48BE48F488A2067' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Enablehdr_197_6479A3CA4B04DEB3F8BC89ACF6FC932C) == 0x0000CC, "Member 'FStruct_settings::Enablehdr_197_6479A3CA4B04DEB3F8BC89ACF6FC932C' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HdrGamut_202_B78A166742A682B77417C4B7E7E6E957) == 0x0000D0, "Member 'FStruct_settings::HdrGamut_202_B78A166742A682B77417C4B7E7E6E957' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HdrOutput_203_A16D674F4CE2E423A2FF77965947B7F2) == 0x0000D4, "Member 'FStruct_settings::HdrOutput_203_A16D674F4CE2E423A2FF77965947B7F2' has a wrong offset!");
static_assert(offsetof(FStruct_settings, CustomAssetFolder_206_A737DC344CF1BB99CD0E9DB13D992123) == 0x0000D8, "Member 'FStruct_settings::CustomAssetFolder_206_A737DC344CF1BB99CD0E9DB13D992123' has a wrong offset!");
static_assert(offsetof(FStruct_settings, ControllerType_209_853B1B0B47D8ED921597E1BFA837FE76) == 0x0000E8, "Member 'FStruct_settings::ControllerType_209_853B1B0B47D8ED921597E1BFA837FE76' has a wrong offset!");
static_assert(offsetof(FStruct_settings, CeilingLightIES_211_9AAAD3B24465EA23A26D87A443CB87E8) == 0x0000E9, "Member 'FStruct_settings::CeilingLightIES_211_9AAAD3B24465EA23A26D87A443CB87E8' has a wrong offset!");
static_assert(offsetof(FStruct_settings, AutoGetup_213_0E9ACB8B4B906DA77126EB8469B0CE99) == 0x0000EA, "Member 'FStruct_settings::AutoGetup_213_0E9ACB8B4B906DA77126EB8469B0CE99' has a wrong offset!");
static_assert(offsetof(FStruct_settings, DitherColorDepth_221_DEBECF73408EB1C1C0E6E8AC9D396421) == 0x0000EC, "Member 'FStruct_settings::DitherColorDepth_221_DEBECF73408EB1C1C0E6E8AC9D396421' has a wrong offset!");
static_assert(offsetof(FStruct_settings, UseDither_220_CB392C2F46C2626444B123936CDAEFFE) == 0x0000F0, "Member 'FStruct_settings::UseDither_220_CB392C2F46C2626444B123936CDAEFFE' has a wrong offset!");
static_assert(offsetof(FStruct_settings, HidePlayermodel_224_FB7C7CC64B76C5637A864B9C8CB4615A) == 0x0000F1, "Member 'FStruct_settings::HidePlayermodel_224_FB7C7CC64B76C5637A864B9C8CB4615A' has a wrong offset!");
static_assert(offsetof(FStruct_settings, CrosshairType_228_0CD1D89241962F56B260EAB2EF1F7E43) == 0x0000F2, "Member 'FStruct_settings::CrosshairType_228_0CD1D89241962F56B260EAB2EF1F7E43' has a wrong offset!");
static_assert(offsetof(FStruct_settings, CrosshairOpacity_232_CC4271D04127E0D27153758D52E06FB3) == 0x0000F4, "Member 'FStruct_settings::CrosshairOpacity_232_CC4271D04127E0D27153758D52E06FB3' has a wrong offset!");
static_assert(offsetof(FStruct_settings, Combat_234_DB9718E344DFE9F2F1097689BA6F2009) == 0x0000F8, "Member 'FStruct_settings::Combat_234_DB9718E344DFE9F2F1097689BA6F2009' has a wrong offset!");
static_assert(offsetof(FStruct_settings, VelmaMode_236_CE6CD9024AB00BB8546A6B93FA987BD8) == 0x0000F9, "Member 'FStruct_settings::VelmaMode_236_CE6CD9024AB00BB8546A6B93FA987BD8' has a wrong offset!");

}

