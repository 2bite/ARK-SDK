#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PoisonGrenadeGasCloud_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C
// 0x0000 (0x08A0 - 0x08A0)
class APoisonGrenadeGasCloud_C : public ABuff_PoisonTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PoisonGrenadeGasCloud.PoisonGrenadeGasCloud_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PoisonGrenadeGasCloud(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
