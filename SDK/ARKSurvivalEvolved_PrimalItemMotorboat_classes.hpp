#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemMotorboat_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PrimalItemMotorboat.PrimalItemMotorboat_C
// 0x0000 (0x0AE0 - 0x0AE0)
class UPrimalItemMotorboat_C : public UPrimalItem_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PrimalItemMotorboat.PrimalItemMotorboat_C");
		return ptr;
	}


	void ExecuteUbergraph_PrimalItemMotorboat(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
