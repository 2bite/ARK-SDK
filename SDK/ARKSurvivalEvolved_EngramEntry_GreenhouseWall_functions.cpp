// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_GreenhouseWall_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_GreenhouseWall.EngramEntry_GreenhouseWall_C.ExecuteUbergraph_EngramEntry_GreenhouseWall
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_GreenhouseWall_C::ExecuteUbergraph_EngramEntry_GreenhouseWall(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_GreenhouseWall.EngramEntry_GreenhouseWall_C.ExecuteUbergraph_EngramEntry_GreenhouseWall");

	UEngramEntry_GreenhouseWall_C_ExecuteUbergraph_EngramEntry_GreenhouseWall_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
