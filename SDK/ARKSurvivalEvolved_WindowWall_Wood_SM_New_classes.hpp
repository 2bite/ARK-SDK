#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindowWall_Wood_SM_New_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WindowWall_Wood_SM_New.WindowWall_Wood_SM_New_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AWindowWall_Wood_SM_New_C : public AWindowWall_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindowWall_Wood_SM_New.WindowWall_Wood_SM_New_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WindowWall_Wood_SM_New(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
