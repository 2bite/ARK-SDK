#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemSkin_TorchSparkler_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C
// 0x0000 (0x0990 - 0x0990)
class UPrimalItemSkin_TorchSparkler_C : public UPrimalItemSkinGeneric_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemSkin_TorchSparkler.PrimalItemSkin_TorchSparkler_C");
		return ptr;
	}


	class USoundBase* BPGetFuelAudioOverride(class APrimalStructure** ForStructure);
	class UParticleSystem* BPGetFuelParticleSystemOverride(class APrimalStructure** ForStructure);
	void ExecuteUbergraph_PrimalItemSkin_TorchSparkler(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
