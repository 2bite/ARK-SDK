// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Spindles_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Spindles.DinoEntry_Spindles_C.ExecuteUbergraph_DinoEntry_Spindles
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Spindles_C::ExecuteUbergraph_DinoEntry_Spindles(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Spindles.DinoEntry_Spindles_C.ExecuteUbergraph_DinoEntry_Spindles");

	UDinoEntry_Spindles_C_ExecuteUbergraph_DinoEntry_Spindles_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
