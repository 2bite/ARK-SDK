// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Moschops_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Moschops.DinoEntry_Moschops_C.ExecuteUbergraph_DinoEntry_Moschops
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Moschops_C::ExecuteUbergraph_DinoEntry_Moschops(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Moschops.DinoEntry_Moschops_C.ExecuteUbergraph_DinoEntry_Moschops");

	UDinoEntry_Moschops_C_ExecuteUbergraph_DinoEntry_Moschops_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
