#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ThatchWall_Sloped_Left_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AThatchWall_Sloped_Left_SM_C : public ABaseWall_Sloped_Left_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ThatchWall_Sloped_Left_SM.ThatchWall_Sloped_Left_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ThatchWall_Sloped_Left_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
