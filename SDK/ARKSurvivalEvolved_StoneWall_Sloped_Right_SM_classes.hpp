#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_StoneWall_Sloped_Right_SM_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AStoneWall_Sloped_Right_SM_C : public ABaseWall_Sloped_Right_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StoneWall_Sloped_Right_SM.StoneWall_Sloped_Right_SM_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_StoneWall_Sloped_Right_SM(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
