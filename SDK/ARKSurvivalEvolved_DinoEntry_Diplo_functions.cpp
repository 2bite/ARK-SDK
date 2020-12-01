// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Diplo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Diplo.DinoEntry_Diplo_C.ExecuteUbergraph_DinoEntry_Diplo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Diplo_C::ExecuteUbergraph_DinoEntry_Diplo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Diplo.DinoEntry_Diplo_C.ExecuteUbergraph_DinoEntry_Diplo");

	UDinoEntry_Diplo_C_ExecuteUbergraph_DinoEntry_Diplo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
