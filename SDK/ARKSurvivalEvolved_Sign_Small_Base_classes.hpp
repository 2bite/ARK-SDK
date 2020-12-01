#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Small_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_Small_Base.Sign_Small_Base_C
// 0x0000 (0x0AD0 - 0x0AD0)
class ASign_Small_Base_C : public ASign_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Small_Base.Sign_Small_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_Small_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
