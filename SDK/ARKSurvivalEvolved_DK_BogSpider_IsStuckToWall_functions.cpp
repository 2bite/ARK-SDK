// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DK_BogSpider_IsStuckToWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ReceiveConditionCheck
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UDK_BogSpider_IsStuckToWall_C::ReceiveConditionCheck(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ReceiveConditionCheck");

	UDK_BogSpider_IsStuckToWall_C_ReceiveConditionCheck_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ExecuteUbergraph_DK_BogSpider_IsStuckToWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDK_BogSpider_IsStuckToWall_C::ExecuteUbergraph_DK_BogSpider_IsStuckToWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DK_BogSpider_IsStuckToWall.DK_BogSpider_IsStuckToWall_C.ExecuteUbergraph_DK_BogSpider_IsStuckToWall");

	UDK_BogSpider_IsStuckToWall_C_ExecuteUbergraph_DK_BogSpider_IsStuckToWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
