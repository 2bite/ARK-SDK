#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjWebBall_Queen_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjWebBall_Queen.ProjWebBall_Queen_C
// 0x0008 (0x0650 - 0x0648)
class AProjWebBall_Queen_C : public AProjWebBall_C
{
public:
	class UChildActorComponent*                        ChildActor1;                                              // 0x0648(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjWebBall_Queen.ProjWebBall_Queen_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjWebBall_Queen(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
