#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct HairMetaData.HairMetaData
// 0x0063
struct FHairMetaData
{
	class FString                                      HairStyleNameString_8_59FC1375448902F8752BF083E928518D;   // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	bool                                               AllowHairSimulation_37_EA7DF01E4BCB91C29CE9EDBF80A4DC82;  // 0x0010(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0011(0x0007) MISSED OFFSET
	TArray<struct FVector>                             RestPos_3_C9C310CC4A789B406462C2B9CE2463B1;               // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FVector>                             PivotPos_44_4FBB724349C3E81132566780C1E397F3;             // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	float                                              GravityForce_11_E24D5DA542776710E028FF98BF678DE6;         // 0x0038(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DragForce_14_9EFA51F046A6820CCDD810A3FF7EFDB7;            // 0x003C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Damping_17_183EC7CD4D8F2ACB3F5F808DA235F0DD;              // 0x0040(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringForce_20_DAA8178C471BA72BFFE2CE9687F8E428;          // 0x0044(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              HairScale_23_7C673D6C4FC356533C8767B74B66F8CF;            // 0x0048(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringForceFrontModifier_26_E808F33C40772F9214463B8CA42324E8;// 0x004C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingFrontModifier_29_FB4BDA1D432A303773971C8C34F23A53; // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              SpringForceBack_32_CC1CCA024FC7D522A1E189BCC5366068;      // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              DampingBack_35_70F79D6A40BF14CD6F8060ABBC263F89;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              MaxRestDistance_40_22F3EB35435CE313C3AAEC855A006D0A;      // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bPosAsPivot_47_B6FA83974BB12485C7E1F087EF4030CD;          // 0x0060(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollideWithNeck_51_17E9F53E47565DB3C1E367ADE714F8A3;     // 0x0061(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bCollideMiddle_52_A3B59A144A6F79F5FFCD88916A60E2FA;       // 0x0062(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
