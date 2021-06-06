// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_ThatchSlopedWall_left_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C.ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_ThatchSlopedWall_left_C::ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_ThatchSlopedWall_left.EngramEntry_ThatchSlopedWall_left_C.ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left");

	UEngramEntry_ThatchSlopedWall_left_C_ExecuteUbergraph_EngramEntry_ThatchSlopedWall_left_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
