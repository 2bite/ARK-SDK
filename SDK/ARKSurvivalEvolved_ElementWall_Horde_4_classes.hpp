#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElementWall_Horde_4_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementWall_Horde_4.ElementWall_Horde_3_C
// 0x0000 (0x0CB4 - 0x0CB4)
class AElementWall_Horde_3_C : public AElementWall_Horde_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementWall_Horde_4.ElementWall_Horde_3_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ElementWall_Horde_4(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
