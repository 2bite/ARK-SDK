#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Easy_Horde_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementNode_Easy_Horde.ElementNode_Easy_Horde_C
// 0x0008 (0x1998 - 0x1990)
class AElementNode_Easy_Horde_C : public AElementNode_Base_Horde_C
{
public:
	class UBoxComponent*                               wer;                                                      // 0x1990(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementNode_Easy_Horde.ElementNode_Easy_Horde_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElementNode_Easy_Horde(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
