#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PlayerPawnTest_Child_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerPawnTest_Child.PlayerPawnTest_Child_C
// 0x0000 (0x2239 - 0x2239)
class APlayerPawnTest_Child_C : public APlayerPawnTest_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerPawnTest_Child.PlayerPawnTest_Child_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_PlayerPawnTest_Child(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
