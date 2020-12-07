#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectricShockEmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElectricShockEmitter.ElectricShockEmitter_C
// 0x0000 (0x0518 - 0x0518)
class AElectricShockEmitter_C : public AExplosionEmitter_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElectricShockEmitter.ElectricShockEmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElectricShockEmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
