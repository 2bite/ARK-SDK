// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_B3_Far_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function B3_Far.B3_Far_C.ExecuteUbergraph_B3_Far
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AB3_Far_C::ExecuteUbergraph_B3_Far(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function B3_Far.B3_Far_C.ExecuteUbergraph_B3_Far");

	AB3_Far_C_ExecuteUbergraph_B3_Far_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
