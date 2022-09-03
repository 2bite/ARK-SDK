#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DmgType_MinigunAOESpindles_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C
// 0x0000 (0x0131 - 0x0131)
class UDmgType_MinigunAOESpindles_C : public UDmgType_MinigunSpindles_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DmgType_MinigunAOESpindles.DmgType_MinigunAOESpindles_C");
		return ptr;
	}


	void BPAdjustHarvestingDamage_1();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
