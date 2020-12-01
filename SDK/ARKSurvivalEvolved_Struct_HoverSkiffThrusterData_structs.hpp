#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_E_HoverSkiffSide_classes.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_HoverSkiffThrusterData.Struct_HoverSkiffThrusterData
// 0x0060
struct FStruct_HoverSkiffThrusterData
{
	TEnumAsByte<E_HoverSkiffSide>                      ThrusterSide_11_1CE495404B575F3464BFD88D86E7EF41;         // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0001(0x0007) MISSED OFFSET
	class UParticleSystemComponent*                    ThrusterParticleComponent_3_0FF7EAAB4E88ED996811208DC8905C99;// 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             ThrusterAudioComponent_5_05A2394C4D1205A92697948A5504A8A0;// 0x0010(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystemComponent*                    IntenseParticleComponent_8_4CFF1B66431C148E1D989D9A5A8CC48D;// 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThrusterVolumeRange_27_CF81D3FD4DE31AAEFA2E1ABB6AFF7F82;  // 0x0020(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   ThrusterPitchRange_30_BA43760545C00543D0097389ADA5BCFD;   // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              ThrusterScaleInterpSpeed_33_200BFEE64B55956F73126288D3F03CF0;// 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     BaseThrusterScale_24_0F972357417E6DFD9EFDE48947251F98;    // 0x0034(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDidEngineBurst_Start_20_5AE4CDBD437B98DE283D49B8E10DD252;// 0x0040(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bDidEngineBurst_Run_22_1E63AF1845E21AC78469BDB06EA9DE1F;  // 0x0041(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x6];                                       // 0x0042(0x0006) MISSED OFFSET
	class UParticleSystem*                             EngineBurstParticleTemplate_37_3F4A14D04AE1A41AB04AEA9AFB8E86B0;// 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundCue*                                   EngineBurstSound_40_BF9376C84825143C14A88AA2696418B0;     // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector2D                                   EngineBurstVolumeAndPitch_43_A28871D046F055CEC4B623AEB31F4868;// 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
