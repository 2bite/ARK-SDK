// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Milkglider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Milkglider.DinoEntry_Milkglider_C.ExecuteUbergraph_DinoEntry_Milkglider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Milkglider_C::ExecuteUbergraph_DinoEntry_Milkglider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Milkglider.DinoEntry_Milkglider_C.ExecuteUbergraph_DinoEntry_Milkglider");

	UDinoEntry_Milkglider_C_ExecuteUbergraph_DinoEntry_Milkglider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
