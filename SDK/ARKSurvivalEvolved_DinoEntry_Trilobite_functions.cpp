// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Trilobite_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Trilobite.DinoEntry_Trilobite_C.ExecuteUbergraph_DinoEntry_Trilobite
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Trilobite_C::ExecuteUbergraph_DinoEntry_Trilobite(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Trilobite.DinoEntry_Trilobite_C.ExecuteUbergraph_DinoEntry_Trilobite");

	UDinoEntry_Trilobite_C_ExecuteUbergraph_DinoEntry_Trilobite_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
