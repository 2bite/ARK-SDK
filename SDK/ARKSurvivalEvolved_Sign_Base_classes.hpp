#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_Base.Sign_Base_C
// 0x0008 (0x0B18 - 0x0B10)
class ASign_Base_C : public APrimalStructureSign
{
public:
	class USphereComponent*                            StasisComponent;                                          // 0x0B10(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_Base.Sign_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
