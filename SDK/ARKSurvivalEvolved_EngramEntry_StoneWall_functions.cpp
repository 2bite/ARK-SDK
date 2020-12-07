// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_StoneWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_StoneWall.EngramEntry_StoneWall_C.ExecuteUbergraph_EngramEntry_StoneWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_StoneWall_C::ExecuteUbergraph_EngramEntry_StoneWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_StoneWall.EngramEntry_StoneWall_C.ExecuteUbergraph_EngramEntry_StoneWall");

	UEngramEntry_StoneWall_C_ExecuteUbergraph_EngramEntry_StoneWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
