#pragma once

// ARKSurvivalEvolved (332.8) SDK

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

// UserDefinedStruct TekBowArrowSetup_Struct.TekBowArrowSetup_Struct
// 0x0098
struct FTekBowArrowSetup_Struct
{
	class UClass*                                      Projectile_2_83888AD845C0DA8D6F3202822BAE3DDA;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class FString                                      Name_5_B596008341470379BFE0EE8E96F3683C;                  // 0x0008(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	class UTexture2D*                                  Icon_8_9B59D40B456CD615BB761EB428AA0A98;                  // 0x0018(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	int                                                Cost_21_47DA7998495F55708AD5E0ACBF651AF1;                 // 0x0020(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0024(0x0004) MISSED OFFSET
	class UParticleSystem*                             MaxPowerFX_FPV_24_CCCB9B8F4E9A10636704429D575D18C9;       // 0x0028(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MaxPowerFX_TPV_25_F771E159461C087D5F98ABAFF543E8F5;       // 0x0030(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MuzzleFX_18_2A559A5A4759E1D85E77A8B21779378B;             // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             MuzzleFXInstant_26_B3A1DC404EFA3E1DDE0EA094CC8DD602;      // 0x0040(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             TrailFX_29_455196714800FA97820814A60FC584B3;              // 0x0048(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UParticleSystem*                             AdditionalImpactFX_35_AC26EF4E4A0A1D68DF50C7A03FAF300F;   // 0x0050(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      ReplacementImpactEmitter_37_C759F98D4EA354F7F2A5E9B957610CA4;// 0x0058(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FLinearColor                                StringAndArrowColor_40_928E86694CAC86BCCEEF19B8F8937A3F;  // 0x0060(0x0010) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UClass*                                      InstantDmgTypeReplacement_43_A55713024440A13F98F81A922A787FA8;// 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  PrintSound_50_374FC4114070952CCF99348CC6C736F7;           // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FireSound_51_9CDAA57F4EFA16F0CACF53BF04CA5712;            // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  FireInstantSound_52_D827780C4F9D8FDEF7563D824C8DF205;     // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USoundBase*                                  InstantHitImpactSound_55_96D72A2E46983DAB69C9AE9DB883B4FC;// 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
