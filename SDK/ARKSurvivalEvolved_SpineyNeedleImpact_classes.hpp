#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_SpineyNeedleImpact_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SpineyNeedleImpact.SpineyNeedleImpact_C
// 0x0000 (0x0518 - 0x0518)
class ASpineyNeedleImpact_C : public APrimalEmitterSpawnable
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SpineyNeedleImpact.SpineyNeedleImpact_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_SpineyNeedleImpact(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
