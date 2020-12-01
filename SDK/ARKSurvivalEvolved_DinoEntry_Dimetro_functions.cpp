// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Dimetro_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Dimetro.DinoEntry_Dimetro_C.ExecuteUbergraph_DinoEntry_Dimetro
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Dimetro_C::ExecuteUbergraph_DinoEntry_Dimetro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Dimetro.DinoEntry_Dimetro_C.ExecuteUbergraph_DinoEntry_Dimetro");

	UDinoEntry_Dimetro_C_ExecuteUbergraph_DinoEntry_Dimetro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
