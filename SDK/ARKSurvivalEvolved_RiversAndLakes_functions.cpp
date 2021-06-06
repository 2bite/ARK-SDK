// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_RiversAndLakes_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function RiversAndLakes.RiversAndLakes_C.ExecuteUbergraph_RiversAndLakes
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ARiversAndLakes_C::ExecuteUbergraph_RiversAndLakes(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function RiversAndLakes.RiversAndLakes_C.ExecuteUbergraph_RiversAndLakes");

	ARiversAndLakes_C_ExecuteUbergraph_RiversAndLakes_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
