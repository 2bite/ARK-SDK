// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchWall.EngramEntry_ThatchWall_C.ExecuteUbergraph_EngramEntry_ThatchWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchWall_C::ExecuteUbergraph_EngramEntry_ThatchWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchWall.EngramEntry_ThatchWall_C.ExecuteUbergraph_EngramEntry_ThatchWall");

	UEngramEntry_ThatchWall_C_ExecuteUbergraph_EngramEntry_ThatchWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
