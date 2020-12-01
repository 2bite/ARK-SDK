#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_KK_ElementNodeMatinee_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass KK_ElementNodeMatinee.KK_ElementNodeMatinee_C
// 0x0000 (0x04D8 - 0x04D8)
class AKK_ElementNodeMatinee_C : public AMatineeActor
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass KK_ElementNodeMatinee.KK_ElementNodeMatinee_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_KK_ElementNodeMatinee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
