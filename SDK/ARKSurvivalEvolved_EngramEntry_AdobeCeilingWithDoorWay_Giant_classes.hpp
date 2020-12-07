#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_AdobeCeilingWithDoorWay_Giant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass EngramEntry_AdobeCeilingWithDoorWay_Giant.EngramEntry_AdobeCeilingWithDoorWay_Giant_C
// 0x0000 (0x0090 - 0x0090)
class UEngramEntry_AdobeCeilingWithDoorWay_Giant_C : public UPrimalEngramEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass EngramEntry_AdobeCeilingWithDoorWay_Giant.EngramEntry_AdobeCeilingWithDoorWay_Giant_C");
		return ptr;
	}


	void ExecuteUbergraph_EngramEntry_AdobeCeilingWithDoorWay_Giant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
