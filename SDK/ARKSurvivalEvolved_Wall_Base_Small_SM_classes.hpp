#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Wall_Base_Small_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Wall_Base_Small_SM.Wall_Base_Small_SM_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AWall_Base_Small_SM_C : public AStructureBaseBP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Wall_Base_Small_SM.Wall_Base_Small_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Wall_Base_Small_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
