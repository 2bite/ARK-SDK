// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TrophyWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TrophyWall.EngramEntry_TrophyWall_C.ExecuteUbergraph_EngramEntry_TrophyWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TrophyWall_C::ExecuteUbergraph_EngramEntry_TrophyWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TrophyWall.EngramEntry_TrophyWall_C.ExecuteUbergraph_EngramEntry_TrophyWall");

	UEngramEntry_TrophyWall_C_ExecuteUbergraph_EngramEntry_TrophyWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
