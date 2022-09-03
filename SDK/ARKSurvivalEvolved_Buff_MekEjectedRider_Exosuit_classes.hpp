#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_MekEjectedRider_Exosuit_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_MekEjectedRider_Exosuit_C : public ABuff_MekEjectedRider_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_MekEjectedRider_Exosuit.Buff_MekEjectedRider_Exosuit_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_MekEjectedRider_Exosuit(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
