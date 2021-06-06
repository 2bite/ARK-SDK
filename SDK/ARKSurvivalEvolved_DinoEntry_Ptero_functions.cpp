// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Ptero_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Ptero.DinoEntry_Ptero_C.ExecuteUbergraph_DinoEntry_Ptero
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Ptero_C::ExecuteUbergraph_DinoEntry_Ptero(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Ptero.DinoEntry_Ptero_C.ExecuteUbergraph_DinoEntry_Ptero");

	UDinoEntry_Ptero_C_ExecuteUbergraph_DinoEntry_Ptero_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
