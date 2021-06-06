// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Saber_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Saber.DinoEntry_Saber_C.ExecuteUbergraph_DinoEntry_Saber
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Saber_C::ExecuteUbergraph_DinoEntry_Saber(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Saber.DinoEntry_Saber_C.ExecuteUbergraph_DinoEntry_Saber");

	UDinoEntry_Saber_C_ExecuteUbergraph_DinoEntry_Saber_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
