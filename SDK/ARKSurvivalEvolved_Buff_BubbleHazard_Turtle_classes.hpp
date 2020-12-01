#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BubbleHazard_Turtle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C
// 0x0000 (0x0985 - 0x0985)
class ABuff_BubbleHazard_Turtle_C : public ABuff_BubbleHazard_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BubbleHazard_Turtle.Buff_BubbleHazard_Turtle_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BubbleHazard_Turtle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
