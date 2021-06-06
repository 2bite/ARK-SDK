#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BoneModifiersContainer_ChibiThylacoleo_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BoneModifiersContainer_ChibiThylacoleo.BoneModifiersContainer_ChibiThylacoleo_C
// 0x0000 (0x0038 - 0x0038)
class UBoneModifiersContainer_ChibiThylacoleo_C : public UBoneModifiersContainer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BoneModifiersContainer_ChibiThylacoleo.BoneModifiersContainer_ChibiThylacoleo_C");
		return ptr;
	}


	void ExecuteUbergraph_BoneModifiersContainer_ChibiThylacoleo(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
