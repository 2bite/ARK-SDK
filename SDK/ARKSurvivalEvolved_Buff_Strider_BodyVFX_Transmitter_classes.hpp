#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Strider_BodyVFX_Transmitter_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C
// 0x0000 (0x0A0D - 0x0A0D)
class ABuff_Strider_BodyVFX_Transmitter_C : public ABuff_Strider_BodyVFX_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Strider_BodyVFX_Transmitter.Buff_Strider_BodyVFX_Transmitter_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Strider_BodyVFX_Transmitter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
