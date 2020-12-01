// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Phio_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Phio.DinoEntry_Phio_C.ExecuteUbergraph_DinoEntry_Phio
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Phio_C::ExecuteUbergraph_DinoEntry_Phio(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Phio.DinoEntry_Phio_C.ExecuteUbergraph_DinoEntry_Phio");

	UDinoEntry_Phio_C_ExecuteUbergraph_DinoEntry_Phio_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
