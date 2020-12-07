#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementNode_Hard_Horde_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementNode_Hard_Horde.ElementNode_Hard_Horde_C
// 0x0008 (0x19D8 - 0x19D0)
class AElementNode_Hard_Horde_C : public AElementNode_Base_Horde_C
{
public:
	class UBoxComponent*                               Box1;                                                     // 0x19D0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementNode_Hard_Horde.ElementNode_Hard_Horde_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElementNode_Hard_Horde(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
