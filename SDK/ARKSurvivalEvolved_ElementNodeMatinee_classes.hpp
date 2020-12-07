#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNodeMatinee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementNodeMatinee.ElementNodeMatinee_C
// 0x0000 (0x04F0 - 0x04F0)
class AElementNodeMatinee_C : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementNodeMatinee.ElementNodeMatinee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElementNodeMatinee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
