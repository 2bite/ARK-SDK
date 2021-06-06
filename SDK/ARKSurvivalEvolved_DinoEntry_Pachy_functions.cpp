// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Pachy_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Pachy.DinoEntry_Pachy_C.ExecuteUbergraph_DinoEntry_Pachy
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Pachy_C::ExecuteUbergraph_DinoEntry_Pachy(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Pachy.DinoEntry_Pachy_C.ExecuteUbergraph_DinoEntry_Pachy");

	UDinoEntry_Pachy_C_ExecuteUbergraph_DinoEntry_Pachy_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
