#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ragnarok_Wyvern_Override_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C
// 0x0000 (0x22F6 - 0x22F6)
class ARagnarok_Wyvern_Override_Ice_C : public ARagnarok_Wyvern_Override_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ragnarok_Wyvern_Override_Ice.Ragnarok_Wyvern_Override_Ice_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ragnarok_Wyvern_Override_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
