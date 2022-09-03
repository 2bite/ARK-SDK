#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoBlueprintBase_Climber_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C
// 0x28E0 (0x2C20 - 0x0340)
class UDinoBlueprintBase_Climber_C : public UAnimInstance
{
public:
	struct FAnimNode_Root                              AnimGraphNode_Root_51CCE9DA47F73C40ABC10EB053547786;      // 0x0340(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A482CF243AE6AA3CE0E8198A00875E7;// 0x0368(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3CC665A84FEB035D6A0B7B8619A910DE;// 0x0398(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_3BE324334EDAE861C0559082B1A5DB27;// 0x03F8(0x0030)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_60E63FC444492CE49542CAB5199D00E5;// 0x0428(0x0028)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_4856DBFE4EEBE24869D608B65787F998;// 0x0450(0x00B0)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_46143BD842576991E6AF6EB4F2A3AAA7;// 0x0500(0x0028)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1416BC9A450CB0A3CC42968645E364F5;      // 0x0528(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_A7E356E54787F61A8FFEE387A5D76187;      // 0x0560(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_1F4B992C4CFAC3F81088B2BDF704ED16;      // 0x0598(0x0038)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C8A4367E427E1A068194EEB69961E4D4;// 0x05D0(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_2447DB1E4C92ACF799DC779DF387E265;// 0x0630(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_12CDEAE548AB71BB5E44A9AF32ECD555;// 0x0670(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B3FFEE624261E78287C0E6B387361993;// 0x0698(0x0028)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_9190940D438E667B8069FFA08AEAE900;// 0x06C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FB8AFDC545ED198C2E6648BB5352DAB0;// 0x0720(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_F3CBE9EF43D59CE29C4FF19D0D79B172;// 0x0780(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F9C7E01D4CCF4AD6B48218BEF3F49E03;// 0x07E0(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EA2253FA4463F48FD5DD52AB681F6E5F;// 0x0810(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_99BE4DD84442AB8F899D05BF4E74FBD9;// 0x0840(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_75836BC5428A3CEAB7C7A685E644B142;// 0x0870(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3106F0954E338D08C82BB6B930D31D3E;// 0x08A0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_33AD4AAE43F4D5919C3449A7001F16AD;// 0x0900(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BED2F5DA4D93B0892F7680B20C356CBC;// 0x0960(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_976EFB8D4E8C7E64EE12B6BCD1F9C11B;// 0x0990(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AD7C4B6F4D5E2089A1DA528781457201;// 0x09C0(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_D26C0F6043664794AB3493BF3C66A8B1;// 0x0A20(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_AB1CC4174E2554AC838E5686C2537714;// 0x0A80(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_94DE93334B35BAACF06FE1B72CF023D4;// 0x0AB0(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_037B3141416FEA4AE15741823B93D06C;// 0x0B10(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_964B9F274BA310BE4B01CC8C29DF24BE;// 0x0B38(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_7956BA7E41BEED8ECA89C28E8069D076;// 0x0B60(0x0028)
	unsigned char                                      UnknownData00[0x8];                                       // 0x0B88(0x0008) MISSED OFFSET
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_D8EDB0A84FC1D963392656801DBAF42B;// 0x0B90(0x00B0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B6FCAD6C4E767830B35BF9BCA9AFD3E1;// 0x0C40(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_2E6BF79845F8457EEEC35D8CFDD3580D;// 0x0CA0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_413879C94BFD286C4CF4038D3FE915A1;// 0x0D00(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8EDEB0424A2158C07433399BCBB29B0A;// 0x0D30(0x0030)
	struct FAnimNode_MultiFabrik_Dinos                 AnimGraphNode_MultiFabrik_Dinos_6B1BCED343D1C75DB85346962539DFA0;// 0x0D60(0x0058)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_29BCD29141F7405C4CC00E8256421C92;// 0x0DB8(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_C32451884B190CD6EF45C780B4B4B19C;      // 0x0E18(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_B26D658C4252C165EA61C1A44DC3028C;      // 0x0E50(0x0038)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D9F63EB3467E9D980FDB36BF3D7FA55D;      // 0x0E88(0x0038)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_6FDAA37848867B88DF5173B190DC3281;// 0x0EC0(0x00B8)
	struct FAnimNode_GroundBones                       AnimGraphNode_GroundBones_22A5C9A349D97F8EB07FB4BA6C56D322;// 0x0F78(0x00B8)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_C076101741DDE623BE382E811037E9A9;// 0x1030(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_950F759B40A4AAF01A063498CCB1B9BF;// 0x1080(0x0060)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_4244A7E74E836B71EEE6649735B6B068;// 0x10E0(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_0AB7CF234853C38D5398A3A52A539392;// 0x1108(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3B773BDE4CE039FEB75CED8019BF54C5;// 0x1148(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_BC475EA44741A4978B65D2B9212F0AE9;// 0x1170(0x0028)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_171240804BD2B588E0A4FBA1F0F391B1;// 0x1198(0x0028)
	struct FAnimNode_RotationOffsetBlendSpace          AnimGraphNode_RotationOffsetBlendSpace_87D86AD94133566F986F02BBD2E58858;// 0x11C0(0x00F8)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_AA09A6714F13F202F9B95F9F03562F22;// 0x12B8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FECC78AF4BFA76FFDB8803BB89755EE1;// 0x1318(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_E7B4A363454D40C7D045B78B5D314159;// 0x1348(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_6DACF0274191706D926E13A0B94902D7;// 0x1378(0x0030)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_0857F89443BC38B293B8DF8CF10D12EB;// 0x13A8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_F0B6DFCB4C8263F124514FB717097040;// 0x1418(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_799DB2814DEA80BA9009C5A1C777C24D;// 0x1448(0x0030)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_F42E550A4B50CFBCC6DBBFBA9E48E686;// 0x1478(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_73DAF87D416A9F6D1AB68DA85C54E7D2;// 0x14C8(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_22919D5C41A56E85EC4CD2A488984117;// 0x1528(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_CB5362CA42A7B6A46172E0824C68A514;// 0x1568(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_B20A39C04B5C0357D7E7D58713C5A853;// 0x1590(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_8B5FB0B24EB642C1BE101E86E27898C4;// 0x15B8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_058197804C9B3D7080CDD29CBBC127E6;// 0x15E8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_1B23AB9A41D58FB4B7AF96B43B04F86E;// 0x1618(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E51276294064B229159AE7BDD368A479;// 0x1678(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_19F1BB924CBDFC244BF6098B53E8C552;// 0x16D8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_96267C9B4D200744372D22BD8EE9D3AB;// 0x1708(0x0030)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_FE69041A4E78D091640D97BCF94159DF;// 0x1738(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C840D1ED42426815A30936A480050E30;// 0x1798(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_798A2D8C44F00154DACADD8528CC099C;// 0x17C8(0x0030)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_38E0F73B43EF2447F97452BB7AD278F4;// 0x17F8(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_13B4C1AD4F0D49DF44A46B92C97D93C0;// 0x1838(0x0060)
	struct FAnimNode_BlendListByInt                    AnimGraphNode_BlendListByInt_15C7CF194C8175FCC48CEA9A9E709D4D;// 0x1898(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_59DB2E4E4996DD432A713A9B65A537A0;// 0x18F8(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_CDCED0374F5C3C1AAA53F8936EA07887;// 0x1928(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_BBB55E5E4132B214C6DD12A83B3A49BD;// 0x1958(0x0030)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_D83D0E1F4750A0241575A5BF3F61C238;// 0x1988(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_DC0C0A0F4CB1B8E31AFDCA938BC6F813;// 0x19B0(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_7B96733A42BDB9C8E3E6728A4962CD3F;// 0x19D8(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E28D877645E0ADF913D7A7890589CF61;// 0x1A08(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6C133063450C1CD5D48E368861B81660;// 0x1A68(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C2EC33CE4D61062BAB880189BBDDB074;// 0x1AC8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5F5FBA5A4A7947733EB25FABFE52E748;// 0x1B28(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FB097E004F92ED0977C2C4A78CB165D5;// 0x1B58(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_DB4B52B64465421E9840B9879F1A7D86;// 0x1B88(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FBBBBE9A41282D51E78556B367FBE509;// 0x1BB8(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_584C935149446DC9CB5E0987A44B7EE6;// 0x1C18(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_EDCFC45041EEE0CD9C8D6B9A5BB19522;// 0x1C48(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_5686CA474F7607E7CC6A15B3A0D301CC;// 0x1C78(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0B2843E8494A6EF2D6561BB9C70E2EC3;// 0x1CA8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_0744380E4E6268AA38C21FBBE9A186CA;// 0x1D08(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_67004B944555CC61F06B63816277E83F;// 0x1D68(0x0060)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_DAE3F9764E873D4D2DC3E2A2589DFF04;// 0x1DC8(0x0050)
	struct FAnimNode_ApplyAdditive                     AnimGraphNode_ApplyAdditive_0CA173AC4F269A67418E3E9D6365CFCD;// 0x1E18(0x0050)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_EABAFD584D7227D2773199AA4B66877B;// 0x1E68(0x0060)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_919A81E349A42B35E2FD64B9A2839DF4;// 0x1EC8(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3022ADB54A09C70CEE50D19EEB2B8FA0;// 0x1F08(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_3DD974D0413F3F3138810BB7CB7E1967;// 0x1F30(0x0028)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_14EB815E48E8BE432526E28907C44F57;// 0x1F58(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_D606F27C42C26A7678B42BBEA935EAC9;// 0x2038(0x00E0)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_1C83BE9B49FA74C06054EDA5ECDE73BD;// 0x2118(0x0040)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_539FC4C54A4EE60D08E493A719A7BED5;// 0x2158(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_ED4D9C694AE933AE8EED16966DC37A5C;// 0x2180(0x0030)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_FAA488EA4F4BDAEA0F1A8680D2676697;// 0x21B0(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_8DB30BF5453172608C01B2A22C04C298;// 0x2210(0x0028)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_6B6EE2694BDD60CCB5CEC3B1422D6F50;// 0x2238(0x0040)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_BF898E8F4E8649591670B4B7C2445C94;// 0x2278(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_C7656F9149C202DC917B7CB49E7DA140;// 0x22D8(0x0060)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_0DB7DD1E40F75F6F7AD7F495A2B4C8F3;// 0x2338(0x0028)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_479308B7408B0784C1038C892714E0D0;// 0x2360(0x0028)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_835102FA4ADE79AA18BB7A986D13DBA7;// 0x2388(0x0030)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_C5C1B70D4F5D48332C14CC8AEB46B8CB;// 0x23B8(0x0030)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_8E85CF4844FAD7F7030EAD82C78C8B11;// 0x23E8(0x00E0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_017F471948387D1C87A05287C3E9253F;// 0x24C8(0x00E0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_CFE26C2D432F59CAD69C3B9C9DA24F57;// 0x25A8(0x0060)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8C5B987B4A7122513F5A34A47C192325;// 0x2608(0x0060)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_2B95DF054F2B54F6574A14BA3BE6C212;// 0x2668(0x00E0)
	bool                                               bIsMoving;                                                // 0x2748(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x2749(0x0003) MISSED OFFSET
	struct FRotator                                    RootRotationOffset;                                       // 0x274C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimPitch;                                                 // 0x2758(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimYaw;                                                   // 0x275C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     RootLocationOffset;                                       // 0x2760(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAimOffset;                                            // 0x276C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x3];                                       // 0x276D(0x0003) MISSED OFFSET
	float                                              MovementAnimRate;                                         // 0x2770(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsFalling;                                               // 0x2774(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x2775(0x0003) MISSED OFFSET
	float                                              MaxMovementAnimRate;                                      // 0x2778(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseFalling;                                              // 0x277C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x3];                                       // 0x277D(0x0003) MISSED OFFSET
	float                                              MovingAnimSpeedTreshold;                                  // 0x2780(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinMovementAnimRate;                                      // 0x2784(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsTurning;                                               // 0x2788(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurning;                                              // 0x2789(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bTurningRight;                                            // 0x278A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x1];                                       // 0x278B(0x0001) MISSED OFFSET
	float                                              TurningEnabledBlendTime;                                  // 0x278C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDisabledBlendTime;                                 // 0x2790(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              TurningDirectionBlendTime;                                // 0x2794(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MinTurnRateForTurnAnimation;                              // 0x2798(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSwimming;                                             // 0x279C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsSwimming;                                              // 0x279D(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData06[0x2];                                       // 0x279E(0x0002) MISSED OFFSET
	float                                              SwimmingMovingAnimSpeedThreshold;                         // 0x27A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingAnimPlayRate;                                      // 0x27A4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendInTime;                                       // 0x27A8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              FallingBlendOutTime;                                      // 0x27AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendInTime;                                        // 0x27B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovingBlendOutTime;                                       // 0x27B4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsRunning;                                               // 0x27B8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseRunning;                                              // 0x27B9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bUseSleepingAnim;                                         // 0x27BA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsSleeping;                                              // 0x27BB(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector                                     SleepingAnimTranslationOffset;                            // 0x27BC(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              MovementAnimRatePower;                                    // 0x27C8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseTurnInPlaceAnimation;                                 // 0x27CC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSkipAnimGraph;                                           // 0x27CD(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData07[0x2];                                       // 0x27CE(0x0002) MISSED OFFSET
	float                                              AlignGroundAlpha;                                         // 0x27D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseAlignGround;                                          // 0x27D4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseBlinking;                                             // 0x27D5(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData08[0x2];                                       // 0x27D6(0x0002) MISSED OFFSET
	float                                              BlinkBlend;                                               // 0x27D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              IKAlpha;                                                  // 0x27DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendInTime;                                       // 0x27E0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningBlendOutTime;                                      // 0x27E4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate;                                  // 0x27E8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseRunningMovementAnimRate;                              // 0x27EC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIKWhenFalling;                                    // 0x27ED(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bDisableIK;                                               // 0x27EE(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData09[0x1];                                       // 0x27EF(0x0001) MISSED OFFSET
	float                                              AimOffsetPitchScale;                                      // 0x27F0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              AimOffsetYawScale;                                        // 0x27F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bSleepingEnableIK;                                        // 0x27F8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData10[0x7];                                       // 0x27F9(0x0007) MISSED OFFSET
	class UAnimSequenceBase*                           Idle;                                                     // 0x2800(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           MoveFwd;                                                  // 0x2808(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Move_Lft;                                                 // 0x2810(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Move_Rit;                                                 // 0x2818(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             Strafe_Blendspace;                                        // 0x2820(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAnimSequenceBase*                           Run_Fwd;                                                  // 0x2828(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Run_Lft;                                                  // 0x2830(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Run_Rit;                                                  // 0x2838(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Swim_Idle;                                                // 0x2840(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Swim_Fwd;                                                 // 0x2848(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TurnInPlace_Lft;                                          // 0x2850(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           TurnInPlace_Rit;                                          // 0x2858(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Falling;                                                  // 0x2860(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Sleeping;                                                 // 0x2868(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AimOffset;                                                // 0x2870(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Blink;                                                    // 0x2878(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Seeking;                                          // 0x2880(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Skidding;                                         // 0x2888(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Attached;                                         // 0x2890(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Move_Fwd;                                // 0x2898(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Move_Left;                               // 0x28A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Move_Right;                              // 0x28A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Run_Fwd;                                 // 0x28B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Run_Left;                                // 0x28B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Climbing_Run_Right;                               // 0x28C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAnimSequenceBase*                           Climber_Other;                                            // 0x28C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AdditiveClimbingBlendspace_Front;                         // 0x28D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UBlendSpaceBase*                             AdditiveClimbingBlendspace_Back;                          // 0x28D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Climber_UseMoveBlendspace;                                // 0x28E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData11[0x7];                                       // 0x28E1(0x0007) MISSED OFFSET
	class UBlendSpaceBase*                             Climber_Climb_MoveBlendspace;                             // 0x28E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	TEnumAsByte<E_DinoClimberState>                    ClimberState;                                             // 0x28F0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      MaxIsClimbingStateIndex;                                  // 0x28F1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData12[0x2];                                       // 0x28F2(0x0002) MISSED OFFSET
	float                                              StartClimbingBlendTime;                                   // 0x28F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              StopClimbingBlendTime;                                    // 0x28F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SeekingBlendTime;                                         // 0x28FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CurrentForwardClimbVelocityRatio;                         // 0x2900(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ForwardVelocityRatioToStopSkidAnim;                       // 0x2904(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              VelocityRatioAbsMax;                                      // 0x2908(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                ClimbingTurnDirection;                                    // 0x290C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingTurnBlendTime_Move;                               // 0x2910(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbingTurnBlendTime_Run;                                // 0x2914(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiddingBlendTime;                                        // 0x2918(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbRunBlendTime_In;                                     // 0x291C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              ClimbRunBlendTime_Out;                                    // 0x2920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Idle;                      // 0x2924(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Move;                      // 0x2925(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPlayClimbingAnimsWhileSeeking_Run;                       // 0x2926(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsCurrentlyUsingAdditiveClimbingBlendSpaces;             // 0x2927(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ClimbingBlendspace_Axes_Front;                            // 0x2928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FVector2D                                   ClimbingBlendspace_Axes_Back;                             // 0x2930(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bClimberForceDisableIK;                                   // 0x2938(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData13[0x3];                                       // 0x2939(0x0003) MISSED OFFSET
	float                                              MovementAnimRate_Climbing;                                // 0x293C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              RunningMovementAnimRate_Climbing;                         // 0x2940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiddingRatio_Forward;                                    // 0x2944(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SkiddingRatio_Right;                                      // 0x2948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bIsClimberSkidding;                                       // 0x294C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData14[0x3];                                       // 0x294D(0x0003) MISSED OFFSET
	float                                              MaxAbsSkiddingVelocity;                                   // 0x2950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData15[0x4];                                       // 0x2954(0x0004) MISSED OFFSET
	class UBlendSpaceBase*                             Climber_Skidding_Blendspace;                              // 0x2958(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bUseSkiddingBlendspace;                                   // 0x2960(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bCanClimberPlaySeekAnim;                                  // 0x2961(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData16[0x2];                                       // 0x2962(0x0002) MISSED OFFSET
	struct FVector                                     CurrentClimbingMoveDirection;                             // 0x2964(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCanStrafe;                                               // 0x2970(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bIsStrafing;                                              // 0x2971(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData17[0x2];                                       // 0x2972(0x0002) MISSED OFFSET
	struct FVector2D                                   StrafeMovementAxes;                                       // 0x2974(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RootYawSpeedCheckMultiplier;                              // 0x297C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ExtraMovementAnimRateMultiplier;                          // 0x2980(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TurnInPlaceAnimRate;                                      // 0x2984(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrafeBlendTime;                                          // 0x2988(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              StrafeBlendspacePlayRate;                                 // 0x298C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               ForcePreventSeekAnim;                                     // 0x2990(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData18[0x3];                                       // 0x2991(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_Add_VectorVector_ReturnValue;                    // 0x2994(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue;                          // 0x29A0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue;                         // 0x29A1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue2;                         // 0x29A2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue;                           // 0x29A3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_ByteByte_ReturnValue;                    // 0x29A4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsValid_ReturnValue;                             // 0x29A5(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue;                 // 0x29A6(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue2;                // 0x29A7(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue3;                // 0x29A8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue3;                         // 0x29A9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue4;                         // 0x29AA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue5;                         // 0x29AB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X;                                 // 0x29AC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y;                                 // 0x29B0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_X2;                                // 0x29B4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y2;                                // 0x29B8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue;                  // 0x29BC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue6;                         // 0x29BD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue7;                         // 0x29BE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData19[0x1];                                       // 0x29BF(0x0001) MISSED OFFSET
	float                                              CallFunc_BreakVector_X;                                   // 0x29C0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y;                                   // 0x29C4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z;                                   // 0x29C8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue;                 // 0x29CC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue2;                // 0x29D0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue8;                         // 0x29D4(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData20[0x3];                                       // 0x29D5(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector2D_X3;                                // 0x29D8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector2D_Y3;                                // 0x29DC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue2;                        // 0x29E0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue9;                         // 0x29E1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData21[0x2];                                       // 0x29E2(0x0002) MISSED OFFSET
	float                                              K2Node_Event_DeltaTimeX;                                  // 0x29E4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APawn*                                       CallFunc_TryGetPawnOwner_ReturnValue;                     // 0x29E8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class ADino_Character_BP_Climber_C*                K2Node_DynamicCast_AsDino_Character_BP_Climber_C;         // 0x29F0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x29F8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDinoRunning_Running;                           // 0x29F9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue4;                // 0x29FA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue5;                // 0x29FB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue3;                        // 0x29FC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue6;                // 0x29FD(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue2;                          // 0x29FE(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue3;                          // 0x29FF(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue4;                        // 0x2A00(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue5;                        // 0x2A01(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue10;                        // 0x2A02(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData22[0x1];                                       // 0x2A03(0x0001) MISSED OFFSET
	float                                              CallFunc_GetDefaultMovementSpeed_ReturnValue;             // 0x2A04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue11;                        // 0x2A08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue4;                          // 0x2A09(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData23[0x2];                                       // 0x2A0A(0x0002) MISSED OFFSET
	float                                              CallFunc_Lerp_ReturnValue;                                // 0x2A0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue;                 // 0x2A10(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetForwardVector_ReturnValue;                    // 0x2A1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDesiredMoveDirection_Direction;               // 0x2A28(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue;                     // 0x2A34(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue;                              // 0x2A40(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_K2_GetActorRotation_ReturnValue2;                // 0x2A4C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue;                // 0x2A58(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_LessLess_VectorRotator_ReturnValue;              // 0x2A64(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_BoundToCube_ReturnValue;                         // 0x2A70(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Normal_ReturnValue2;                             // 0x2A7C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_X2;                                  // 0x2A88(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y2;                                  // 0x2A8C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z2;                                  // 0x2A90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_Multiply_VectorFloat_ReturnValue2;               // 0x2A94(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue;                     // 0x2AA0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData24[0x3];                                       // 0x2AA1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_BoundToCube_ReturnValue2;                        // 0x2AA4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue2;                 // 0x2AB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData25[0x3];                                       // 0x2AB1(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakVector_X3;                                  // 0x2AB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Y3;                                  // 0x2AB8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakVector_Z3;                                  // 0x2ABC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue5;                          // 0x2AC0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue2;                    // 0x2AC1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue3;                 // 0x2AC2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue4;                 // 0x2AC3(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_SelectFloat_ReturnValue;                         // 0x2AC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UPawnMovementComponent*                      CallFunc_GetMovementComponent_ReturnValue;                // 0x2AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_MakeVector2D_ReturnValue;                        // 0x2AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UCharacterMovementComponent*                 K2Node_DynamicCast_AsCharacterMovementComponent;          // 0x2AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x2AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData26[0x3];                                       // 0x2AE1(0x0003) MISSED OFFSET
	struct FVector                                     CallFunc_GetDinoVelocity_ReturnValue2;                    // 0x2AE4(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue7;                // 0x2AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData27[0x3];                                       // 0x2AF1(0x0003) MISSED OFFSET
	float                                              CallFunc_VSize_ReturnValue;                               // 0x2AF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector2D                                   CallFunc_Conv_VectorToVector2D_ReturnValue;               // 0x2AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Dot_VectorVector_ReturnValue;                    // 0x2B00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_VSize2D_ReturnValue;                             // 0x2B04(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue3;                    // 0x2B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData28[0x3];                                       // 0x2B09(0x0003) MISSED OFFSET
	float                                              CallFunc_Divide_FloatFloat_ReturnValue;                   // 0x2B0C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue5;                 // 0x2B10(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue8;                // 0x2B11(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue6;                          // 0x2B12(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue9;                // 0x2B13(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue7;                          // 0x2B14(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue6;                        // 0x2B15(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue10;               // 0x2B16(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_EqualEqual_ByteByte_ReturnValue11;               // 0x2B17(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsMeshGameplayRelevant_ReturnValue;              // 0x2B18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData29[0x3];                                       // 0x2B19(0x0003) MISSED OFFSET
	struct FRotator                                    CallFunc_GetAimOffsets_RootRotOffset;                     // 0x2B1C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetAimOffsets_TheRootYawSpeed;                   // 0x2B28(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FVector                                     CallFunc_GetAimOffsets_RootLocOffset;                     // 0x2B2C(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	struct FRotator                                    CallFunc_GetAimOffsets_ReturnValue;                       // 0x2B38(0x000C) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue7;                        // 0x2B44(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData30[0x3];                                       // 0x2B45(0x0003) MISSED OFFSET
	float                                              CallFunc_BreakRot_Pitch;                                  // 0x2B48(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Yaw;                                    // 0x2B4C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_BreakRot_Roll;                                   // 0x2B50(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue2;                  // 0x2B54(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Divide_FloatFloat_ReturnValue3;                  // 0x2B58(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue3;                // 0x2B5C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue6;                 // 0x2B60(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData31[0x3];                                       // 0x2B61(0x0003) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue;                              // 0x2B64(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue4;                // 0x2B68(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue7;                 // 0x2B6C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData32[0x3];                                       // 0x2B6D(0x0003) MISSED OFFSET
	float                                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;         // 0x2B70(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData33[0x4];                                       // 0x2B74(0x0004) MISSED OFFSET
	double                                             CallFunc_GetGameTimeInSeconds_ReturnValue;                // 0x2B78(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue2;                             // 0x2B80(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData34[0x4];                                       // 0x2B84(0x0004) MISSED OFFSET
	double                                             CallFunc_Subtract_DoubleDouble_ReturnValue;               // 0x2B88(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Conv_DoubleToFloat_ReturnValue;                  // 0x2B90(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Less_FloatFloat_ReturnValue4;                    // 0x2B94(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue12;                        // 0x2B95(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x2B96(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue13;                        // 0x2B97(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue;                // 0x2B98(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue;                      // 0x2B9C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue2;               // 0x2BA0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMin_ReturnValue;                                // 0x2BA4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue;                 // 0x2BA8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FMax_ReturnValue;                                // 0x2BAC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue2;                  // 0x2BB0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue8;                        // 0x2BB1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData35[0x2];                                       // 0x2BB2(0x0002) MISSED OFFSET
	float                                              CallFunc_FClamp_ReturnValue3;                             // 0x2BB4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue14;                        // 0x2BB8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData36[0x3];                                       // 0x2BB9(0x0003) MISSED OFFSET
	float                                              CallFunc_GetWorldDeltaSeconds_ReturnValue3;               // 0x2BBC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue5;                // 0x2BC0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Subtract_FloatFloat_ReturnValue2;                // 0x2BC4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue2;                     // 0x2BC8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue4;                             // 0x2BCC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue8;                          // 0x2BD0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData37[0x3];                                       // 0x2BD1(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue6;                // 0x2BD4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Not_PreBool_ReturnValue9;                        // 0x2BD8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData38[0x3];                                       // 0x2BD9(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue7;                // 0x2BDC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue15;                        // 0x2BE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData39[0x3];                                       // 0x2BE1(0x0003) MISSED OFFSET
	float                                              CallFunc_Add_FloatFloat_ReturnValue3;                     // 0x2BE4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue5;                             // 0x2BE8(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue8;                // 0x2BEC(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Add_FloatFloat_ReturnValue4;                     // 0x2BF0(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_FClamp_ReturnValue6;                             // 0x2BF4(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_ShouldPlayClimbRunAnim_PlayClimbRun;             // 0x2BF8(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue16;                        // 0x2BF9(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanOR_ReturnValue9;                          // 0x2BFA(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue8;                 // 0x2BFB(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue9;                 // 0x2BFC(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData40[0x3];                                       // 0x2BFD(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue9;                // 0x2C00(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue10;                // 0x2C04(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData41[0x3];                                       // 0x2C05(0x0003) MISSED OFFSET
	float                                              CallFunc_Abs_ReturnValue;                                 // 0x2C08(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_Greater_FloatFloat_ReturnValue11;                // 0x2C0C(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData42[0x3];                                       // 0x2C0D(0x0003) MISSED OFFSET
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue10;               // 0x2C10(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	float                                              CallFunc_Multiply_FloatFloat_ReturnValue11;               // 0x2C14(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue17;                        // 0x2C18(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_BooleanAND_ReturnValue18;                        // 0x2C19(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData43[0x2];                                       // 0x2C1A(0x0002) MISSED OFFSET
	float                                              CallFunc_GetStrafeBlendspacePlayRate_BlendspacePlayRate;  // 0x2C1C(0x0004) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass DinoBlueprintBase_Climber.DinoBlueprintBase_Climber_C");
		return ptr;
	}


	void IsDinoRunning(class ADino_Character_BP_Climber_C* Dino, bool* Running);
	void GetStrafeBlendspacePlayRate(float forwardVelocity, float RightVelocity, const struct FVector2D& BlendspaceInputs, float* BlendspacePlayRate);
	void ShouldPlayClimbRunAnim(bool* PlayClimbRun);
	void Update_Climber_Anim_Vars(class ADino_Character_BP_Climber_C* ClimberRef);
	void BlueprintPlayAnimationEvent(class UAnimMontage** AnimationMontage, float* PlayRate, float* playedAnimLength);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2688();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_ModifyBone_588();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2687();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2686();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2685();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2684();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3657();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3656();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3655();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2683();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2682();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3654();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3653();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2681();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2680();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3652();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2679();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_ModifyBone_587();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2678();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2677();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3651();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3650();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2676();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_GroundBones_142();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_GroundBones_141();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_ApplyAdditive_262();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2675();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_RotationOffsetBlendSpace_170();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2674();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3649();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3648();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3647();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByEnum_26();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3646();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3645();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2673();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3644();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3643();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2672();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2671();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3642();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3641();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByInt_32();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3640();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3639();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2670();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByInt_31();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3638();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3637();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3636();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3635();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2669();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2668();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2667();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3634();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3633();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3632();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2666();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3631();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3630();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3629();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2665();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2664();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2663();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2662();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendSpacePlayer_190();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendSpacePlayer_189();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3628();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2661();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2660();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2659();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3627();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_SequencePlayer_3626();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendSpacePlayer_188();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendSpacePlayer_187();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2658();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendListByBool_2657();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_DinoBlueprintBase_Climber_AnimGraphNode_BlendSpacePlayer_186();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_DinoBlueprintBase_Climber(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
