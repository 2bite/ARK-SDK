// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_LargeWall_Stone_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_LargeWall_Stone.EngramEntry_LargeWall_Stone_C.ExecuteUbergraph_EngramEntry_LargeWall_Stone
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_LargeWall_Stone_C::ExecuteUbergraph_EngramEntry_LargeWall_Stone(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_LargeWall_Stone.EngramEntry_LargeWall_Stone_C.ExecuteUbergraph_EngramEntry_LargeWall_Stone");

	UEngramEntry_LargeWall_Stone_C_ExecuteUbergraph_EngramEntry_LargeWall_Stone_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
