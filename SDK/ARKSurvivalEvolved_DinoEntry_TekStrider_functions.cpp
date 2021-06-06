// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_TekStrider_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_TekStrider.DinoEntry_TekStrider_C.ExecuteUbergraph_DinoEntry_TekStrider
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_TekStrider_C::ExecuteUbergraph_DinoEntry_TekStrider(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_TekStrider.DinoEntry_TekStrider_C.ExecuteUbergraph_DinoEntry_TekStrider");

	UDinoEntry_TekStrider_C_ExecuteUbergraph_DinoEntry_TekStrider_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
