// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Kentro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Kentro.DinoEntry_Kentro_C.ExecuteUbergraph_DinoEntry_Kentro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Kentro_C::ExecuteUbergraph_DinoEntry_Kentro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Kentro.DinoEntry_Kentro_C.ExecuteUbergraph_DinoEntry_Kentro");

	UDinoEntry_Kentro_C_ExecuteUbergraph_DinoEntry_Kentro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
